// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/BehaviorTreeLog.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/behavior_tree_log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `event_log`
#include "nav2_msgs/msg/detail/behavior_tree_status_change__functions.h"

bool
nav2_msgs__msg__BehaviorTreeLog__init(nav2_msgs__msg__BehaviorTreeLog * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    nav2_msgs__msg__BehaviorTreeLog__fini(msg);
    return false;
  }
  // event_log
  if (!nav2_msgs__msg__BehaviorTreeStatusChange__Sequence__init(&msg->event_log, 0)) {
    nav2_msgs__msg__BehaviorTreeLog__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__msg__BehaviorTreeLog__fini(nav2_msgs__msg__BehaviorTreeLog * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // event_log
  nav2_msgs__msg__BehaviorTreeStatusChange__Sequence__fini(&msg->event_log);
}

nav2_msgs__msg__BehaviorTreeLog *
nav2_msgs__msg__BehaviorTreeLog__create()
{
  nav2_msgs__msg__BehaviorTreeLog * msg = (nav2_msgs__msg__BehaviorTreeLog *)malloc(sizeof(nav2_msgs__msg__BehaviorTreeLog));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__BehaviorTreeLog));
  bool success = nav2_msgs__msg__BehaviorTreeLog__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__BehaviorTreeLog__destroy(nav2_msgs__msg__BehaviorTreeLog * msg)
{
  if (msg) {
    nav2_msgs__msg__BehaviorTreeLog__fini(msg);
  }
  free(msg);
}


bool
nav2_msgs__msg__BehaviorTreeLog__Sequence__init(nav2_msgs__msg__BehaviorTreeLog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_msgs__msg__BehaviorTreeLog * data = NULL;
  if (size) {
    data = (nav2_msgs__msg__BehaviorTreeLog *)calloc(size, sizeof(nav2_msgs__msg__BehaviorTreeLog));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__BehaviorTreeLog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__BehaviorTreeLog__fini(&data[i - 1]);
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
nav2_msgs__msg__BehaviorTreeLog__Sequence__fini(nav2_msgs__msg__BehaviorTreeLog__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_msgs__msg__BehaviorTreeLog__fini(&array->data[i]);
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

nav2_msgs__msg__BehaviorTreeLog__Sequence *
nav2_msgs__msg__BehaviorTreeLog__Sequence__create(size_t size)
{
  nav2_msgs__msg__BehaviorTreeLog__Sequence * array = (nav2_msgs__msg__BehaviorTreeLog__Sequence *)malloc(sizeof(nav2_msgs__msg__BehaviorTreeLog__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__BehaviorTreeLog__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__BehaviorTreeLog__Sequence__destroy(nav2_msgs__msg__BehaviorTreeLog__Sequence * array)
{
  if (array) {
    nav2_msgs__msg__BehaviorTreeLog__Sequence__fini(array);
  }
  free(array);
}
