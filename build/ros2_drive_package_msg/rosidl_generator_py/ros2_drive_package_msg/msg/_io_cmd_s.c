// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_drive_package_msg:msg/IoCmd.idl
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
#include "ros2_drive_package_msg/msg/detail/io_cmd__struct.h"
#include "ros2_drive_package_msg/msg/detail/io_cmd__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_drive_package_msg__msg__io_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("ros2_drive_package_msg.msg._io_cmd.IoCmd", full_classname_dest, 40) == 0);
  }
  ros2_drive_package_msg__msg__IoCmd * ros_message = _ros_message;
  {  // io_cmd_lamp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_cmd_lamp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->io_cmd_lamp_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // io_cmd_unlock
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_cmd_unlock");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->io_cmd_unlock = (Py_True == field);
    Py_DECREF(field);
  }
  {  // io_cmd_lower_beam_headlamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_cmd_lower_beam_headlamp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->io_cmd_lower_beam_headlamp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // io_cmd_upper_beam_headlamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_cmd_upper_beam_headlamp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->io_cmd_upper_beam_headlamp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // io_cmd_turn_lamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_cmd_turn_lamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->io_cmd_turn_lamp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // io_cmd_braking_lamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_cmd_braking_lamp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->io_cmd_braking_lamp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // io_cmd_clearance_lamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_cmd_clearance_lamp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->io_cmd_clearance_lamp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // io_cmd_fog_lamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_cmd_fog_lamp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->io_cmd_fog_lamp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // io_cmd_speaker
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_cmd_speaker");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->io_cmd_speaker = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_drive_package_msg__msg__io_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IoCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_drive_package_msg.msg._io_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IoCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_drive_package_msg__msg__IoCmd * ros_message = (ros2_drive_package_msg__msg__IoCmd *)raw_ros_message;
  {  // io_cmd_lamp_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->io_cmd_lamp_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_cmd_lamp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_cmd_unlock
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->io_cmd_unlock ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_cmd_unlock", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_cmd_lower_beam_headlamp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->io_cmd_lower_beam_headlamp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_cmd_lower_beam_headlamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_cmd_upper_beam_headlamp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->io_cmd_upper_beam_headlamp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_cmd_upper_beam_headlamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_cmd_turn_lamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->io_cmd_turn_lamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_cmd_turn_lamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_cmd_braking_lamp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->io_cmd_braking_lamp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_cmd_braking_lamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_cmd_clearance_lamp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->io_cmd_clearance_lamp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_cmd_clearance_lamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_cmd_fog_lamp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->io_cmd_fog_lamp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_cmd_fog_lamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_cmd_speaker
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->io_cmd_speaker ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_cmd_speaker", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
