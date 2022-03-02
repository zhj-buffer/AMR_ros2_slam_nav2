// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/ContactState.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/contact_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `info`
// Member `collision1_name`
// Member `collision2_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `wrenches`
// Member `total_wrench`
#include "geometry_msgs/msg/detail/wrench__functions.h"
// Member `contact_positions`
// Member `contact_normals`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `depths`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gazebo_msgs__msg__ContactState__init(gazebo_msgs__msg__ContactState * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__init(&msg->info)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // collision1_name
  if (!rosidl_runtime_c__String__init(&msg->collision1_name)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // collision2_name
  if (!rosidl_runtime_c__String__init(&msg->collision2_name)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // wrenches
  if (!geometry_msgs__msg__Wrench__Sequence__init(&msg->wrenches, 0)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // total_wrench
  if (!geometry_msgs__msg__Wrench__init(&msg->total_wrench)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // contact_positions
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->contact_positions, 0)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // contact_normals
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->contact_normals, 0)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // depths
  if (!rosidl_runtime_c__double__Sequence__init(&msg->depths, 0)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__msg__ContactState__fini(gazebo_msgs__msg__ContactState * msg)
{
  if (!msg) {
    return;
  }
  // info
  rosidl_runtime_c__String__fini(&msg->info);
  // collision1_name
  rosidl_runtime_c__String__fini(&msg->collision1_name);
  // collision2_name
  rosidl_runtime_c__String__fini(&msg->collision2_name);
  // wrenches
  geometry_msgs__msg__Wrench__Sequence__fini(&msg->wrenches);
  // total_wrench
  geometry_msgs__msg__Wrench__fini(&msg->total_wrench);
  // contact_positions
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->contact_positions);
  // contact_normals
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->contact_normals);
  // depths
  rosidl_runtime_c__double__Sequence__fini(&msg->depths);
}

gazebo_msgs__msg__ContactState *
gazebo_msgs__msg__ContactState__create()
{
  gazebo_msgs__msg__ContactState * msg = (gazebo_msgs__msg__ContactState *)malloc(sizeof(gazebo_msgs__msg__ContactState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__ContactState));
  bool success = gazebo_msgs__msg__ContactState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__ContactState__destroy(gazebo_msgs__msg__ContactState * msg)
{
  if (msg) {
    gazebo_msgs__msg__ContactState__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__msg__ContactState__Sequence__init(gazebo_msgs__msg__ContactState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__msg__ContactState * data = NULL;
  if (size) {
    data = (gazebo_msgs__msg__ContactState *)calloc(size, sizeof(gazebo_msgs__msg__ContactState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__ContactState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__ContactState__fini(&data[i - 1]);
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
gazebo_msgs__msg__ContactState__Sequence__fini(gazebo_msgs__msg__ContactState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__msg__ContactState__fini(&array->data[i]);
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

gazebo_msgs__msg__ContactState__Sequence *
gazebo_msgs__msg__ContactState__Sequence__create(size_t size)
{
  gazebo_msgs__msg__ContactState__Sequence * array = (gazebo_msgs__msg__ContactState__Sequence *)malloc(sizeof(gazebo_msgs__msg__ContactState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__ContactState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__ContactState__Sequence__destroy(gazebo_msgs__msg__ContactState__Sequence * array)
{
  if (array) {
    gazebo_msgs__msg__ContactState__Sequence__fini(array);
  }
  free(array);
}
