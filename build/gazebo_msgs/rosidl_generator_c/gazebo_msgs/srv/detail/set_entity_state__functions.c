// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:srv/SetEntityState.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/srv/detail/set_entity_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `state`
#include "gazebo_msgs/msg/detail/entity_state__functions.h"

bool
gazebo_msgs__srv__SetEntityState_Request__init(gazebo_msgs__srv__SetEntityState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!gazebo_msgs__msg__EntityState__init(&msg->state)) {
    gazebo_msgs__srv__SetEntityState_Request__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__SetEntityState_Request__fini(gazebo_msgs__srv__SetEntityState_Request * msg)
{
  if (!msg) {
    return;
  }
  // state
  gazebo_msgs__msg__EntityState__fini(&msg->state);
}

gazebo_msgs__srv__SetEntityState_Request *
gazebo_msgs__srv__SetEntityState_Request__create()
{
  gazebo_msgs__srv__SetEntityState_Request * msg = (gazebo_msgs__srv__SetEntityState_Request *)malloc(sizeof(gazebo_msgs__srv__SetEntityState_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SetEntityState_Request));
  bool success = gazebo_msgs__srv__SetEntityState_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SetEntityState_Request__destroy(gazebo_msgs__srv__SetEntityState_Request * msg)
{
  if (msg) {
    gazebo_msgs__srv__SetEntityState_Request__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__srv__SetEntityState_Request__Sequence__init(gazebo_msgs__srv__SetEntityState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__srv__SetEntityState_Request * data = NULL;
  if (size) {
    data = (gazebo_msgs__srv__SetEntityState_Request *)calloc(size, sizeof(gazebo_msgs__srv__SetEntityState_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SetEntityState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SetEntityState_Request__fini(&data[i - 1]);
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
gazebo_msgs__srv__SetEntityState_Request__Sequence__fini(gazebo_msgs__srv__SetEntityState_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SetEntityState_Request__fini(&array->data[i]);
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

gazebo_msgs__srv__SetEntityState_Request__Sequence *
gazebo_msgs__srv__SetEntityState_Request__Sequence__create(size_t size)
{
  gazebo_msgs__srv__SetEntityState_Request__Sequence * array = (gazebo_msgs__srv__SetEntityState_Request__Sequence *)malloc(sizeof(gazebo_msgs__srv__SetEntityState_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SetEntityState_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SetEntityState_Request__Sequence__destroy(gazebo_msgs__srv__SetEntityState_Request__Sequence * array)
{
  if (array) {
    gazebo_msgs__srv__SetEntityState_Request__Sequence__fini(array);
  }
  free(array);
}


bool
gazebo_msgs__srv__SetEntityState_Response__init(gazebo_msgs__srv__SetEntityState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
gazebo_msgs__srv__SetEntityState_Response__fini(gazebo_msgs__srv__SetEntityState_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

gazebo_msgs__srv__SetEntityState_Response *
gazebo_msgs__srv__SetEntityState_Response__create()
{
  gazebo_msgs__srv__SetEntityState_Response * msg = (gazebo_msgs__srv__SetEntityState_Response *)malloc(sizeof(gazebo_msgs__srv__SetEntityState_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SetEntityState_Response));
  bool success = gazebo_msgs__srv__SetEntityState_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SetEntityState_Response__destroy(gazebo_msgs__srv__SetEntityState_Response * msg)
{
  if (msg) {
    gazebo_msgs__srv__SetEntityState_Response__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__srv__SetEntityState_Response__Sequence__init(gazebo_msgs__srv__SetEntityState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__srv__SetEntityState_Response * data = NULL;
  if (size) {
    data = (gazebo_msgs__srv__SetEntityState_Response *)calloc(size, sizeof(gazebo_msgs__srv__SetEntityState_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SetEntityState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SetEntityState_Response__fini(&data[i - 1]);
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
gazebo_msgs__srv__SetEntityState_Response__Sequence__fini(gazebo_msgs__srv__SetEntityState_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SetEntityState_Response__fini(&array->data[i]);
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

gazebo_msgs__srv__SetEntityState_Response__Sequence *
gazebo_msgs__srv__SetEntityState_Response__Sequence__create(size_t size)
{
  gazebo_msgs__srv__SetEntityState_Response__Sequence * array = (gazebo_msgs__srv__SetEntityState_Response__Sequence *)malloc(sizeof(gazebo_msgs__srv__SetEntityState_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SetEntityState_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SetEntityState_Response__Sequence__destroy(gazebo_msgs__srv__SetEntityState_Response__Sequence * array)
{
  if (array) {
    gazebo_msgs__srv__SetEntityState_Response__Sequence__fini(array);
  }
  free(array);
}
