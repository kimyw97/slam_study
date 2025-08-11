#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <robot_monitoring/msg/robot_status.hpp>
#include <termios.h>
#include <fcntl.h>
#include <unistd.h>
#include <string>
#include <sstream>
#include <cmath>
#include <mutex>

struct PID {
    double kp{0.15}, ki{2.0}, kd{0.0};
    double out_min{-255}, out_max{255};
    double i_term{0.0}, prev_err{0.0}, d_prev{0.0}, d_lpf_alpha{0.2};
    double clamp(double v) const { return std::min(std::max(v, out_min), out_max); }
    void reset() { i_term = 0.0; prev_err = 0.0; d_prev = 0.0; }
    double update(double sp, double meas, double dt) {
        double err = sp - meas;
        double p_out = kp * err;
        i_term = clamp(i_term + ki * err * dt);
        double d_raw = (dt > 0) ? (err - prev_err) / dt : 0.0;
        double d_flt = d_prev + d_lpf_alpha * (d_raw - d_prev);
        d_prev = d_flt;
        prev_err = err;
        return clamp(p_out + i_term + kd * d_flt);
    }
};

class CmdVelToSerial : public rclcpp::Node {
public:
    CmdVelToSerial()
    : Node("cmdvel_to_serial")
    {
        this->declare_parameter("port", "/dev/ttyAMA0");
        this->declare_parameter("baudrate", 115200);
        this->declare_parameter("wheel_base", 0.3);  // m
        this->declare_parameter("wheel_radius", 0.065); // m
        this->declare_parameter("ticks_per_rev", 2048);
        this->declare_parameter("max_wheel_speed_mps", 1.0);
        this->declare_parameter("control_rate_hz", 100.0);
        this->declare_parameter("cmd_timeout", 0.5);
        this->declare_parameter("status_timeout", 0.5);

        get_parameter("port", port_);
        get_parameter("baudrate", baudrate_);
        get_parameter("wheel_base", wheel_base_);
        get_parameter("wheel_radius", wheel_radius_);
        get_parameter("ticks_per_rev", ticks_per_rev_);
        get_parameter("max_wheel_speed_mps", max_wheel_speed_mps_);
        get_parameter("control_rate_hz", control_rate_hz_);
        get_parameter("cmd_timeout", cmd_timeout_);
        get_parameter("status_timeout", status_timeout_);

        pidL_.out_min = pidR_.out_min = -255;
        pidL_.out_max = pidR_.out_max = 255;

        open_serial();

        subscription_cmd_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "/cmd_vel", 10,
            std::bind(&CmdVelToSerial::cmdvel_callback, this, std::placeholders::_1)
        );

        subscription_status_ = this->create_subscription<robot_monitoring::msg::RobotStatus>(
            "/robot_status", 50,
            std::bind(&CmdVelToSerial::status_callback, this, std::placeholders::_1)
        );

        control_timer_ = this->create_wall_timer(
            std::chrono::duration<double>(1.0 / control_rate_hz_),
            std::bind(&CmdVelToSerial::control_loop, this)
        );

        last_cmd_time_ = this->now();
        last_status_time_ = this->now();
        prev_encL_ = prev_encR_ = 0;
    }

    ~CmdVelToSerial() {
        if (serial_fd_ >= 0) {
            close(serial_fd_);
        }
    }

