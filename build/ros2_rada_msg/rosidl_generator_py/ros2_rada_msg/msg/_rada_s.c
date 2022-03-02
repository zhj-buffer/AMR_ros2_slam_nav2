// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_rada_msg:msg/Rada.idl
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
#include "ros2_rada_msg/msg/detail/rada__struct.h"
#include "ros2_rada_msg/msg/detail/rada__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_rada_msg__msg__rada__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
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
    assert(strncmp("ros2_rada_msg.msg._rada.Rada", full_classname_dest, 28) == 0);
  }
  ros2_rada_msg__msg__Rada * ros_message = _ros_message;
  {  // r1
    PyObject * field = PyObject_GetAttrString(_pymsg, "r1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->r1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // r2
    PyObject * field = PyObject_GetAttrString(_pymsg, "r2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->r2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // r3
    PyObject * field = PyObject_GetAttrString(_pymsg, "r3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->r3 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // r4
    PyObject * field = PyObject_GetAttrString(_pymsg, "r4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->r4 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // crc
    PyObject * field = PyObject_GetAttrString(_pymsg, "crc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_rada_msg__msg__rada__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Rada */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_rada_msg.msg._rada");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Rada");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_rada_msg__msg__Rada * ros_message = (ros2_rada_msg__msg__Rada *)raw_ros_message;
  {  // r1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->r1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->r2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->r3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->r4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->crc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
