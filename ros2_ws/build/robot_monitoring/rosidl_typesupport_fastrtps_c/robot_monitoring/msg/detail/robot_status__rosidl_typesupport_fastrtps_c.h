// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robot_monitoring:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#ifndef ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_monitoring/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_monitoring/msg/detail/robot_status__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_monitoring
bool cdr_serialize_robot_monitoring__msg__RobotStatus(
  const robot_monitoring__msg__RobotStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_monitoring
bool cdr_deserialize_robot_monitoring__msg__RobotStatus(
  eprosima::fastcdr::Cdr &,
  robot_monitoring__msg__RobotStatus * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_monitoring
size_t get_serialized_size_robot_monitoring__msg__RobotStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_monitoring
size_t max_serialized_size_robot_monitoring__msg__RobotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_monitoring
bool cdr_serialize_key_robot_monitoring__msg__RobotStatus(
  const robot_monitoring__msg__RobotStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_monitoring
size_t get_serialized_size_key_robot_monitoring__msg__RobotStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_monitoring
size_t max_serialized_size_key_robot_monitoring__msg__RobotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_monitoring
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_monitoring, msg, RobotStatus)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
