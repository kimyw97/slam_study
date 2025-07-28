// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robot_monitoring:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robot_monitoring/msg/detail/robot_status__struct.h"
#include "robot_monitoring/msg/detail/robot_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robot_monitoring__msg__robot_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robot_monitoring.msg._robot_status.RobotStatus", full_classname_dest, 46) == 0);
  }
  robot_monitoring__msg__RobotStatus * ros_message = _ros_message;
  {  // left_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trash_full
    PyObject * field = PyObject_GetAttrString(_pymsg, "trash_full");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->trash_full = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_encoder
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_encoder");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_encoder = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_encoder
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_encoder");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_encoder = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_y = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acc_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_z");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_z = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gyro_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gyro_x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gyro_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gyro_y = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gyro_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_z");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gyro_z = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robot_monitoring__msg__robot_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robot_monitoring.msg._robot_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robot_monitoring__msg__RobotStatus * ros_message = (robot_monitoring__msg__RobotStatus *)raw_ros_message;
  {  // left_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trash_full
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->trash_full ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trash_full", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_encoder
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_encoder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_encoder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_encoder
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_encoder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_encoder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acc_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_z
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acc_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gyro_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gyro_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_z
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gyro_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