private:
    void open_serial() {
        serial_fd_ = open(port_.c_str(), O_RDWR | O_NOCTTY | O_SYNC);
        if (serial_fd_ < 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to open serial port: %s", port_.c_str());
            return;
        }

        struct termios tty;
        if (tcgetattr(serial_fd_, &tty) != 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to get serial attributes");
            return;
        }

        cfsetospeed(&tty, B115200);
        cfsetispeed(&tty, B115200);

        tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8;
        tty.c_iflag &= ~IGNBRK;
        tty.c_lflag = 0;
        tty.c_oflag = 0;
        tty.c_cc[VMIN]  = 0;
        tty.c_cc[VTIME] = 5;

        tty.c_iflag &= ~(IXON | IXOFF | IXANY);
        tty.c_cflag |= (CLOCAL | CREAD);
        tty.c_cflag &= ~(PARENB | PARODD);
        tty.c_cflag &= ~CSTOPB;
        tty.c_cflag &= ~CRTSCTS;

        if (tcsetattr(serial_fd_, TCSANOW, &tty) != 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to set serial attributes");
            return;
        }

        RCLCPP_INFO(this->get_logger(), "Serial port opened successfully.");
    }

    void cmdvel_callback(const geometry_msgs::msg::Twist::SharedPtr msg) {
        std::scoped_lock lk(mtx_);
        last_cmd_time_ = this->now();

        double v = msg->linear.x;
        double w = msg->angular.z;

        double vL = v - (wheel_base_ / 2.0) * w;
        double vR = v + (wheel_base_ / 2.0) * w;
        vL = std::clamp(vL, -max_wheel_speed_mps_, max_wheel_speed_mps_);
        vR = std::clamp(vR, -max_wheel_speed_mps_, max_wheel_speed_mps_);

        double wL = vL / wheel_radius_;
        double wR = vR / wheel_radius_;

        sp_tick_L_ = wL / (2.0 * M_PI) * ticks_per_rev_;
        sp_tick_R_ = wR / (2.0 * M_PI) * ticks_per_rev_;
    }

    void status_callback(const robot_monitoring::msg::RobotStatus::SharedPtr msg) {
        std::scoped_lock lk(mtx_);
        last_status_time_ = this->now();
        last_encL_ = msg->left_encoder;
        last_encR_ = msg->right_encoder;
        status_valid_ = true;
    }

    void control_loop() {
        double dt = 1.0 / control_rate_hz_;

        int encL, encR;
        {
            std::scoped_lock lk(mtx_);
            encL = last_encL_;
            encR = last_encR_;
        }

        if (status_valid_) {
            int dL = encL - prev_encL_;
            int dR = encR - prev_encR_;
            meas_tick_L_ = meas_tick_L_ + 0.3 * ((double)dL / dt - meas_tick_L_);
            meas_tick_R_ = meas_tick_R_ + 0.3 * ((double)dR / dt - meas_tick_R_);
            prev_encL_ = encL;
            prev_encR_ = encR;
        }

        double uL, uR;
        {
            std::scoped_lock lk(mtx_);
            uL = pidL_.update(sp_tick_L_, meas_tick_L_, dt);
            uR = pidR_.update(sp_tick_R_, meas_tick_R_, dt);
        }

        send_pwm((int)std::lround(uL), (int)std::lround(uR));
    }

    void send_pwm(int l, int r) {
        if (serial_fd_ < 0) return;
        std::stringstream ss;
        ss << "L" << l << "R" << r << "\n";
        std::string cmd = ss.str();
        write(serial_fd_, cmd.c_str(), cmd.size());
    }

    // Parameters
    std::string port_;
    int baudrate_;
    double wheel_base_;
    double wheel_radius_;
    int ticks_per_rev_;
    double max_wheel_speed_mps_;
    double control_rate_hz_;
    double cmd_timeout_;
    double status_timeout_;

    // Serial
    int serial_fd_{-1};

    // ROS
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr subscription_cmd_;
    rclcpp::Subscription<robot_monitoring::msg::RobotStatus>::SharedPtr subscription_status_;
    rclcpp::TimerBase::SharedPtr control_timer_;

    // State
    std::mutex mtx_;
    rclcpp::Time last_cmd_time_;
    rclcpp::Time last_status_time_;
    bool status_valid_{false};
    int last_encL_{0}, last_encR_{0}, prev_encL_{0}, prev_encR_{0};
    double sp_tick_L_{0.0}, sp_tick_R_{0.0};
    double meas_tick_L_{0.0}, meas_tick_R_{0.0};

    PID pidL_, pidR_;
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CmdVelToSerial>());
    rclcpp::shutdown();
    return 0;
}
