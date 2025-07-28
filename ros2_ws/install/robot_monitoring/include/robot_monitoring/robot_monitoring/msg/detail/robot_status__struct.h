// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_monitoring:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_monitoring/msg/robot_status.h"


#ifndef ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RobotStatus in the package robot_monitoring.
typedef struct robot_monitoring__msg__RobotStatus
{
  int32_t left_speed;
  int32_t right_speed;
  bool trash_full;
  bool emergency;
  int32_t left_encoder;
  int32_t right_encoder;
  int32_t acc_x;
  int32_t acc_y;
  int32_t acc_z;
  int32_t gyro_x;
  int32_t gyro_y;
  int32_t gyro_z;
} robot_monitoring__msg__RobotStatus;

// Struct for a sequence of robot_monitoring__msg__RobotStatus.
typedef struct robot_monitoring__msg__RobotStatus__Sequence
{
  robot_monitoring__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_monitoring__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MONITORING__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
