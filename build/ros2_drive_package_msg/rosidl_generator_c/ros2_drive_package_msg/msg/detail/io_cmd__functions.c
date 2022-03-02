// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_drive_package_msg:msg/IoCmd.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/io_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ros2_drive_package_msg__msg__IoCmd__init(ros2_drive_package_msg__msg__IoCmd * msg)
{
  if (!msg) {
    return false;
  }
  // io_cmd_lamp_ctrl
  // io_cmd_unlock
  // io_cmd_lower_beam_headlamp
  // io_cmd_upper_beam_headlamp
  // io_cmd_turn_lamp
  // io_cmd_braking_lamp
  // io_cmd_clearance_lamp
  // io_cmd_fog_lamp
  // io_cmd_speaker
  return true;
}

void
ros2_drive_package_msg__msg__IoCmd__fini(ros2_drive_package_msg__msg__IoCmd * msg)
{
  if (!msg) {
    return;
  }
  // io_cmd_lamp_ctrl
  // io_cmd_unlock
  // io_cmd_lower_beam_headlamp
  // io_cmd_upper_beam_headlamp
  // io_cmd_turn_lamp
  // io_cmd_braking_lamp
  // io_cmd_clearance_lamp
  // io_cmd_fog_lamp
  // io_cmd_speaker
}

ros2_drive_package_msg__msg__IoCmd *
ros2_drive_package_msg__msg__IoCmd__create()
{
  ros2_drive_package_msg__msg__IoCmd * msg = (ros2_drive_package_msg__msg__IoCmd *)malloc(sizeof(ros2_drive_package_msg__msg__IoCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_drive_package_msg__msg__IoCmd));
  bool success = ros2_drive_package_msg__msg__IoCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_drive_package_msg__msg__IoCmd__destroy(ros2_drive_package_msg__msg__IoCmd * msg)
{
  if (msg) {
    ros2_drive_package_msg__msg__IoCmd__fini(msg);
  }
  free(msg);
}


bool
ros2_drive_package_msg__msg__IoCmd__Sequence__init(ros2_drive_package_msg__msg__IoCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_drive_package_msg__msg__IoCmd * data = NULL;
  if (size) {
    data = (ros2_drive_package_msg__msg__IoCmd *)calloc(size, sizeof(ros2_drive_package_msg__msg__IoCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_drive_package_msg__msg__IoCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_drive_package_msg__msg__IoCmd__fini(&data[i - 1]);
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
ros2_drive_package_msg__msg__IoCmd__Sequence__fini(ros2_drive_package_msg__msg__IoCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_drive_package_msg__msg__IoCmd__fini(&array->data[i]);
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

ros2_drive_package_msg__msg__IoCmd__Sequence *
ros2_drive_package_msg__msg__IoCmd__Sequence__create(size_t size)
{
  ros2_drive_package_msg__msg__IoCmd__Sequence * array = (ros2_drive_package_msg__msg__IoCmd__Sequence *)malloc(sizeof(ros2_drive_package_msg__msg__IoCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_drive_package_msg__msg__IoCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_drive_package_msg__msg__IoCmd__Sequence__destroy(ros2_drive_package_msg__msg__IoCmd__Sequence * array)
{
  if (array) {
    ros2_drive_package_msg__msg__IoCmd__Sequence__fini(array);
  }
  free(array);
}
