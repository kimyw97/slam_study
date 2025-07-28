// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_monitoring:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "robot_monitoring/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robot_monitoring__msg__RobotStatus__init(robot_monitoring__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // left_speed
  // right_speed
  // trash_full
  // emergency
  // left_encoder
  // right_encoder
  // acc_x
  // acc_y
  // acc_z
  // gyro_x
  // gyro_y
  // gyro_z
  return true;
}

void
robot_monitoring__msg__RobotStatus__fini(robot_monitoring__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // left_speed
  // right_speed
  // trash_full
  // emergency
  // left_encoder
  // right_encoder
  // acc_x
  // acc_y
  // acc_z
  // gyro_x
  // gyro_y
  // gyro_z
}

bool
robot_monitoring__msg__RobotStatus__are_equal(const robot_monitoring__msg__RobotStatus * lhs, const robot_monitoring__msg__RobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_speed
  if (lhs->left_speed != rhs->left_speed) {
    return false;
  }
  // right_speed
  if (lhs->right_speed != rhs->right_speed) {
    return false;
  }
  // trash_full
  if (lhs->trash_full != rhs->trash_full) {
    return false;
  }
  // emergency
  if (lhs->emergency != rhs->emergency) {
    return false;
  }
  // left_encoder
  if (lhs->left_encoder != rhs->left_encoder) {
    return false;
  }
  // right_encoder
  if (lhs->right_encoder != rhs->right_encoder) {
    return false;
  }
  // acc_x
  if (lhs->acc_x != rhs->acc_x) {
    return false;
  }
  // acc_y
  if (lhs->acc_y != rhs->acc_y) {
    return false;
  }
  // acc_z
  if (lhs->acc_z != rhs->acc_z) {
    return false;
  }
  // gyro_x
  if (lhs->gyro_x != rhs->gyro_x) {
    return false;
  }
  // gyro_y
  if (lhs->gyro_y != rhs->gyro_y) {
    return false;
  }
  // gyro_z
  if (lhs->gyro_z != rhs->gyro_z) {
    return false;
  }
  return true;
}

bool
robot_monitoring__msg__RobotStatus__copy(
  const robot_monitoring__msg__RobotStatus * input,
  robot_monitoring__msg__RobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // left_speed
  output->left_speed = input->left_speed;
  // right_speed
  output->right_speed = input->right_speed;
  // trash_full
  output->trash_full = input->trash_full;
  // emergency
  output->emergency = input->emergency;
  // left_encoder
  output->left_encoder = input->left_encoder;
  // right_encoder
  output->right_encoder = input->right_encoder;
  // acc_x
  output->acc_x = input->acc_x;
  // acc_y
  output->acc_y = input->acc_y;
  // acc_z
  output->acc_z = input->acc_z;
  // gyro_x
  output->gyro_x = input->gyro_x;
  // gyro_y
  output->gyro_y = input->gyro_y;
  // gyro_z
  output->gyro_z = input->gyro_z;
  return true;
}

robot_monitoring__msg__RobotStatus *
robot_monitoring__msg__RobotStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_monitoring__msg__RobotStatus * msg = (robot_monitoring__msg__RobotStatus *)allocator.allocate(sizeof(robot_monitoring__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_monitoring__msg__RobotStatus));
  bool success = robot_monitoring__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_monitoring__msg__RobotStatus__destroy(robot_monitoring__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_monitoring__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_monitoring__msg__RobotStatus__Sequence__init(robot_monitoring__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_monitoring__msg__RobotStatus * data = NULL;

  if (size) {
    data = (robot_monitoring__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(robot_monitoring__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_monitoring__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_monitoring__msg__RobotStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_monitoring__msg__RobotStatus__Sequence__fini(robot_monitoring__msg__RobotStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_monitoring__msg__RobotStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_monitoring__msg__RobotStatus__Sequence *
robot_monitoring__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_monitoring__msg__RobotStatus__Sequence * array = (robot_monitoring__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(robot_monitoring__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_monitoring__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_monitoring__msg__RobotStatus__Sequence__destroy(robot_monitoring__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_monitoring__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_monitoring__msg__RobotStatus__Sequence__are_equal(const robot_monitoring__msg__RobotStatus__Sequence * lhs, const robot_monitoring__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_monitoring__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_monitoring__msg__RobotStatus__Sequence__copy(
  const robot_monitoring__msg__RobotStatus__Sequence * input,
  robot_monitoring__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_monitoring__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_monitoring__msg__RobotStatus * data =
      (robot_monitoring__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_monitoring__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_monitoring__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_monitoring__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
