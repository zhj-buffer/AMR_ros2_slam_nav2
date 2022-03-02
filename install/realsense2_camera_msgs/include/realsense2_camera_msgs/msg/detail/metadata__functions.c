// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from realsense2_camera_msgs:msg/Metadata.idl
// generated code does not contain a copyright notice
#include "realsense2_camera_msgs/msg/detail/metadata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `json_data`
#include "rosidl_runtime_c/string_functions.h"

bool
realsense2_camera_msgs__msg__Metadata__init(realsense2_camera_msgs__msg__Metadata * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    realsense2_camera_msgs__msg__Metadata__fini(msg);
    return false;
  }
  // json_data
  if (!rosidl_runtime_c__String__init(&msg->json_data)) {
    realsense2_camera_msgs__msg__Metadata__fini(msg);
    return false;
  }
  return true;
}

void
realsense2_camera_msgs__msg__Metadata__fini(realsense2_camera_msgs__msg__Metadata * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // json_data
  rosidl_runtime_c__String__fini(&msg->json_data);
}

realsense2_camera_msgs__msg__Metadata *
realsense2_camera_msgs__msg__Metadata__create()
{
  realsense2_camera_msgs__msg__Metadata * msg = (realsense2_camera_msgs__msg__Metadata *)malloc(sizeof(realsense2_camera_msgs__msg__Metadata));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(realsense2_camera_msgs__msg__Metadata));
  bool success = realsense2_camera_msgs__msg__Metadata__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
realsense2_camera_msgs__msg__Metadata__destroy(realsense2_camera_msgs__msg__Metadata * msg)
{
  if (msg) {
    realsense2_camera_msgs__msg__Metadata__fini(msg);
  }
  free(msg);
}


bool
realsense2_camera_msgs__msg__Metadata__Sequence__init(realsense2_camera_msgs__msg__Metadata__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  realsense2_camera_msgs__msg__Metadata * data = NULL;
  if (size) {
    data = (realsense2_camera_msgs__msg__Metadata *)calloc(size, sizeof(realsense2_camera_msgs__msg__Metadata));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = realsense2_camera_msgs__msg__Metadata__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        realsense2_camera_msgs__msg__Metadata__fini(&data[i - 1]);
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
realsense2_camera_msgs__msg__Metadata__Sequence__fini(realsense2_camera_msgs__msg__Metadata__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      realsense2_camera_msgs__msg__Metadata__fini(&array->data[i]);
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

realsense2_camera_msgs__msg__Metadata__Sequence *
realsense2_camera_msgs__msg__Metadata__Sequence__create(size_t size)
{
  realsense2_camera_msgs__msg__Metadata__Sequence * array = (realsense2_camera_msgs__msg__Metadata__Sequence *)malloc(sizeof(realsense2_camera_msgs__msg__Metadata__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = realsense2_camera_msgs__msg__Metadata__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
realsense2_camera_msgs__msg__Metadata__Sequence__destroy(realsense2_camera_msgs__msg__Metadata__Sequence * array)
{
  if (array) {
    realsense2_camera_msgs__msg__Metadata__Sequence__fini(array);
  }
  free(array);
}
