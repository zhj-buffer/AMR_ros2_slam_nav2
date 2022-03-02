// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_drive_package_msg:msg/CtrlFb.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/ctrl_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ros2_drive_package_msg__msg__CtrlFb__init(ros2_drive_package_msg__msg__CtrlFb * msg)
{
  if (!msg) {
    return false;
  }
  // ctrl_fb_target_gear
  // ctrl_fb_linear
  // ctrl_fb_angular
  return true;
}

void
ros2_drive_package_msg__msg__CtrlFb__fini(ros2_drive_package_msg__msg__CtrlFb * msg)
{
  if (!msg) {
    return;
  }
  // ctrl_fb_target_gear
  // ctrl_fb_linear
  // ctrl_fb_angular
}

ros2_drive_package_msg__msg__CtrlFb *
ros2_drive_package_msg__msg__CtrlFb__create()
{
  ros2_drive_package_msg__msg__CtrlFb * msg = (ros2_drive_package_msg__msg__CtrlFb *)malloc(sizeof(ros2_drive_package_msg__msg__CtrlFb));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_drive_package_msg__msg__CtrlFb));
  bool success = ros2_drive_package_msg__msg__CtrlFb__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_drive_package_msg__msg__CtrlFb__destroy(ros2_drive_package_msg__msg__CtrlFb * msg)
{
  if (msg) {
    ros2_drive_package_msg__msg__CtrlFb__fini(msg);
  }
  free(msg);
}


bool
ros2_drive_package_msg__msg__CtrlFb__Sequence__init(ros2_drive_package_msg__msg__CtrlFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_drive_package_msg__msg__CtrlFb * data = NULL;
  if (size) {
    data = (ros2_drive_package_msg__msg__CtrlFb *)calloc(size, sizeof(ros2_drive_package_msg__msg__CtrlFb));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_drive_package_msg__msg__CtrlFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_drive_package_msg__msg__CtrlFb__fini(&data[i - 1]);
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
ros2_drive_package_msg__msg__CtrlFb__Sequence__fini(ros2_drive_package_msg__msg__CtrlFb__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_drive_package_msg__msg__CtrlFb__fini(&array->data[i]);
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

ros2_drive_package_msg__msg__CtrlFb__Sequence *
ros2_drive_package_msg__msg__CtrlFb__Sequence__create(size_t size)
{
  ros2_drive_package_msg__msg__CtrlFb__Sequence * array = (ros2_drive_package_msg__msg__CtrlFb__Sequence *)malloc(sizeof(ros2_drive_package_msg__msg__CtrlFb__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_drive_package_msg__msg__CtrlFb__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_drive_package_msg__msg__CtrlFb__Sequence__destroy(ros2_drive_package_msg__msg__CtrlFb__Sequence * array)
{
  if (array) {
    ros2_drive_package_msg__msg__CtrlFb__Sequence__fini(array);
  }
  free(array);
}