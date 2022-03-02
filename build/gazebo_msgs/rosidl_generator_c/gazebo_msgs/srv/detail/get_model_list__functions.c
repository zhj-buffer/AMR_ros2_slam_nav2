// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:srv/GetModelList.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/srv/detail/get_model_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
gazebo_msgs__srv__GetModelList_Request__init(gazebo_msgs__srv__GetModelList_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
gazebo_msgs__srv__GetModelList_Request__fini(gazebo_msgs__srv__GetModelList_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

gazebo_msgs__srv__GetModelList_Request *
gazebo_msgs__srv__GetModelList_Request__create()
{
  gazebo_msgs__srv__GetModelList_Request * msg = (gazebo_msgs__srv__GetModelList_Request *)malloc(sizeof(gazebo_msgs__srv__GetModelList_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__GetModelList_Request));
  bool success = gazebo_msgs__srv__GetModelList_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__GetModelList_Request__destroy(gazebo_msgs__srv__GetModelList_Request * msg)
{
  if (msg) {
    gazebo_msgs__srv__GetModelList_Request__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__srv__GetModelList_Request__Sequence__init(gazebo_msgs__srv__GetModelList_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__srv__GetModelList_Request * data = NULL;
  if (size) {
    data = (gazebo_msgs__srv__GetModelList_Request *)calloc(size, sizeof(gazebo_msgs__srv__GetModelList_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__GetModelList_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__GetModelList_Request__fini(&data[i - 1]);
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
gazebo_msgs__srv__GetModelList_Request__Sequence__fini(gazebo_msgs__srv__GetModelList_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__GetModelList_Request__fini(&array->data[i]);
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

gazebo_msgs__srv__GetModelList_Request__Sequence *
gazebo_msgs__srv__GetModelList_Request__Sequence__create(size_t size)
{
  gazebo_msgs__srv__GetModelList_Request__Sequence * array = (gazebo_msgs__srv__GetModelList_Request__Sequence *)malloc(sizeof(gazebo_msgs__srv__GetModelList_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__GetModelList_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__GetModelList_Request__Sequence__destroy(gazebo_msgs__srv__GetModelList_Request__Sequence * array)
{
  if (array) {
    gazebo_msgs__srv__GetModelList_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `model_names`
#include "rosidl_runtime_c/string_functions.h"

bool
gazebo_msgs__srv__GetModelList_Response__init(gazebo_msgs__srv__GetModelList_Response * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gazebo_msgs__srv__GetModelList_Response__fini(msg);
    return false;
  }
  // model_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->model_names, 0)) {
    gazebo_msgs__srv__GetModelList_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
gazebo_msgs__srv__GetModelList_Response__fini(gazebo_msgs__srv__GetModelList_Response * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // model_names
  rosidl_runtime_c__String__Sequence__fini(&msg->model_names);
  // success
}

gazebo_msgs__srv__GetModelList_Response *
gazebo_msgs__srv__GetModelList_Response__create()
{
  gazebo_msgs__srv__GetModelList_Response * msg = (gazebo_msgs__srv__GetModelList_Response *)malloc(sizeof(gazebo_msgs__srv__GetModelList_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__GetModelList_Response));
  bool success = gazebo_msgs__srv__GetModelList_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__GetModelList_Response__destroy(gazebo_msgs__srv__GetModelList_Response * msg)
{
  if (msg) {
    gazebo_msgs__srv__GetModelList_Response__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__srv__GetModelList_Response__Sequence__init(gazebo_msgs__srv__GetModelList_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__srv__GetModelList_Response * data = NULL;
  if (size) {
    data = (gazebo_msgs__srv__GetModelList_Response *)calloc(size, sizeof(gazebo_msgs__srv__GetModelList_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__GetModelList_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__GetModelList_Response__fini(&data[i - 1]);
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
gazebo_msgs__srv__GetModelList_Response__Sequence__fini(gazebo_msgs__srv__GetModelList_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__GetModelList_Response__fini(&array->data[i]);
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

gazebo_msgs__srv__GetModelList_Response__Sequence *
gazebo_msgs__srv__GetModelList_Response__Sequence__create(size_t size)
{
  gazebo_msgs__srv__GetModelList_Response__Sequence * array = (gazebo_msgs__srv__GetModelList_Response__Sequence *)malloc(sizeof(gazebo_msgs__srv__GetModelList_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__GetModelList_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__GetModelList_Response__Sequence__destroy(gazebo_msgs__srv__GetModelList_Response__Sequence * array)
{
  if (array) {
    gazebo_msgs__srv__GetModelList_Response__Sequence__fini(array);
  }
  free(array);
}
