// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:srv/SetModelConfiguration.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/srv/detail/set_model_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `model_name`
// Member `urdf_param_name`
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gazebo_msgs__srv__SetModelConfiguration_Request__init(gazebo_msgs__srv__SetModelConfiguration_Request * msg)
{
  if (!msg) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    gazebo_msgs__srv__SetModelConfiguration_Request__fini(msg);
    return false;
  }
  // urdf_param_name
  if (!rosidl_runtime_c__String__init(&msg->urdf_param_name)) {
    gazebo_msgs__srv__SetModelConfiguration_Request__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    gazebo_msgs__srv__SetModelConfiguration_Request__fini(msg);
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_positions, 0)) {
    gazebo_msgs__srv__SetModelConfiguration_Request__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__SetModelConfiguration_Request__fini(gazebo_msgs__srv__SetModelConfiguration_Request * msg)
{
  if (!msg) {
    return;
  }
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
  // urdf_param_name
  rosidl_runtime_c__String__fini(&msg->urdf_param_name);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // joint_positions
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_positions);
}

gazebo_msgs__srv__SetModelConfiguration_Request *
gazebo_msgs__srv__SetModelConfiguration_Request__create()
{
  gazebo_msgs__srv__SetModelConfiguration_Request * msg = (gazebo_msgs__srv__SetModelConfiguration_Request *)malloc(sizeof(gazebo_msgs__srv__SetModelConfiguration_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SetModelConfiguration_Request));
  bool success = gazebo_msgs__srv__SetModelConfiguration_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SetModelConfiguration_Request__destroy(gazebo_msgs__srv__SetModelConfiguration_Request * msg)
{
  if (msg) {
    gazebo_msgs__srv__SetModelConfiguration_Request__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__srv__SetModelConfiguration_Request__Sequence__init(gazebo_msgs__srv__SetModelConfiguration_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__srv__SetModelConfiguration_Request * data = NULL;
  if (size) {
    data = (gazebo_msgs__srv__SetModelConfiguration_Request *)calloc(size, sizeof(gazebo_msgs__srv__SetModelConfiguration_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SetModelConfiguration_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SetModelConfiguration_Request__fini(&data[i - 1]);
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
gazebo_msgs__srv__SetModelConfiguration_Request__Sequence__fini(gazebo_msgs__srv__SetModelConfiguration_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SetModelConfiguration_Request__fini(&array->data[i]);
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

gazebo_msgs__srv__SetModelConfiguration_Request__Sequence *
gazebo_msgs__srv__SetModelConfiguration_Request__Sequence__create(size_t size)
{
  gazebo_msgs__srv__SetModelConfiguration_Request__Sequence * array = (gazebo_msgs__srv__SetModelConfiguration_Request__Sequence *)malloc(sizeof(gazebo_msgs__srv__SetModelConfiguration_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SetModelConfiguration_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SetModelConfiguration_Request__Sequence__destroy(gazebo_msgs__srv__SetModelConfiguration_Request__Sequence * array)
{
  if (array) {
    gazebo_msgs__srv__SetModelConfiguration_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
gazebo_msgs__srv__SetModelConfiguration_Response__init(gazebo_msgs__srv__SetModelConfiguration_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    gazebo_msgs__srv__SetModelConfiguration_Response__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__SetModelConfiguration_Response__fini(gazebo_msgs__srv__SetModelConfiguration_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
}

gazebo_msgs__srv__SetModelConfiguration_Response *
gazebo_msgs__srv__SetModelConfiguration_Response__create()
{
  gazebo_msgs__srv__SetModelConfiguration_Response * msg = (gazebo_msgs__srv__SetModelConfiguration_Response *)malloc(sizeof(gazebo_msgs__srv__SetModelConfiguration_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SetModelConfiguration_Response));
  bool success = gazebo_msgs__srv__SetModelConfiguration_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SetModelConfiguration_Response__destroy(gazebo_msgs__srv__SetModelConfiguration_Response * msg)
{
  if (msg) {
    gazebo_msgs__srv__SetModelConfiguration_Response__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__srv__SetModelConfiguration_Response__Sequence__init(gazebo_msgs__srv__SetModelConfiguration_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__srv__SetModelConfiguration_Response * data = NULL;
  if (size) {
    data = (gazebo_msgs__srv__SetModelConfiguration_Response *)calloc(size, sizeof(gazebo_msgs__srv__SetModelConfiguration_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SetModelConfiguration_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SetModelConfiguration_Response__fini(&data[i - 1]);
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
gazebo_msgs__srv__SetModelConfiguration_Response__Sequence__fini(gazebo_msgs__srv__SetModelConfiguration_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SetModelConfiguration_Response__fini(&array->data[i]);
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

gazebo_msgs__srv__SetModelConfiguration_Response__Sequence *
gazebo_msgs__srv__SetModelConfiguration_Response__Sequence__create(size_t size)
{
  gazebo_msgs__srv__SetModelConfiguration_Response__Sequence * array = (gazebo_msgs__srv__SetModelConfiguration_Response__Sequence *)malloc(sizeof(gazebo_msgs__srv__SetModelConfiguration_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SetModelConfiguration_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SetModelConfiguration_Response__Sequence__destroy(gazebo_msgs__srv__SetModelConfiguration_Response__Sequence * array)
{
  if (array) {
    gazebo_msgs__srv__SetModelConfiguration_Response__Sequence__fini(array);
  }
  free(array);
}
