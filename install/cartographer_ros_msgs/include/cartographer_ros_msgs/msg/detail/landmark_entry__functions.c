// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/LandmarkEntry.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/landmark_entry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `tracking_from_landmark_transform`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
cartographer_ros_msgs__msg__LandmarkEntry__init(cartographer_ros_msgs__msg__LandmarkEntry * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    cartographer_ros_msgs__msg__LandmarkEntry__fini(msg);
    return false;
  }
  // tracking_from_landmark_transform
  if (!geometry_msgs__msg__Pose__init(&msg->tracking_from_landmark_transform)) {
    cartographer_ros_msgs__msg__LandmarkEntry__fini(msg);
    return false;
  }
  // translation_weight
  // rotation_weight
  return true;
}

void
cartographer_ros_msgs__msg__LandmarkEntry__fini(cartographer_ros_msgs__msg__LandmarkEntry * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // tracking_from_landmark_transform
  geometry_msgs__msg__Pose__fini(&msg->tracking_from_landmark_transform);
  // translation_weight
  // rotation_weight
}

cartographer_ros_msgs__msg__LandmarkEntry *
cartographer_ros_msgs__msg__LandmarkEntry__create()
{
  cartographer_ros_msgs__msg__LandmarkEntry * msg = (cartographer_ros_msgs__msg__LandmarkEntry *)malloc(sizeof(cartographer_ros_msgs__msg__LandmarkEntry));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__LandmarkEntry));
  bool success = cartographer_ros_msgs__msg__LandmarkEntry__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__LandmarkEntry__destroy(cartographer_ros_msgs__msg__LandmarkEntry * msg)
{
  if (msg) {
    cartographer_ros_msgs__msg__LandmarkEntry__fini(msg);
  }
  free(msg);
}


bool
cartographer_ros_msgs__msg__LandmarkEntry__Sequence__init(cartographer_ros_msgs__msg__LandmarkEntry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartographer_ros_msgs__msg__LandmarkEntry * data = NULL;
  if (size) {
    data = (cartographer_ros_msgs__msg__LandmarkEntry *)calloc(size, sizeof(cartographer_ros_msgs__msg__LandmarkEntry));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__LandmarkEntry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__LandmarkEntry__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__LandmarkEntry__Sequence__fini(cartographer_ros_msgs__msg__LandmarkEntry__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartographer_ros_msgs__msg__LandmarkEntry__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__LandmarkEntry__Sequence *
cartographer_ros_msgs__msg__LandmarkEntry__Sequence__create(size_t size)
{
  cartographer_ros_msgs__msg__LandmarkEntry__Sequence * array = (cartographer_ros_msgs__msg__LandmarkEntry__Sequence *)malloc(sizeof(cartographer_ros_msgs__msg__LandmarkEntry__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__LandmarkEntry__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__LandmarkEntry__Sequence__destroy(cartographer_ros_msgs__msg__LandmarkEntry__Sequence * array)
{
  if (array) {
    cartographer_ros_msgs__msg__LandmarkEntry__Sequence__fini(array);
  }
  free(array);
}
