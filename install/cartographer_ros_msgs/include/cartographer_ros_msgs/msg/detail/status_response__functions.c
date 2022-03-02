// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/StatusResponse.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/status_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
cartographer_ros_msgs__msg__StatusResponse__init(cartographer_ros_msgs__msg__StatusResponse * msg)
{
  if (!msg) {
    return false;
  }
  // code
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    cartographer_ros_msgs__msg__StatusResponse__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__msg__StatusResponse__fini(cartographer_ros_msgs__msg__StatusResponse * msg)
{
  if (!msg) {
    return;
  }
  // code
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

cartographer_ros_msgs__msg__StatusResponse *
cartographer_ros_msgs__msg__StatusResponse__create()
{
  cartographer_ros_msgs__msg__StatusResponse * msg = (cartographer_ros_msgs__msg__StatusResponse *)malloc(sizeof(cartographer_ros_msgs__msg__StatusResponse));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__StatusResponse));
  bool success = cartographer_ros_msgs__msg__StatusResponse__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__StatusResponse__destroy(cartographer_ros_msgs__msg__StatusResponse * msg)
{
  if (msg) {
    cartographer_ros_msgs__msg__StatusResponse__fini(msg);
  }
  free(msg);
}


bool
cartographer_ros_msgs__msg__StatusResponse__Sequence__init(cartographer_ros_msgs__msg__StatusResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartographer_ros_msgs__msg__StatusResponse * data = NULL;
  if (size) {
    data = (cartographer_ros_msgs__msg__StatusResponse *)calloc(size, sizeof(cartographer_ros_msgs__msg__StatusResponse));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__StatusResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__StatusResponse__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__StatusResponse__Sequence__fini(cartographer_ros_msgs__msg__StatusResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartographer_ros_msgs__msg__StatusResponse__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__StatusResponse__Sequence *
cartographer_ros_msgs__msg__StatusResponse__Sequence__create(size_t size)
{
  cartographer_ros_msgs__msg__StatusResponse__Sequence * array = (cartographer_ros_msgs__msg__StatusResponse__Sequence *)malloc(sizeof(cartographer_ros_msgs__msg__StatusResponse__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__StatusResponse__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__StatusResponse__Sequence__destroy(cartographer_ros_msgs__msg__StatusResponse__Sequence * array)
{
  if (array) {
    cartographer_ros_msgs__msg__StatusResponse__Sequence__fini(array);
  }
  free(array);
}
