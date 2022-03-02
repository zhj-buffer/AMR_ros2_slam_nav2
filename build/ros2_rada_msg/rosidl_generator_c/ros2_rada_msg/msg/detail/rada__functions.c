// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_rada_msg:msg/Rada.idl
// generated code does not contain a copyright notice
#include "ros2_rada_msg/msg/detail/rada__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ros2_rada_msg__msg__Rada__init(ros2_rada_msg__msg__Rada * msg)
{
  if (!msg) {
    return false;
  }
  // r1
  // r2
  // r3
  // r4
  // crc
  return true;
}

void
ros2_rada_msg__msg__Rada__fini(ros2_rada_msg__msg__Rada * msg)
{
  if (!msg) {
    return;
  }
  // r1
  // r2
  // r3
  // r4
  // crc
}

ros2_rada_msg__msg__Rada *
ros2_rada_msg__msg__Rada__create()
{
  ros2_rada_msg__msg__Rada * msg = (ros2_rada_msg__msg__Rada *)malloc(sizeof(ros2_rada_msg__msg__Rada));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_rada_msg__msg__Rada));
  bool success = ros2_rada_msg__msg__Rada__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_rada_msg__msg__Rada__destroy(ros2_rada_msg__msg__Rada * msg)
{
  if (msg) {
    ros2_rada_msg__msg__Rada__fini(msg);
  }
  free(msg);
}


bool
ros2_rada_msg__msg__Rada__Sequence__init(ros2_rada_msg__msg__Rada__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_rada_msg__msg__Rada * data = NULL;
  if (size) {
    data = (ros2_rada_msg__msg__Rada *)calloc(size, sizeof(ros2_rada_msg__msg__Rada));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_rada_msg__msg__Rada__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_rada_msg__msg__Rada__fini(&data[i - 1]);
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
ros2_rada_msg__msg__Rada__Sequence__fini(ros2_rada_msg__msg__Rada__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_rada_msg__msg__Rada__fini(&array->data[i]);
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

ros2_rada_msg__msg__Rada__Sequence *
ros2_rada_msg__msg__Rada__Sequence__create(size_t size)
{
  ros2_rada_msg__msg__Rada__Sequence * array = (ros2_rada_msg__msg__Rada__Sequence *)malloc(sizeof(ros2_rada_msg__msg__Rada__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_rada_msg__msg__Rada__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_rada_msg__msg__Rada__Sequence__destroy(ros2_rada_msg__msg__Rada__Sequence * array)
{
  if (array) {
    ros2_rada_msg__msg__Rada__Sequence__fini(array);
  }
  free(array);
}
