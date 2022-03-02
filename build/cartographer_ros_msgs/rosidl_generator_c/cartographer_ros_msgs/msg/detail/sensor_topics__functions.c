// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/SensorTopics.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/sensor_topics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `laser_scan_topic`
// Member `multi_echo_laser_scan_topic`
// Member `point_cloud2_topic`
// Member `imu_topic`
// Member `odometry_topic`
// Member `nav_sat_fix_topic`
// Member `landmark_topic`
#include "rosidl_runtime_c/string_functions.h"

bool
cartographer_ros_msgs__msg__SensorTopics__init(cartographer_ros_msgs__msg__SensorTopics * msg)
{
  if (!msg) {
    return false;
  }
  // laser_scan_topic
  if (!rosidl_runtime_c__String__init(&msg->laser_scan_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  // multi_echo_laser_scan_topic
  if (!rosidl_runtime_c__String__init(&msg->multi_echo_laser_scan_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  // point_cloud2_topic
  if (!rosidl_runtime_c__String__init(&msg->point_cloud2_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  // imu_topic
  if (!rosidl_runtime_c__String__init(&msg->imu_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  // odometry_topic
  if (!rosidl_runtime_c__String__init(&msg->odometry_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  // nav_sat_fix_topic
  if (!rosidl_runtime_c__String__init(&msg->nav_sat_fix_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  // landmark_topic
  if (!rosidl_runtime_c__String__init(&msg->landmark_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__msg__SensorTopics__fini(cartographer_ros_msgs__msg__SensorTopics * msg)
{
  if (!msg) {
    return;
  }
  // laser_scan_topic
  rosidl_runtime_c__String__fini(&msg->laser_scan_topic);
  // multi_echo_laser_scan_topic
  rosidl_runtime_c__String__fini(&msg->multi_echo_laser_scan_topic);
  // point_cloud2_topic
  rosidl_runtime_c__String__fini(&msg->point_cloud2_topic);
  // imu_topic
  rosidl_runtime_c__String__fini(&msg->imu_topic);
  // odometry_topic
  rosidl_runtime_c__String__fini(&msg->odometry_topic);
  // nav_sat_fix_topic
  rosidl_runtime_c__String__fini(&msg->nav_sat_fix_topic);
  // landmark_topic
  rosidl_runtime_c__String__fini(&msg->landmark_topic);
}

cartographer_ros_msgs__msg__SensorTopics *
cartographer_ros_msgs__msg__SensorTopics__create()
{
  cartographer_ros_msgs__msg__SensorTopics * msg = (cartographer_ros_msgs__msg__SensorTopics *)malloc(sizeof(cartographer_ros_msgs__msg__SensorTopics));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__SensorTopics));
  bool success = cartographer_ros_msgs__msg__SensorTopics__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__SensorTopics__destroy(cartographer_ros_msgs__msg__SensorTopics * msg)
{
  if (msg) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
  }
  free(msg);
}


bool
cartographer_ros_msgs__msg__SensorTopics__Sequence__init(cartographer_ros_msgs__msg__SensorTopics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartographer_ros_msgs__msg__SensorTopics * data = NULL;
  if (size) {
    data = (cartographer_ros_msgs__msg__SensorTopics *)calloc(size, sizeof(cartographer_ros_msgs__msg__SensorTopics));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__SensorTopics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__SensorTopics__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cartographer_ros_msgs__msg__SensorTopics__Sequence__fini(cartographer_ros_msgs__msg__SensorTopics__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartographer_ros_msgs__msg__SensorTopics__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cartographer_ros_msgs__msg__SensorTopics__Sequence *
cartographer_ros_msgs__msg__SensorTopics__Sequence__create(size_t size)
{
  cartographer_ros_msgs__msg__SensorTopics__Sequence * array = (cartographer_ros_msgs__msg__SensorTopics__Sequence *)malloc(sizeof(cartographer_ros_msgs__msg__SensorTopics__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__SensorTopics__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__SensorTopics__Sequence__destroy(cartographer_ros_msgs__msg__SensorTopics__Sequence * array)
{
  if (array) {
    cartographer_ros_msgs__msg__SensorTopics__Sequence__fini(array);
  }
  free(array);
}
