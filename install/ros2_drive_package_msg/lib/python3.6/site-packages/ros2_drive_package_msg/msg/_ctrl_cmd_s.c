// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_drive_package_msg:msg/CtrlCmd.idl
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
#include "ros2_drive_package_msg/msg/detail/ctrl_cmd__struct.h"
#include "ros2_drive_package_msg/msg/detail/ctrl_cmd__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_drive_package_msg__msg__ctrl_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("ros2_drive_package_msg.msg._ctrl_cmd.CtrlCmd", full_classname_dest, 44) == 0);
  }
  ros2_drive_package_msg__msg__CtrlCmd * ros_message = _ros_message;
  {  // ctrl_cmd_gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "ctrl_cmd_gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ctrl_cmd_gear = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ctrl_cmd_linear
    PyObject * field = PyObject_GetAttrString(_pymsg, "ctrl_cmd_linear");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ctrl_cmd_linear = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ctrl_cmd_angular
    PyObject * field = PyObject_GetAttrString(_pymsg, "ctrl_cmd_angular");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ctrl_cmd_angular = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_drive_package_msg__msg__ctrl_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CtrlCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_drive_package_msg.msg._ctrl_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CtrlCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_drive_package_msg__msg__CtrlCmd * ros_message = (ros2_drive_package_msg__msg__CtrlCmd *)raw_ros_message;
  {  // ctrl_cmd_gear
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ctrl_cmd_gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ctrl_cmd_gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ctrl_cmd_linear
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ctrl_cmd_linear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ctrl_cmd_linear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ctrl_cmd_angular
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ctrl_cmd_angular);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ctrl_cmd_angular", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
