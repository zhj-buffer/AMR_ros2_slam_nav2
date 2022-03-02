// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_2d_msgs:msg/Twist2D.idl
// generated code does not contain a copyright notice
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
nav_2d_msgs__msg__Twist2D__init(nav_2d_msgs__msg__Twist2D * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
nav_2d_msgs__msg__Twist2D__fini(nav_2d_msgs__msg__Twist2D * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

nav_2d_msgs__msg__Twist2D *
nav_2d_msgs__msg__Twist2D__create()
{
  nav_2d_msgs__msg__Twist2D * msg = (nav_2d_msgs__msg__Twist2D *)malloc(sizeof(nav_2d_msgs__msg__Twist2D));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_2d_msgs__msg__Twist2D));
  bool success = nav_2d_msgs__msg__Twist2D__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav_2d_msgs__msg__Twist2D__destroy(nav_2d_msgs__msg__Twist2D * msg)
{
  if (msg) {
    nav_2d_msgs__msg__Twist2D__fini(msg);
  }
  free(msg);
}


bool
nav_2d_msgs__msg__Twist2D__Sequence__init(nav_2d_msgs__msg__Twist2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav_2d_msgs__msg__Twist2D * data = NULL;
  if (size) {
    data = (nav_2d_msgs__msg__Twist2D *)calloc(size, sizeof(nav_2d_msgs__msg__Twist2D));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_2d_msgs__msg__Twist2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_2d_msgs__msg__Twist2D__fini(&data[i - 1]);
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
nav_2d_msgs__msg__Twist2D__Sequence__fini(nav_2d_msgs__msg__Twist2D__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_2d_msgs__msg__Twist2D__fini(&array->data[i]);
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

nav_2d_msgs__msg__Twist2D__Sequence *
nav_2d_msgs__msg__Twist2D__Sequence__create(size_t size)
{
  nav_2d_msgs__msg__Twist2D__Sequence * array = (nav_2d_msgs__msg__Twist2D__Sequence *)malloc(sizeof(nav_2d_msgs__msg__Twist2D__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav_2d_msgs__msg__Twist2D__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav_2d_msgs__msg__Twist2D__Sequence__destroy(nav_2d_msgs__msg__Twist2D__Sequence * array)
{
  if (array) {
    nav_2d_msgs__msg__Twist2D__Sequence__fini(array);
  }
  free(array);
}
