// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/ModelState.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/model_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `model_name`
// Member `reference_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
gazebo_msgs__msg__ModelState__init(gazebo_msgs__msg__ModelState * msg)
{
  if (!msg) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    gazebo_msgs__msg__ModelState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    gazebo_msgs__msg__ModelState__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    gazebo_msgs__msg__ModelState__fini(msg);
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__init(&msg->reference_frame)) {
    gazebo_msgs__msg__ModelState__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__msg__ModelState__fini(gazebo_msgs__msg__ModelState * msg)
{
  if (!msg) {
    return;
  }
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // reference_frame
  rosidl_runtime_c__String__fini(&msg->reference_frame);
}

gazebo_msgs__msg__ModelState *
gazebo_msgs__msg__ModelState__create()
{
  gazebo_msgs__msg__ModelState * msg = (gazebo_msgs__msg__ModelState *)malloc(sizeof(gazebo_msgs__msg__ModelState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__ModelState));
  bool success = gazebo_msgs__msg__ModelState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__ModelState__destroy(gazebo_msgs__msg__ModelState * msg)
{
  if (msg) {
    gazebo_msgs__msg__ModelState__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__msg__ModelState__Sequence__init(gazebo_msgs__msg__ModelState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__msg__ModelState * data = NULL;
  if (size) {
    data = (gazebo_msgs__msg__ModelState *)calloc(size, sizeof(gazebo_msgs__msg__ModelState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__ModelState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__ModelState__fini(&data[i - 1]);
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
gazebo_msgs__msg__ModelState__Sequence__fini(gazebo_msgs__msg__ModelState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__msg__ModelState__fini(&array->data[i]);
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

gazebo_msgs__msg__ModelState__Sequence *
gazebo_msgs__msg__ModelState__Sequence__create(size_t size)
{
  gazebo_msgs__msg__ModelState__Sequence * array = (gazebo_msgs__msg__ModelState__Sequence *)malloc(sizeof(gazebo_msgs__msg__ModelState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__ModelState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__ModelState__Sequence__destroy(gazebo_msgs__msg__ModelState__Sequence * array)
{
  if (array) {
    gazebo_msgs__msg__ModelState__Sequence__fini(array);
  }
  free(array);
}
