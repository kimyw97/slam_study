// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_monitoring:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_monitoring/msg/robot_status.hpp"


#ifndef ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_monitoring/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_monitoring
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_speed
  {
    out << "left_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_speed, out);
    out << ", ";
  }

  // member: right_speed
  {
    out << "right_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_speed, out);
    out << ", ";
  }

  // member: trash_full
  {
    out << "trash_full: ";
    rosidl_generator_traits::value_to_yaml(msg.trash_full, out);
    out << ", ";
  }

  // member: emergency
  {
    out << "emergency: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency, out);
    out << ", ";
  }

  // member: left_encoder
  {
    out << "left_encoder: ";
    rosidl_generator_traits::value_to_yaml(msg.left_encoder, out);
    out << ", ";
  }

  // member: right_encoder
  {
    out << "right_encoder: ";
    rosidl_generator_traits::value_to_yaml(msg.right_encoder, out);
    out << ", ";
  }

  // member: acc_x
  {
    out << "acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_x, out);
    out << ", ";
  }

  // member: acc_y
  {
    out << "acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_y, out);
    out << ", ";
  }

  // member: acc_z
  {
    out << "acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_z, out);
    out << ", ";
  }

  // member: gyro_x
  {
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << ", ";
  }

  // member: gyro_y
  {
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << ", ";
  }

  // member: gyro_z
  {
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_speed, out);
    out << "\n";
  }

  // member: right_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_speed, out);
    out << "\n";
  }

  // member: trash_full
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trash_full: ";
    rosidl_generator_traits::value_to_yaml(msg.trash_full, out);
    out << "\n";
  }

  // member: emergency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency, out);
    out << "\n";
  }

  // member: left_encoder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_encoder: ";
    rosidl_generator_traits::value_to_yaml(msg.left_encoder, out);
    out << "\n";
  }

  // member: right_encoder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_encoder: ";
    rosidl_generator_traits::value_to_yaml(msg.right_encoder, out);
    out << "\n";
  }

  // member: acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_x, out);
    out << "\n";
  }

  // member: acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_y, out);
    out << "\n";
  }

  // member: acc_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_z, out);
    out << "\n";
  }

  // member: gyro_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << "\n";
  }

  // member: gyro_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << "\n";
  }

  // member: gyro_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_monitoring

namespace rosidl_generator_traits
{

[[deprecated("use robot_monitoring::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_monitoring::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_monitoring::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_monitoring::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_monitoring::msg::RobotStatus & msg)
{
  return robot_monitoring::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_monitoring::msg::RobotStatus>()
{
  return "robot_monitoring::msg::RobotStatus";
}

template<>
inline const char * name<robot_monitoring::msg::RobotStatus>()
{
  return "robot_monitoring/msg/RobotStatus";
}

template<>
struct has_fixed_size<robot_monitoring::msg::RobotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_monitoring::msg::RobotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_monitoring::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
