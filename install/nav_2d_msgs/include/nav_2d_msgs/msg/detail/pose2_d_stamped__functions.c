// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_2d_msgs:msg/Pose2DStamped.idl
// generated code does not contain a copyright notice
#include "nav_2d_msgs/msg/detail/pose2_d_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
nav_2d_msgs__msg__Pose2DStamped__init(nav_2d_msgs__msg__Pose2DStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nav_2d_msgs__msg__Pose2DStamped__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__init(&msg->pose)) {
    nav_2d_msgs__msg__Pose2DStamped__fini(msg);
    return false;
  }
  return true;
}

void
nav_2d_msgs__msg__Pose2DStamped__fini(nav_2d_msgs__msg__Pose2DStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose2D__fini(&msg->pose);
}

nav_2d_msgs__msg__Pose2DStamped *
nav_2d_msgs__msg__Pose2DStamped__create()
{
  nav_2d_msgs__msg__Pose2DStamped * msg = (nav_2d_msgs__msg__Pose2DStamped *)malloc(sizeof(nav_2d_msgs__msg__Pose2DStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_2d_msgs__msg__Pose2DStamped));
  bool success = nav_2d_msgs__msg__Pose2DStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav_2d_msgs__msg__Pose2DStamped__destroy(nav_2d_msgs__msg__Pose2DStamped * msg)
{
  if (msg) {
    nav_2d_msgs__msg__Pose2DStamped__fini(msg);
  }
  free(msg);
}


bool
nav_2d_msgs__msg__Pose2DStamped__Sequence__init(nav_2d_msgs__msg__Pose2DStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav_2d_msgs__msg__Pose2DStamped * data = NULL;
  if (size) {
    data = (nav_2d_msgs__msg__Pose2DStamped *)calloc(size, sizeof(nav_2d_msgs__msg__Pose2DStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_2d_msgs__msg__Pose2DStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_2d_msgs__msg__Pose2DStamped__fini(&data[i - 1]);
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
nav_2d_msgs__msg__Pose2DStamped__Sequence__fini(nav_2d_msgs__msg__Pose2DStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_2d_msgs__msg__Pose2DStamped__fini(&array->data[i]);
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

nav_2d_msgs__msg__Pose2DStamped__Sequence *
nav_2d_msgs__msg__Pose2DStamped__Sequence__create(size_t size)
{
  nav_2d_msgs__msg__Pose2DStamped__Sequence * array = (nav_2d_msgs__msg__Pose2DStamped__Sequence *)malloc(sizeof(nav_2d_msgs__msg__Pose2DStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav_2d_msgs__msg__Pose2DStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav_2d_msgs__msg__Pose2DStamped__Sequence__destroy(nav_2d_msgs__msg__Pose2DStamped__Sequence * array)
{
  if (array) {
    nav_2d_msgs__msg__Pose2DStamped__Sequence__fini(array);
  }
  free(array);
}
