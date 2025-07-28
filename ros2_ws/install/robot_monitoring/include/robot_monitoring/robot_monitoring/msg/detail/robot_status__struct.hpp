// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_monitoring:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_monitoring/msg/robot_status.hpp"


#ifndef ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
#define ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_monitoring__msg__RobotStatus __attribute__((deprecated))
#else
# define DEPRECATED__robot_monitoring__msg__RobotStatus __declspec(deprecated)
#endif

namespace robot_monitoring
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStatus_
{
  using Type = RobotStatus_<ContainerAllocator>;

  explicit RobotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_speed = 0l;
      this->right_speed = 0l;
      this->trash_full = false;
      this->emergency = false;
      this->left_encoder = 0l;
      this->right_encoder = 0l;
      this->acc_x = 0l;
      this->acc_y = 0l;
      this->acc_z = 0l;
      this->gyro_x = 0l;
      this->gyro_y = 0l;
      this->gyro_z = 0l;
    }
  }

  explicit RobotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_speed = 0l;
      this->right_speed = 0l;
      this->trash_full = false;
      this->emergency = false;
      this->left_encoder = 0l;
      this->right_encoder = 0l;
      this->acc_x = 0l;
      this->acc_y = 0l;
      this->acc_z = 0l;
      this->gyro_x = 0l;
      this->gyro_y = 0l;
      this->gyro_z = 0l;
    }
  }

  // field types and members
  using _left_speed_type =
    int32_t;
  _left_speed_type left_speed;
  using _right_speed_type =
    int32_t;
  _right_speed_type right_speed;
  using _trash_full_type =
    bool;
  _trash_full_type trash_full;
  using _emergency_type =
    bool;
  _emergency_type emergency;
  using _left_encoder_type =
    int32_t;
  _left_encoder_type left_encoder;
  using _right_encoder_type =
    int32_t;
  _right_encoder_type right_encoder;
  using _acc_x_type =
    int32_t;
  _acc_x_type acc_x;
  using _acc_y_type =
    int32_t;
  _acc_y_type acc_y;
  using _acc_z_type =
    int32_t;
  _acc_z_type acc_z;
  using _gyro_x_type =
    int32_t;
  _gyro_x_type gyro_x;
  using _gyro_y_type =
    int32_t;
  _gyro_y_type gyro_y;
  using _gyro_z_type =
    int32_t;
  _gyro_z_type gyro_z;

  // setters for named parameter idiom
  Type & set__left_speed(
    const int32_t & _arg)
  {
    this->left_speed = _arg;
    return *this;
  }
  Type & set__right_speed(
    const int32_t & _arg)
  {
    this->right_speed = _arg;
    return *this;
  }
  Type & set__trash_full(
    const bool & _arg)
  {
    this->trash_full = _arg;
    return *this;
  }
  Type & set__emergency(
    const bool & _arg)
  {
    this->emergency = _arg;
    return *this;
  }
  Type & set__left_encoder(
    const int32_t & _arg)
  {
    this->left_encoder = _arg;
    return *this;
  }
  Type & set__right_encoder(
    const int32_t & _arg)
  {
    this->right_encoder = _arg;
    return *this;
  }
  Type & set__acc_x(
    const int32_t & _arg)
  {
    this->acc_x = _arg;
    return *this;
  }
  Type & set__acc_y(
    const int32_t & _arg)
  {
    this->acc_y = _arg;
    return *this;
  }
  Type & set__acc_z(
    const int32_t & _arg)
  {
    this->acc_z = _arg;
    return *this;
  }
  Type & set__gyro_x(
    const int32_t & _arg)
  {
    this->gyro_x = _arg;
    return *this;
  }
  Type & set__gyro_y(
    const int32_t & _arg)
  {
    this->gyro_y = _arg;
    return *this;
  }
  Type & set__gyro_z(
    const int32_t & _arg)
  {
    this->gyro_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_monitoring::msg::RobotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_monitoring::msg::RobotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_monitoring::msg::RobotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_monitoring::msg::RobotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_monitoring::msg::RobotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_monitoring::msg::RobotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_monitoring::msg::RobotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_monitoring::msg::RobotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_monitoring::msg::RobotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_monitoring::msg::RobotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_monitoring__msg__RobotStatus
    std::shared_ptr<robot_monitoring::msg::RobotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_monitoring__msg__RobotStatus
    std::shared_ptr<robot_monitoring::msg::RobotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStatus_ & other) const
  {
    if (this->left_speed != other.left_speed) {
      return false;
    }
    if (this->right_speed != other.right_speed) {
      return false;
    }
    if (this->trash_full != other.trash_full) {
      return false;
    }
    if (this->emergency != other.emergency) {
      return false;
    }
    if (this->left_encoder != other.left_encoder) {
      return false;
    }
    if (this->right_encoder != other.right_encoder) {
      return false;
    }
    if (this->acc_x != other.acc_x) {
      return false;
    }
    if (this->acc_y != other.acc_y) {
      return false;
    }
    if (this->acc_z != other.acc_z) {
      return false;
    }
    if (this->gyro_x != other.gyro_x) {
      return false;
    }
    if (this->gyro_y != other.gyro_y) {
      return false;
    }
    if (this->gyro_z != other.gyro_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStatus_

// alias to use template instance with default allocator
using RobotStatus =
  robot_monitoring::msg::RobotStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_monitoring

#endif  // ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
