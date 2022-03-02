// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/sensor_performance_metric__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
gazebo_msgs__msg__SensorPerformanceMetric__init(gazebo_msgs__msg__SensorPerformanceMetric * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    gazebo_msgs__msg__SensorPerformanceMetric__fini(msg);
    return false;
  }
  // sim_update_rate
  // real_update_rate
  // fps
  return true;
}

void
gazebo_msgs__msg__SensorPerformanceMetric__fini(gazebo_msgs__msg__SensorPerformanceMetric * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // sim_update_rate
  // real_update_rate
  // fps
}

gazebo_msgs__msg__SensorPerformanceMetric *
gazebo_msgs__msg__SensorPerformanceMetric__create()
{
  gazebo_msgs__msg__SensorPerformanceMetric * msg = (gazebo_msgs__msg__SensorPerformanceMetric *)malloc(sizeof(gazebo_msgs__msg__SensorPerformanceMetric));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__SensorPerformanceMetric));
  bool success = gazebo_msgs__msg__SensorPerformanceMetric__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__SensorPerformanceMetric__destroy(gazebo_msgs__msg__SensorPerformanceMetric * msg)
{
  if (msg) {
    gazebo_msgs__msg__SensorPerformanceMetric__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__init(gazebo_msgs__msg__SensorPerformanceMetric__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__msg__SensorPerformanceMetric * data = NULL;
  if (size) {
    data = (gazebo_msgs__msg__SensorPerformanceMetric *)calloc(size, sizeof(gazebo_msgs__msg__SensorPerformanceMetric));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__SensorPerformanceMetric__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__SensorPerformanceMetric__fini(&data[i - 1]);
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
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__fini(gazebo_msgs__msg__SensorPerformanceMetric__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__msg__SensorPerformanceMetric__fini(&array->data[i]);
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

gazebo_msgs__msg__SensorPerformanceMetric__Sequence *
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__create(size_t size)
{
  gazebo_msgs__msg__SensorPerformanceMetric__Sequence * array = (gazebo_msgs__msg__SensorPerformanceMetric__Sequence *)malloc(sizeof(gazebo_msgs__msg__SensorPerformanceMetric__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__SensorPerformanceMetric__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__destroy(gazebo_msgs__msg__SensorPerformanceMetric__Sequence * array)
{
  if (array) {
    gazebo_msgs__msg__SensorPerformanceMetric__Sequence__fini(array);
  }
  free(array);
}
