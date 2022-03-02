// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_drive_package_msg:msg/FreeCtrlCmd.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/free_ctrl_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ros2_drive_package_msg__msg__FreeCtrlCmd__init(ros2_drive_package_msg__msg__FreeCtrlCmd * msg)
{
  if (!msg) {
    return false;
  }
  // ctrl_cmd_gear
  // free_ctrl_cmd_velocity_l
  // free_ctrl_cmd_velocity_r
  return true;
}

void
ros2_drive_package_msg__msg__FreeCtrlCmd__fini(ros2_drive_package_msg__msg__FreeCtrlCmd * msg)
{
  if (!msg) {
    return;
  }
  // ctrl_cmd_gear
  // free_ctrl_cmd_velocity_l
  // free_ctrl_cmd_velocity_r
}

ros2_drive_package_msg__msg__FreeCtrlCmd *
ros2_drive_package_msg__msg__FreeCtrlCmd__create()
{
  ros2_drive_package_msg__msg__FreeCtrlCmd * msg = (ros2_drive_package_msg__msg__FreeCtrlCmd *)malloc(sizeof(ros2_drive_package_msg__msg__FreeCtrlCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_drive_package_msg__msg__FreeCtrlCmd));
  bool success = ros2_drive_package_msg__msg__FreeCtrlCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_drive_package_msg__msg__FreeCtrlCmd__destroy(ros2_drive_package_msg__msg__FreeCtrlCmd * msg)
{
  if (msg) {
    ros2_drive_package_msg__msg__FreeCtrlCmd__fini(msg);
  }
  free(msg);
}


bool
ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence__init(ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_drive_package_msg__msg__FreeCtrlCmd * data = NULL;
  if (size) {
    data = (ros2_drive_package_msg__msg__FreeCtrlCmd *)calloc(size, sizeof(ros2_drive_package_msg__msg__FreeCtrlCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_drive_package_msg__msg__FreeCtrlCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_drive_package_msg__msg__FreeCtrlCmd__fini(&data[i - 1]);
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
ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence__fini(ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_drive_package_msg__msg__FreeCtrlCmd__fini(&array->data[i]);
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

ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence *
ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence__create(size_t size)
{
  ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence * array = (ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence *)malloc(sizeof(ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence__destroy(ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence * array)
{
  if (array) {
    ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence__fini(array);
  }
  free(array);
}
