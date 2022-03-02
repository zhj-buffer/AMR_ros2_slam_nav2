// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/SubmapList.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/submap_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `submap`
#include "cartographer_ros_msgs/msg/detail/submap_entry__functions.h"

bool
cartographer_ros_msgs__msg__SubmapList__init(cartographer_ros_msgs__msg__SubmapList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cartographer_ros_msgs__msg__SubmapList__fini(msg);
    return false;
  }
  // submap
  if (!cartographer_ros_msgs__msg__SubmapEntry__Sequence__init(&msg->submap, 0)) {
    cartographer_ros_msgs__msg__SubmapList__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__msg__SubmapList__fini(cartographer_ros_msgs__msg__SubmapList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // submap
  cartographer_ros_msgs__msg__SubmapEntry__Sequence__fini(&msg->submap);
}

cartographer_ros_msgs__msg__SubmapList *
cartographer_ros_msgs__msg__SubmapList__create()
{
  cartographer_ros_msgs__msg__SubmapList * msg = (cartographer_ros_msgs__msg__SubmapList *)malloc(sizeof(cartographer_ros_msgs__msg__SubmapList));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__SubmapList));
  bool success = cartographer_ros_msgs__msg__SubmapList__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__SubmapList__destroy(cartographer_ros_msgs__msg__SubmapList * msg)
{
  if (msg) {
    cartographer_ros_msgs__msg__SubmapList__fini(msg);
  }
  free(msg);
}


bool
cartographer_ros_msgs__msg__SubmapList__Sequence__init(cartographer_ros_msgs__msg__SubmapList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartographer_ros_msgs__msg__SubmapList * data = NULL;
  if (size) {
    data = (cartographer_ros_msgs__msg__SubmapList *)calloc(size, sizeof(cartographer_ros_msgs__msg__SubmapList));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__SubmapList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__SubmapList__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__SubmapList__Sequence__fini(cartographer_ros_msgs__msg__SubmapList__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartographer_ros_msgs__msg__SubmapList__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__SubmapList__Sequence *
cartographer_ros_msgs__msg__SubmapList__Sequence__create(size_t size)
{
  cartographer_ros_msgs__msg__SubmapList__Sequence * array = (cartographer_ros_msgs__msg__SubmapList__Sequence *)malloc(sizeof(cartographer_ros_msgs__msg__SubmapList__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__SubmapList__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__SubmapList__Sequence__destroy(cartographer_ros_msgs__msg__SubmapList__Sequence * array)
{
  if (array) {
    cartographer_ros_msgs__msg__SubmapList__Sequence__fini(array);
  }
  free(array);
}
