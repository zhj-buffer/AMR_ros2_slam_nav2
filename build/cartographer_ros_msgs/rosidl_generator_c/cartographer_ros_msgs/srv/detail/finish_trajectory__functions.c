// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:srv/FinishTrajectory.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/srv/detail/finish_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
cartographer_ros_msgs__srv__FinishTrajectory_Request__init(cartographer_ros_msgs__srv__FinishTrajectory_Request * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory_id
  return true;
}

void
cartographer_ros_msgs__srv__FinishTrajectory_Request__fini(cartographer_ros_msgs__srv__FinishTrajectory_Request * msg)
{
  if (!msg) {
    return;
  }
  // trajectory_id
}

cartographer_ros_msgs__srv__FinishTrajectory_Request *
cartographer_ros_msgs__srv__FinishTrajectory_Request__create()
{
  cartographer_ros_msgs__srv__FinishTrajectory_Request * msg = (cartographer_ros_msgs__srv__FinishTrajectory_Request *)malloc(sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Request));
  bool success = cartographer_ros_msgs__srv__FinishTrajectory_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__srv__FinishTrajectory_Request__destroy(cartographer_ros_msgs__srv__FinishTrajectory_Request * msg)
{
  if (msg) {
    cartographer_ros_msgs__srv__FinishTrajectory_Request__fini(msg);
  }
  free(msg);
}


bool
cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence__init(cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartographer_ros_msgs__srv__FinishTrajectory_Request * data = NULL;
  if (size) {
    data = (cartographer_ros_msgs__srv__FinishTrajectory_Request *)calloc(size, sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__srv__FinishTrajectory_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__srv__FinishTrajectory_Request__fini(&data[i - 1]);
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
cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence__fini(cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartographer_ros_msgs__srv__FinishTrajectory_Request__fini(&array->data[i]);
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

cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence *
cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence__create(size_t size)
{
  cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence * array = (cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence *)malloc(sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence__destroy(cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence * array)
{
  if (array) {
    cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `status`
#include "cartographer_ros_msgs/msg/detail/status_response__functions.h"

bool
cartographer_ros_msgs__srv__FinishTrajectory_Response__init(cartographer_ros_msgs__srv__FinishTrajectory_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!cartographer_ros_msgs__msg__StatusResponse__init(&msg->status)) {
    cartographer_ros_msgs__srv__FinishTrajectory_Response__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__srv__FinishTrajectory_Response__fini(cartographer_ros_msgs__srv__FinishTrajectory_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  cartographer_ros_msgs__msg__StatusResponse__fini(&msg->status);
}

cartographer_ros_msgs__srv__FinishTrajectory_Response *
cartographer_ros_msgs__srv__FinishTrajectory_Response__create()
{
  cartographer_ros_msgs__srv__FinishTrajectory_Response * msg = (cartographer_ros_msgs__srv__FinishTrajectory_Response *)malloc(sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Response));
  bool success = cartographer_ros_msgs__srv__FinishTrajectory_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__srv__FinishTrajectory_Response__destroy(cartographer_ros_msgs__srv__FinishTrajectory_Response * msg)
{
  if (msg) {
    cartographer_ros_msgs__srv__FinishTrajectory_Response__fini(msg);
  }
  free(msg);
}


bool
cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence__init(cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartographer_ros_msgs__srv__FinishTrajectory_Response * data = NULL;
  if (size) {
    data = (cartographer_ros_msgs__srv__FinishTrajectory_Response *)calloc(size, sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__srv__FinishTrajectory_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__srv__FinishTrajectory_Response__fini(&data[i - 1]);
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
cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence__fini(cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartographer_ros_msgs__srv__FinishTrajectory_Response__fini(&array->data[i]);
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

cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence *
cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence__create(size_t size)
{
  cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence * array = (cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence *)malloc(sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence__destroy(cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence * array)
{
  if (array) {
    cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence__fini(array);
  }
  free(array);
}
