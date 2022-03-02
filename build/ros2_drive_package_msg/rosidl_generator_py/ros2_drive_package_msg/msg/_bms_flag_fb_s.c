// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_drive_package_msg:msg/BmsFlagFb.idl
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
#include "ros2_drive_package_msg/msg/detail/bms_flag_fb__struct.h"
#include "ros2_drive_package_msg/msg/detail/bms_flag_fb__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_drive_package_msg__msg__bms_flag_fb__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("ros2_drive_package_msg.msg._bms_flag_fb.BmsFlagFb", full_classname_dest, 49) == 0);
  }
  ros2_drive_package_msg__msg__BmsFlagFb * ros_message = _ros_message;
  {  // bms_flag_fb_soc
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_soc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_flag_fb_soc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_single_ov
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_single_ov");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_single_ov = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_single_uv
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_single_uv");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_single_uv = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_ov
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_ov");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_ov = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_uv
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_uv");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_uv = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_charge_ot
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_charge_ot");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_charge_ot = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_charge_ut
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_charge_ut");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_charge_ut = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_discharge_ot
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_discharge_ot");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_discharge_ot = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_discharge_ut
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_discharge_ut");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_discharge_ut = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_charge_oc
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_charge_oc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_charge_oc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_discharge_oc
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_discharge_oc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_discharge_oc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_short
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_short");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_short = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_ic_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_ic_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_ic_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_lock_mos
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_lock_mos");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_lock_mos = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_charge_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_charge_flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_flag_fb_charge_flag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_hight_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_hight_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bms_flag_fb_hight_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bms_flag_fb_low_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb_low_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bms_flag_fb_low_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_drive_package_msg__msg__bms_flag_fb__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BmsFlagFb */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_drive_package_msg.msg._bms_flag_fb");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BmsFlagFb");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_drive_package_msg__msg__BmsFlagFb * ros_message = (ros2_drive_package_msg__msg__BmsFlagFb *)raw_ros_message;
  {  // bms_flag_fb_soc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_flag_fb_soc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_soc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_single_ov
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_single_ov ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_single_ov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_single_uv
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_single_uv ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_single_uv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_ov
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_ov ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_ov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_uv
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_uv ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_uv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_charge_ot
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_charge_ot ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_charge_ot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_charge_ut
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_charge_ut ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_charge_ut", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_discharge_ot
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_discharge_ot ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_discharge_ot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_discharge_ut
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_discharge_ut ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_discharge_ut", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_charge_oc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_charge_oc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_charge_oc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_discharge_oc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_discharge_oc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_discharge_oc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_short
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_short ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_short", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_ic_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_ic_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_ic_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_lock_mos
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_lock_mos ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_lock_mos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_charge_flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_flag_fb_charge_flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_charge_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_hight_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bms_flag_fb_hight_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_hight_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb_low_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bms_flag_fb_low_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb_low_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
