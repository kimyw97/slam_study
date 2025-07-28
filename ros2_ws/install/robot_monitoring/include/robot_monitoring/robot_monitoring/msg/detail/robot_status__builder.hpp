// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_monitoring:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_monitoring/msg/robot_status.hpp"


#ifndef ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_monitoring/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_monitoring
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_gyro_z
{
public:
  explicit Init_RobotStatus_gyro_z(::robot_monitoring::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::robot_monitoring::msg::RobotStatus gyro_z(::robot_monitoring::msg::RobotStatus::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_monitoring::msg::RobotStatus msg_;
};

class Init_RobotStatus_gyro_y
{
public:
  explicit Init_RobotStatus_gyro_y(::robot_monitoring::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_gyro_z gyro_y(::robot_monitoring::msg::RobotStatus::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_RobotStatus_gyro_z(msg_);
  }

private:
  ::robot_monitoring::msg::RobotStatus msg_;
};

class Init_RobotStatus_gyro_x
{
public:
  explicit Init_RobotStatus_gyro_x(::robot_monitoring::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_gyro_y gyro_x(::robot_monitoring::msg::RobotStatus::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_RobotStatus_gyro_y(msg_);
  }

private:
  ::robot_monitoring::msg::RobotStatus msg_;
};

class Init_RobotStatus_acc_z
{
public:
  explicit Init_RobotStatus_acc_z(::robot_monitoring::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_gyro_x acc_z(::robot_monitoring::msg::RobotStatus::_acc_z_type arg)
  {
    msg_.acc_z = std::move(arg);
    return Init_RobotStatus_gyro_x(msg_);
  }

private:
  ::robot_monitoring::msg::RobotStatus msg_;
};

class Init_RobotStatus_acc_y
{
public:
  explicit Init_RobotStatus_acc_y(::robot_monitoring::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_acc_z acc_y(::robot_monitoring::msg::RobotStatus::_acc_y_type arg)
  {
    msg_.acc_y = std::move(arg);
    return Init_RobotStatus_acc_z(msg_);
  }

private:
  ::robot_monitoring::msg::RobotStatus msg_;
};

class Init_RobotStatus_acc_x
{
public:
  explicit Init_RobotStatus_acc_x(::robot_monitoring::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_acc_y acc_x(::robot_monitoring::msg::RobotStatus::_acc_x_type arg)
  {
    msg_.acc_x = std::move(arg);
    return Init_RobotStatus_acc_y(msg_);
  }

private:
  ::robot_monitoring::msg::RobotStatus msg_;
};

class Init_RobotStatus_right_encoder
{
public:
  explicit Init_RobotStatus_right_encoder(::robot_monitoring::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_acc_x right_encoder(::robot_monitoring::msg::RobotStatus::_right_encoder_type arg)
  {
    msg_.right_encoder = std::move(arg);
    return Init_RobotStatus_acc_x(msg_);
  }

private:
  ::robot_monitoring::msg::RobotStatus msg_;
};

class Init_RobotStatus_left_encoder
{
public:
  explicit Init_RobotStatus_left_encoder(::robot_monitoring::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_right_encoder left_encoder(::robot_monitoring::msg::RobotStatus::_left_encoder_type arg)
  {
    msg_.left_encoder = std::move(arg);
    return Init_RobotStatus_right_encoder(msg_);
  }

private:
  ::robot_monitoring::msg::RobotStatus msg_;
};

class Init_RobotStatus_emergency
{
public:
  explicit Init_RobotStatus_emergency(::robot_monitoring::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_left_encoder emergency(::robot_monitoring::msg::RobotStatus::_emergency_type arg)
  {
    msg_.emergency = std::move(arg);
    return Init_RobotStatus_left_encoder(msg_);
  }

private:
  ::robot_monitoring::msg::RobotStatus msg_;
};

class Init_RobotStatus_trash_full
{
public:
  explicit Init_RobotStatus_trash_full(::robot_monitoring::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_emergency trash_full(::robot_monitoring::msg::RobotStatus::_trash_full_type arg)
  {
    msg_.trash_full = std::move(arg);
    return Init_RobotStatus_emergency(msg_);
  }

private:
  ::robot_monitoring::msg::RobotStatus msg_;
};

class Init_RobotStatus_right_speed
{
public:
  explicit Init_RobotStatus_right_speed(::robot_monitoring::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_trash_full right_speed(::robot_monitoring::msg::RobotStatus::_right_speed_type arg)
  {
    msg_.right_speed = std::move(arg);
    return Init_RobotStatus_trash_full(msg_);
  }

private:
  ::robot_monitoring::msg::RobotStatus msg_;
};

class Init_RobotStatus_left_speed
{
public:
  Init_RobotStatus_left_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_right_speed left_speed(::robot_monitoring::msg::RobotStatus::_left_speed_type arg)
  {
    msg_.left_speed = std::move(arg);
    return Init_RobotStatus_right_speed(msg_);
  }

private:
  ::robot_monitoring::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_monitoring::msg::RobotStatus>()
{
  return robot_monitoring::msg::builder::Init_RobotStatus_left_speed();
}

}  // namespace robot_monitoring

#endif  // ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
