// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/Costmap.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/costmap__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `metadata`
#include "nav2_msgs/msg/detail/costmap_meta_data__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
nav2_msgs__msg__Costmap__init(nav2_msgs__msg__Costmap * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nav2_msgs__msg__Costmap__fini(msg);
    return false;
  }
  // metadata
  if (!nav2_msgs__msg__CostmapMetaData__init(&msg->metadata)) {
    nav2_msgs__msg__Costmap__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    nav2_msgs__msg__Costmap__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__msg__Costmap__fini(nav2_msgs__msg__Costmap * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // metadata
  nav2_msgs__msg__CostmapMetaData__fini(&msg->metadata);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

nav2_msgs__msg__Costmap *
nav2_msgs__msg__Costmap__create()
{
  nav2_msgs__msg__Costmap * msg = (nav2_msgs__msg__Costmap *)malloc(sizeof(nav2_msgs__msg__Costmap));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__Costmap));
  bool success = nav2_msgs__msg__Costmap__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__Costmap__destroy(nav2_msgs__msg__Costmap * msg)
{
  if (msg) {
    nav2_msgs__msg__Costmap__fini(msg);
  }
  free(msg);
}


bool
nav2_msgs__msg__Costmap__Sequence__init(nav2_msgs__msg__Costmap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_msgs__msg__Costmap * data = NULL;
  if (size) {
    data = (nav2_msgs__msg__Costmap *)calloc(size, sizeof(nav2_msgs__msg__Costmap));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__Costmap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__Costmap__fini(&data[i - 1]);
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
nav2_msgs__msg__Costmap__Sequence__fini(nav2_msgs__msg__Costmap__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_msgs__msg__Costmap__fini(&array->data[i]);
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

nav2_msgs__msg__Costmap__Sequence *
nav2_msgs__msg__Costmap__Sequence__create(size_t size)
{
  nav2_msgs__msg__Costmap__Sequence * array = (nav2_msgs__msg__Costmap__Sequence *)malloc(sizeof(nav2_msgs__msg__Costmap__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__Costmap__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__Costmap__Sequence__destroy(nav2_msgs__msg__Costmap__Sequence * array)
{
  if (array) {
    nav2_msgs__msg__Costmap__Sequence__fini(array);
  }
  free(array);
}
