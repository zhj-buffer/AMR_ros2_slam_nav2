// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dwb_msgs:msg/Trajectory2D.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `velocity`
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"
// Member `time_offsets`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
dwb_msgs__msg__Trajectory2D__init(dwb_msgs__msg__Trajectory2D * msg)
{
  if (!msg) {
    return false;
  }
  // velocity
  if (!nav_2d_msgs__msg__Twist2D__init(&msg->velocity)) {
    dwb_msgs__msg__Trajectory2D__fini(msg);
    return false;
  }
  // time_offsets
  if (!builtin_interfaces__msg__Duration__Sequence__init(&msg->time_offsets, 0)) {
    dwb_msgs__msg__Trajectory2D__fini(msg);
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose2D__Sequence__init(&msg->poses, 0)) {
    dwb_msgs__msg__Trajectory2D__fini(msg);
    return false;
  }
  return true;
}

void
dwb_msgs__msg__Trajectory2D__fini(dwb_msgs__msg__Trajectory2D * msg)
{
  if (!msg) {
    return;
  }
  // velocity
  nav_2d_msgs__msg__Twist2D__fini(&msg->velocity);
  // time_offsets
  builtin_interfaces__msg__Duration__Sequence__fini(&msg->time_offsets);
  // poses
  geometry_msgs__msg__Pose2D__Sequence__fini(&msg->poses);
}

dwb_msgs__msg__Trajectory2D *
dwb_msgs__msg__Trajectory2D__create()
{
  dwb_msgs__msg__Trajectory2D * msg = (dwb_msgs__msg__Trajectory2D *)malloc(sizeof(dwb_msgs__msg__Trajectory2D));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__msg__Trajectory2D));
  bool success = dwb_msgs__msg__Trajectory2D__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__msg__Trajectory2D__destroy(dwb_msgs__msg__Trajectory2D * msg)
{
  if (msg) {
    dwb_msgs__msg__Trajectory2D__fini(msg);
  }
  free(msg);
}


bool
dwb_msgs__msg__Trajectory2D__Sequence__init(dwb_msgs__msg__Trajectory2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dwb_msgs__msg__Trajectory2D * data = NULL;
  if (size) {
    data = (dwb_msgs__msg__Trajectory2D *)calloc(size, sizeof(dwb_msgs__msg__Trajectory2D));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__msg__Trajectory2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__msg__Trajectory2D__fini(&data[i - 1]);
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
dwb_msgs__msg__Trajectory2D__Sequence__fini(dwb_msgs__msg__Trajectory2D__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dwb_msgs__msg__Trajectory2D__fini(&array->data[i]);
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

dwb_msgs__msg__Trajectory2D__Sequence *
dwb_msgs__msg__Trajectory2D__Sequence__create(size_t size)
{
  dwb_msgs__msg__Trajectory2D__Sequence * array = (dwb_msgs__msg__Trajectory2D__Sequence *)malloc(sizeof(dwb_msgs__msg__Trajectory2D__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__msg__Trajectory2D__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dwb_msgs__msg__Trajectory2D__Sequence__destroy(dwb_msgs__msg__Trajectory2D__Sequence * array)
{
  if (array) {
    dwb_msgs__msg__Trajectory2D__Sequence__fini(array);
  }
  free(array);
}
