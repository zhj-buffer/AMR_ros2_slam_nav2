// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pcl_msgs:msg/PolygonMesh.idl
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
#include "pcl_msgs/msg/detail/polygon_mesh__struct.h"
#include "pcl_msgs/msg/detail/polygon_mesh__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "pcl_msgs/msg/detail/vertices__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);
bool pcl_msgs__msg__vertices__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pcl_msgs__msg__vertices__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pcl_msgs__msg__polygon_mesh__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("pcl_msgs.msg._polygon_mesh.PolygonMesh", full_classname_dest, 38) == 0);
  }
  pcl_msgs__msg__PolygonMesh * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cloud
    PyObject * field = PyObject_GetAttrString(_pymsg, "cloud");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->cloud)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // polygons
    PyObject * field = PyObject_GetAttrString(_pymsg, "polygons");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'polygons'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!pcl_msgs__msg__Vertices__Sequence__init(&(ros_message->polygons), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create pcl_msgs__msg__Vertices__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    pcl_msgs__msg__Vertices * dest = ros_message->polygons.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!pcl_msgs__msg__vertices__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pcl_msgs__msg__polygon_mesh__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PolygonMesh */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pcl_msgs.msg._polygon_mesh");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PolygonMesh");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pcl_msgs__msg__PolygonMesh * ros_message = (pcl_msgs__msg__PolygonMesh *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cloud
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->cloud);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cloud", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // polygons
    PyObject * field = NULL;
    size_t size = ros_message->polygons.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    pcl_msgs__msg__Vertices * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->polygons.data[i]);
      PyObject * pyitem = pcl_msgs__msg__vertices__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "polygons", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
