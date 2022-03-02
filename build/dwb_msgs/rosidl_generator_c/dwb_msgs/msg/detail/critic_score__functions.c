// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dwb_msgs:msg/CriticScore.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/msg/detail/critic_score__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
dwb_msgs__msg__CriticScore__init(dwb_msgs__msg__CriticScore * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    dwb_msgs__msg__CriticScore__fini(msg);
    return false;
  }
  // raw_score
  // scale
  return true;
}

void
dwb_msgs__msg__CriticScore__fini(dwb_msgs__msg__CriticScore * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // raw_score
  // scale
}

dwb_msgs__msg__CriticScore *
dwb_msgs__msg__CriticScore__create()
{
  dwb_msgs__msg__CriticScore * msg = (dwb_msgs__msg__CriticScore *)malloc(sizeof(dwb_msgs__msg__CriticScore));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__msg__CriticScore));
  bool success = dwb_msgs__msg__CriticScore__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__msg__CriticScore__destroy(dwb_msgs__msg__CriticScore * msg)
{
  if (msg) {
    dwb_msgs__msg__CriticScore__fini(msg);
  }
  free(msg);
}


bool
dwb_msgs__msg__CriticScore__Sequence__init(dwb_msgs__msg__CriticScore__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dwb_msgs__msg__CriticScore * data = NULL;
  if (size) {
    data = (dwb_msgs__msg__CriticScore *)calloc(size, sizeof(dwb_msgs__msg__CriticScore));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__msg__CriticScore__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__msg__CriticScore__fini(&data[i - 1]);
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
dwb_msgs__msg__CriticScore__Sequence__fini(dwb_msgs__msg__CriticScore__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dwb_msgs__msg__CriticScore__fini(&array->data[i]);
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

dwb_msgs__msg__CriticScore__Sequence *
dwb_msgs__msg__CriticScore__Sequence__create(size_t size)
{
  dwb_msgs__msg__CriticScore__Sequence * array = (dwb_msgs__msg__CriticScore__Sequence *)malloc(sizeof(dwb_msgs__msg__CriticScore__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__msg__CriticScore__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dwb_msgs__msg__CriticScore__Sequence__destroy(dwb_msgs__msg__CriticScore__Sequence * array)
{
  if (array) {
    dwb_msgs__msg__CriticScore__Sequence__fini(array);
  }
  free(array);
}
