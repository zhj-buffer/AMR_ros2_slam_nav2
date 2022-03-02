// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/PerformanceMetrics.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/performance_metrics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sensors`
#include "gazebo_msgs/msg/detail/sensor_performance_metric__functions.h"

bool
gazebo_msgs__msg__PerformanceMetrics__init(gazebo_msgs__msg__PerformanceMetrics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gazebo_msgs__msg__PerformanceMetrics__fini(msg);
    return false;
  }
  // real_time_factor
  // sensors
  if (!gazebo_msgs__msg__SensorPerformanceMetric__Sequence__init(&msg->sensors, 0)) {
    gazebo_msgs__msg__PerformanceMetrics__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__msg__PerformanceMetrics__fini(gazebo_msgs__msg__PerformanceMetrics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // real_time_factor
  // sensors
  gazebo_msgs__msg__SensorPerformanceMetric__Sequence__fini(&msg->sensors);
}

gazebo_msgs__msg__PerformanceMetrics *
gazebo_msgs__msg__PerformanceMetrics__create()
{
  gazebo_msgs__msg__PerformanceMetrics * msg = (gazebo_msgs__msg__PerformanceMetrics *)malloc(sizeof(gazebo_msgs__msg__PerformanceMetrics));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__PerformanceMetrics));
  bool success = gazebo_msgs__msg__PerformanceMetrics__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__PerformanceMetrics__destroy(gazebo_msgs__msg__PerformanceMetrics * msg)
{
  if (msg) {
    gazebo_msgs__msg__PerformanceMetrics__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__msg__PerformanceMetrics__Sequence__init(gazebo_msgs__msg__PerformanceMetrics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__msg__PerformanceMetrics * data = NULL;
  if (size) {
    data = (gazebo_msgs__msg__PerformanceMetrics *)calloc(size, sizeof(gazebo_msgs__msg__PerformanceMetrics));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__PerformanceMetrics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__PerformanceMetrics__fini(&data[i - 1]);
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
gazebo_msgs__msg__PerformanceMetrics__Sequence__fini(gazebo_msgs__msg__PerformanceMetrics__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__msg__PerformanceMetrics__fini(&array->data[i]);
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

gazebo_msgs__msg__PerformanceMetrics__Sequence *
gazebo_msgs__msg__PerformanceMetrics__Sequence__create(size_t size)
{
  gazebo_msgs__msg__PerformanceMetrics__Sequence * array = (gazebo_msgs__msg__PerformanceMetrics__Sequence *)malloc(sizeof(gazebo_msgs__msg__PerformanceMetrics__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__PerformanceMetrics__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__PerformanceMetrics__Sequence__destroy(gazebo_msgs__msg__PerformanceMetrics__Sequence * array)
{
  if (array) {
    gazebo_msgs__msg__PerformanceMetrics__Sequence__fini(array);
  }
  free(array);
}
