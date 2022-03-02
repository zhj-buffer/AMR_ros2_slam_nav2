// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from realsense2_camera_msgs:srv/DeviceInfo.idl
// generated code does not contain a copyright notice
#include "realsense2_camera_msgs/srv/detail/device_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
realsense2_camera_msgs__srv__DeviceInfo_Request__init(realsense2_camera_msgs__srv__DeviceInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
realsense2_camera_msgs__srv__DeviceInfo_Request__fini(realsense2_camera_msgs__srv__DeviceInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

realsense2_camera_msgs__srv__DeviceInfo_Request *
realsense2_camera_msgs__srv__DeviceInfo_Request__create()
{
  realsense2_camera_msgs__srv__DeviceInfo_Request * msg = (realsense2_camera_msgs__srv__DeviceInfo_Request *)malloc(sizeof(realsense2_camera_msgs__srv__DeviceInfo_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(realsense2_camera_msgs__srv__DeviceInfo_Request));
  bool success = realsense2_camera_msgs__srv__DeviceInfo_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
realsense2_camera_msgs__srv__DeviceInfo_Request__destroy(realsense2_camera_msgs__srv__DeviceInfo_Request * msg)
{
  if (msg) {
    realsense2_camera_msgs__srv__DeviceInfo_Request__fini(msg);
  }
  free(msg);
}


bool
realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence__init(realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  realsense2_camera_msgs__srv__DeviceInfo_Request * data = NULL;
  if (size) {
    data = (realsense2_camera_msgs__srv__DeviceInfo_Request *)calloc(size, sizeof(realsense2_camera_msgs__srv__DeviceInfo_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = realsense2_camera_msgs__srv__DeviceInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        realsense2_camera_msgs__srv__DeviceInfo_Request__fini(&data[i - 1]);
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
realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence__fini(realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      realsense2_camera_msgs__srv__DeviceInfo_Request__fini(&array->data[i]);
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

realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence *
realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence__create(size_t size)
{
  realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence * array = (realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence *)malloc(sizeof(realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence__destroy(realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence * array)
{
  if (array) {
    realsense2_camera_msgs__srv__DeviceInfo_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `device_name`
// Member `serial_number`
// Member `firmware_version`
// Member `usb_type_descriptor`
// Member `firmware_update_id`
// Member `sensors`
#include "rosidl_runtime_c/string_functions.h"

bool
realsense2_camera_msgs__srv__DeviceInfo_Response__init(realsense2_camera_msgs__srv__DeviceInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__init(&msg->device_name)) {
    realsense2_camera_msgs__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    realsense2_camera_msgs__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__init(&msg->firmware_version)) {
    realsense2_camera_msgs__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  // usb_type_descriptor
  if (!rosidl_runtime_c__String__init(&msg->usb_type_descriptor)) {
    realsense2_camera_msgs__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  // firmware_update_id
  if (!rosidl_runtime_c__String__init(&msg->firmware_update_id)) {
    realsense2_camera_msgs__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  // sensors
  if (!rosidl_runtime_c__String__init(&msg->sensors)) {
    realsense2_camera_msgs__srv__DeviceInfo_Response__fini(msg);
    return false;
  }
  return true;
}

void
realsense2_camera_msgs__srv__DeviceInfo_Response__fini(realsense2_camera_msgs__srv__DeviceInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // device_name
  rosidl_runtime_c__String__fini(&msg->device_name);
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
  // firmware_version
  rosidl_runtime_c__String__fini(&msg->firmware_version);
  // usb_type_descriptor
  rosidl_runtime_c__String__fini(&msg->usb_type_descriptor);
  // firmware_update_id
  rosidl_runtime_c__String__fini(&msg->firmware_update_id);
  // sensors
  rosidl_runtime_c__String__fini(&msg->sensors);
}

realsense2_camera_msgs__srv__DeviceInfo_Response *
realsense2_camera_msgs__srv__DeviceInfo_Response__create()
{
  realsense2_camera_msgs__srv__DeviceInfo_Response * msg = (realsense2_camera_msgs__srv__DeviceInfo_Response *)malloc(sizeof(realsense2_camera_msgs__srv__DeviceInfo_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(realsense2_camera_msgs__srv__DeviceInfo_Response));
  bool success = realsense2_camera_msgs__srv__DeviceInfo_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
realsense2_camera_msgs__srv__DeviceInfo_Response__destroy(realsense2_camera_msgs__srv__DeviceInfo_Response * msg)
{
  if (msg) {
    realsense2_camera_msgs__srv__DeviceInfo_Response__fini(msg);
  }
  free(msg);
}


bool
realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence__init(realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  realsense2_camera_msgs__srv__DeviceInfo_Response * data = NULL;
  if (size) {
    data = (realsense2_camera_msgs__srv__DeviceInfo_Response *)calloc(size, sizeof(realsense2_camera_msgs__srv__DeviceInfo_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = realsense2_camera_msgs__srv__DeviceInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        realsense2_camera_msgs__srv__DeviceInfo_Response__fini(&data[i - 1]);
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
realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence__fini(realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      realsense2_camera_msgs__srv__DeviceInfo_Response__fini(&array->data[i]);
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

realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence *
realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence__create(size_t size)
{
  realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence * array = (realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence *)malloc(sizeof(realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence__destroy(realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence * array)
{
  if (array) {
    realsense2_camera_msgs__srv__DeviceInfo_Response__Sequence__fini(array);
  }
  free(array);
}
