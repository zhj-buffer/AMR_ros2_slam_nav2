// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cartographer_ros_msgs:msg/TrajectoryOptions.idl
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
#include "cartographer_ros_msgs/msg/detail/trajectory_options__struct.h"
#include "cartographer_ros_msgs/msg/detail/trajectory_options__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool cartographer_ros_msgs__msg__trajectory_options__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("cartographer_ros_msgs.msg._trajectory_options.TrajectoryOptions", full_classname_dest, 63) == 0);
  }
  cartographer_ros_msgs__msg__TrajectoryOptions * ros_message = _ros_message;
  {  // tracking_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_frame");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->tracking_frame, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // published_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "published_frame");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->published_frame, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // odom_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_frame");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->odom_frame, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // provide_odom_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "provide_odom_frame");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->provide_odom_frame = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_odometry
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_odometry");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_odometry = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_nav_sat
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_nav_sat");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_nav_sat = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_landmarks
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_landmarks");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_landmarks = (Py_True == field);
    Py_DECREF(field);
  }
  {  // publish_frame_projected_to_2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "publish_frame_projected_to_2d");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->publish_frame_projected_to_2d = (Py_True == field);
    Py_DECREF(field);
  }
  {  // num_laser_scans
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_laser_scans");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_laser_scans = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // num_multi_echo_laser_scans
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_multi_echo_laser_scans");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_multi_echo_laser_scans = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // num_subdivisions_per_laser_scan
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_subdivisions_per_laser_scan");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_subdivisions_per_laser_scan = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // num_point_clouds
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_point_clouds");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_point_clouds = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rangefinder_sampling_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "rangefinder_sampling_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rangefinder_sampling_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odometry_sampling_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "odometry_sampling_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odometry_sampling_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fixed_frame_pose_sampling_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixed_frame_pose_sampling_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fixed_frame_pose_sampling_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_sampling_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_sampling_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_sampling_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // landmarks_sampling_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "landmarks_sampling_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->landmarks_sampling_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trajectory_builder_options_proto
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_builder_options_proto");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->trajectory_builder_options_proto, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cartographer_ros_msgs__msg__trajectory_options__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrajectoryOptions */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cartographer_ros_msgs.msg._trajectory_options");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrajectoryOptions");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cartographer_ros_msgs__msg__TrajectoryOptions * ros_message = (cartographer_ros_msgs__msg__TrajectoryOptions *)raw_ros_message;
  {  // tracking_frame
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->tracking_frame.data,
      strlen(ros_message->tracking_frame.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // published_frame
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->published_frame.data,
      strlen(ros_message->published_frame.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "published_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_frame
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->odom_frame.data,
      strlen(ros_message->odom_frame.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // provide_odom_frame
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->provide_odom_frame ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "provide_odom_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_odometry
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_odometry ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_odometry", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_nav_sat
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_nav_sat ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_nav_sat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_landmarks
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_landmarks ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_landmarks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // publish_frame_projected_to_2d
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->publish_frame_projected_to_2d ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "publish_frame_projected_to_2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_laser_scans
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_laser_scans);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_laser_scans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_multi_echo_laser_scans
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_multi_echo_laser_scans);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_multi_echo_laser_scans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_subdivisions_per_laser_scan
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_subdivisions_per_laser_scan);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_subdivisions_per_laser_scan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_point_clouds
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_point_clouds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_point_clouds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rangefinder_sampling_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rangefinder_sampling_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rangefinder_sampling_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odometry_sampling_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odometry_sampling_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odometry_sampling_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixed_frame_pose_sampling_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fixed_frame_pose_sampling_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fixed_frame_pose_sampling_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_sampling_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_sampling_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_sampling_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // landmarks_sampling_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->landmarks_sampling_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "landmarks_sampling_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_builder_options_proto
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->trajectory_builder_options_proto.data,
      strlen(ros_message->trajectory_builder_options_proto.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_builder_options_proto", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
