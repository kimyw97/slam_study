// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_monitoring:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#include "robot_monitoring/msg/detail/robot_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_monitoring
const rosidl_type_hash_t *
robot_monitoring__msg__RobotStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x2f, 0x9e, 0xa1, 0x65, 0x9e, 0xa2, 0x79,
      0x06, 0x0b, 0xde, 0x8d, 0x2f, 0x67, 0x50, 0xad,
      0xe8, 0x4b, 0xf0, 0xb5, 0x86, 0x5e, 0x0f, 0x67,
      0x1c, 0xe4, 0x07, 0x03, 0x69, 0x28, 0x98, 0x2c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot_monitoring__msg__RobotStatus__TYPE_NAME[] = "robot_monitoring/msg/RobotStatus";

// Define type names, field names, and default values
static char robot_monitoring__msg__RobotStatus__FIELD_NAME__left_speed[] = "left_speed";
static char robot_monitoring__msg__RobotStatus__FIELD_NAME__right_speed[] = "right_speed";
static char robot_monitoring__msg__RobotStatus__FIELD_NAME__trash_full[] = "trash_full";
static char robot_monitoring__msg__RobotStatus__FIELD_NAME__emergency[] = "emergency";
static char robot_monitoring__msg__RobotStatus__FIELD_NAME__left_encoder[] = "left_encoder";
static char robot_monitoring__msg__RobotStatus__FIELD_NAME__right_encoder[] = "right_encoder";
static char robot_monitoring__msg__RobotStatus__FIELD_NAME__acc_x[] = "acc_x";
static char robot_monitoring__msg__RobotStatus__FIELD_NAME__acc_y[] = "acc_y";
static char robot_monitoring__msg__RobotStatus__FIELD_NAME__acc_z[] = "acc_z";
static char robot_monitoring__msg__RobotStatus__FIELD_NAME__gyro_x[] = "gyro_x";
static char robot_monitoring__msg__RobotStatus__FIELD_NAME__gyro_y[] = "gyro_y";
static char robot_monitoring__msg__RobotStatus__FIELD_NAME__gyro_z[] = "gyro_z";

static rosidl_runtime_c__type_description__Field robot_monitoring__msg__RobotStatus__FIELDS[] = {
  {
    {robot_monitoring__msg__RobotStatus__FIELD_NAME__left_speed, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_monitoring__msg__RobotStatus__FIELD_NAME__right_speed, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_monitoring__msg__RobotStatus__FIELD_NAME__trash_full, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_monitoring__msg__RobotStatus__FIELD_NAME__emergency, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_monitoring__msg__RobotStatus__FIELD_NAME__left_encoder, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_monitoring__msg__RobotStatus__FIELD_NAME__right_encoder, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_monitoring__msg__RobotStatus__FIELD_NAME__acc_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_monitoring__msg__RobotStatus__FIELD_NAME__acc_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_monitoring__msg__RobotStatus__FIELD_NAME__acc_z, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_monitoring__msg__RobotStatus__FIELD_NAME__gyro_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_monitoring__msg__RobotStatus__FIELD_NAME__gyro_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_monitoring__msg__RobotStatus__FIELD_NAME__gyro_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_monitoring__msg__RobotStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_monitoring__msg__RobotStatus__TYPE_NAME, 32, 32},
      {robot_monitoring__msg__RobotStatus__FIELDS, 12, 12},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 left_speed\n"
  "int32 right_speed\n"
  "bool trash_full\n"
  "bool emergency\n"
  "int32 left_encoder\n"
  "int32 right_encoder\n"
  "int32 acc_x\n"
  "int32 acc_y\n"
  "int32 acc_z\n"
  "int32 gyro_x\n"
  "int32 gyro_y\n"
  "int32 gyro_z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_monitoring__msg__RobotStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_monitoring__msg__RobotStatus__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 179, 179},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_monitoring__msg__RobotStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_monitoring__msg__RobotStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
