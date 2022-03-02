// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_drive_package_msg:msg/BmsFlagFb.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/bms_flag_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ros2_drive_package_msg__msg__BmsFlagFb__init(ros2_drive_package_msg__msg__BmsFlagFb * msg)
{
  if (!msg) {
    return false;
  }
  // bms_flag_fb_soc
  // bms_flag_fb_single_ov
  // bms_flag_fb_single_uv
  // bms_flag_fb_ov
  // bms_flag_fb_uv
  // bms_flag_fb_charge_ot
  // bms_flag_fb_charge_ut
  // bms_flag_fb_discharge_ot
  // bms_flag_fb_discharge_ut
  // bms_flag_fb_charge_oc
  // bms_flag_fb_discharge_oc
  // bms_flag_fb_short
  // bms_flag_fb_ic_error
  // bms_flag_fb_lock_mos
  // bms_flag_fb_charge_flag
  // bms_flag_fb_hight_temperature
  // bms_flag_fb_low_temperature
  return true;
}

void
ros2_drive_package_msg__msg__BmsFlagFb__fini(ros2_drive_package_msg__msg__BmsFlagFb * msg)
{
  if (!msg) {
    return;
  }
  // bms_flag_fb_soc
  // bms_flag_fb_single_ov
  // bms_flag_fb_single_uv
  // bms_flag_fb_ov
  // bms_flag_fb_uv
  // bms_flag_fb_charge_ot
  // bms_flag_fb_charge_ut
  // bms_flag_fb_discharge_ot
  // bms_flag_fb_discharge_ut
  // bms_flag_fb_charge_oc
  // bms_flag_fb_discharge_oc
  // bms_flag_fb_short
  // bms_flag_fb_ic_error
  // bms_flag_fb_lock_mos
  // bms_flag_fb_charge_flag
  // bms_flag_fb_hight_temperature
  // bms_flag_fb_low_temperature
}

ros2_drive_package_msg__msg__BmsFlagFb *
ros2_drive_package_msg__msg__BmsFlagFb__create()
{
  ros2_drive_package_msg__msg__BmsFlagFb * msg = (ros2_drive_package_msg__msg__BmsFlagFb *)malloc(sizeof(ros2_drive_package_msg__msg__BmsFlagFb));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_drive_package_msg__msg__BmsFlagFb));
  bool success = ros2_drive_package_msg__msg__BmsFlagFb__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_drive_package_msg__msg__BmsFlagFb__destroy(ros2_drive_package_msg__msg__BmsFlagFb * msg)
{
  if (msg) {
    ros2_drive_package_msg__msg__BmsFlagFb__fini(msg);
  }
  free(msg);
}


bool
ros2_drive_package_msg__msg__BmsFlagFb__Sequence__init(ros2_drive_package_msg__msg__BmsFlagFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_drive_package_msg__msg__BmsFlagFb * data = NULL;
  if (size) {
    data = (ros2_drive_package_msg__msg__BmsFlagFb *)calloc(size, sizeof(ros2_drive_package_msg__msg__BmsFlagFb));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_drive_package_msg__msg__BmsFlagFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_drive_package_msg__msg__BmsFlagFb__fini(&data[i - 1]);
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
ros2_drive_package_msg__msg__BmsFlagFb__Sequence__fini(ros2_drive_package_msg__msg__BmsFlagFb__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_drive_package_msg__msg__BmsFlagFb__fini(&array->data[i]);
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

ros2_drive_package_msg__msg__BmsFlagFb__Sequence *
ros2_drive_package_msg__msg__BmsFlagFb__Sequence__create(size_t size)
{
  ros2_drive_package_msg__msg__BmsFlagFb__Sequence * array = (ros2_drive_package_msg__msg__BmsFlagFb__Sequence *)malloc(sizeof(ros2_drive_package_msg__msg__BmsFlagFb__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_drive_package_msg__msg__BmsFlagFb__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_drive_package_msg__msg__BmsFlagFb__Sequence__destroy(ros2_drive_package_msg__msg__BmsFlagFb__Sequence * array)
{
  if (array) {
    ros2_drive_package_msg__msg__BmsFlagFb__Sequence__fini(array);
  }
  free(array);
}