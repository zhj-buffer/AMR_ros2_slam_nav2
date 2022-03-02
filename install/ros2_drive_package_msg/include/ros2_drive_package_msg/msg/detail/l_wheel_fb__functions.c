// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_drive_package_msg:msg/LWheelFb.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/l_wheel_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ros2_drive_package_msg__msg__LWheelFb__init(ros2_drive_package_msg__msg__LWheelFb * msg)
{
  if (!msg) {
    return false;
  }
  // l_wheel_fb_velocity
  // l_wheel_fb_pulse
  return true;
}

void
ros2_drive_package_msg__msg__LWheelFb__fini(ros2_drive_package_msg__msg__LWheelFb * msg)
{
  if (!msg) {
    return;
  }
  // l_wheel_fb_velocity
  // l_wheel_fb_pulse
}

ros2_drive_package_msg__msg__LWheelFb *
ros2_drive_package_msg__msg__LWheelFb__create()
{
  ros2_drive_package_msg__msg__LWheelFb * msg = (ros2_drive_package_msg__msg__LWheelFb *)malloc(sizeof(ros2_drive_package_msg__msg__LWheelFb));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_drive_package_msg__msg__LWheelFb));
  bool success = ros2_drive_package_msg__msg__LWheelFb__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_drive_package_msg__msg__LWheelFb__destroy(ros2_drive_package_msg__msg__LWheelFb * msg)
{
  if (msg) {
    ros2_drive_package_msg__msg__LWheelFb__fini(msg);
  }
  free(msg);
}


bool
ros2_drive_package_msg__msg__LWheelFb__Sequence__init(ros2_drive_package_msg__msg__LWheelFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_drive_package_msg__msg__LWheelFb * data = NULL;
  if (size) {
    data = (ros2_drive_package_msg__msg__LWheelFb *)calloc(size, sizeof(ros2_drive_package_msg__msg__LWheelFb));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_drive_package_msg__msg__LWheelFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_drive_package_msg__msg__LWheelFb__fini(&data[i - 1]);
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
ros2_drive_package_msg__msg__LWheelFb__Sequence__fini(ros2_drive_package_msg__msg__LWheelFb__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_drive_package_msg__msg__LWheelFb__fini(&array->data[i]);
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

ros2_drive_package_msg__msg__LWheelFb__Sequence *
ros2_drive_package_msg__msg__LWheelFb__Sequence__create(size_t size)
{
  ros2_drive_package_msg__msg__LWheelFb__Sequence * array = (ros2_drive_package_msg__msg__LWheelFb__Sequence *)malloc(sizeof(ros2_drive_package_msg__msg__LWheelFb__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_drive_package_msg__msg__LWheelFb__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_drive_package_msg__msg__LWheelFb__Sequence__destroy(ros2_drive_package_msg__msg__LWheelFb__Sequence * array)
{
  if (array) {
    ros2_drive_package_msg__msg__LWheelFb__Sequence__fini(array);
  }
  free(array);
}
