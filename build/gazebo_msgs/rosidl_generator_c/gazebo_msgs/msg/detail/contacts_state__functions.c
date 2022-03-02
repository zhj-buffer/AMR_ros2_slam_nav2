// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/ContactsState.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/contacts_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `states`
#include "gazebo_msgs/msg/detail/contact_state__functions.h"

bool
gazebo_msgs__msg__ContactsState__init(gazebo_msgs__msg__ContactsState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gazebo_msgs__msg__ContactsState__fini(msg);
    return false;
  }
  // states
  if (!gazebo_msgs__msg__ContactState__Sequence__init(&msg->states, 0)) {
    gazebo_msgs__msg__ContactsState__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__msg__ContactsState__fini(gazebo_msgs__msg__ContactsState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // states
  gazebo_msgs__msg__ContactState__Sequence__fini(&msg->states);
}

gazebo_msgs__msg__ContactsState *
gazebo_msgs__msg__ContactsState__create()
{
  gazebo_msgs__msg__ContactsState * msg = (gazebo_msgs__msg__ContactsState *)malloc(sizeof(gazebo_msgs__msg__ContactsState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__ContactsState));
  bool success = gazebo_msgs__msg__ContactsState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__ContactsState__destroy(gazebo_msgs__msg__ContactsState * msg)
{
  if (msg) {
    gazebo_msgs__msg__ContactsState__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__msg__ContactsState__Sequence__init(gazebo_msgs__msg__ContactsState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__msg__ContactsState * data = NULL;
  if (size) {
    data = (gazebo_msgs__msg__ContactsState *)calloc(size, sizeof(gazebo_msgs__msg__ContactsState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__ContactsState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__ContactsState__fini(&data[i - 1]);
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
gazebo_msgs__msg__ContactsState__Sequence__fini(gazebo_msgs__msg__ContactsState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__msg__ContactsState__fini(&array->data[i]);
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

gazebo_msgs__msg__ContactsState__Sequence *
gazebo_msgs__msg__ContactsState__Sequence__create(size_t size)
{
  gazebo_msgs__msg__ContactsState__Sequence * array = (gazebo_msgs__msg__ContactsState__Sequence *)malloc(sizeof(gazebo_msgs__msg__ContactsState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__ContactsState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__ContactsState__Sequence__destroy(gazebo_msgs__msg__ContactsState__Sequence * array)
{
  if (array) {
    gazebo_msgs__msg__ContactsState__Sequence__fini(array);
  }
  free(array);
}
