// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rslidar_msg:msg/RslidarPacket.idl
// generated code does not contain a copyright notice
#include "rslidar_msg/msg/detail/rslidar_packet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rslidar_msg__msg__RslidarPacket__init(rslidar_msg__msg__RslidarPacket * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rslidar_msg__msg__RslidarPacket__fini(msg);
    return false;
  }
  // data
  return true;
}

void
rslidar_msg__msg__RslidarPacket__fini(rslidar_msg__msg__RslidarPacket * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // data
}

rslidar_msg__msg__RslidarPacket *
rslidar_msg__msg__RslidarPacket__create()
{
  rslidar_msg__msg__RslidarPacket * msg = (rslidar_msg__msg__RslidarPacket *)malloc(sizeof(rslidar_msg__msg__RslidarPacket));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rslidar_msg__msg__RslidarPacket));
  bool success = rslidar_msg__msg__RslidarPacket__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rslidar_msg__msg__RslidarPacket__destroy(rslidar_msg__msg__RslidarPacket * msg)
{
  if (msg) {
    rslidar_msg__msg__RslidarPacket__fini(msg);
  }
  free(msg);
}


bool
rslidar_msg__msg__RslidarPacket__Sequence__init(rslidar_msg__msg__RslidarPacket__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rslidar_msg__msg__RslidarPacket * data = NULL;
  if (size) {
    data = (rslidar_msg__msg__RslidarPacket *)calloc(size, sizeof(rslidar_msg__msg__RslidarPacket));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rslidar_msg__msg__RslidarPacket__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rslidar_msg__msg__RslidarPacket__fini(&data[i - 1]);
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
rslidar_msg__msg__RslidarPacket__Sequence__fini(rslidar_msg__msg__RslidarPacket__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rslidar_msg__msg__RslidarPacket__fini(&array->data[i]);
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

rslidar_msg__msg__RslidarPacket__Sequence *
rslidar_msg__msg__RslidarPacket__Sequence__create(size_t size)
{
  rslidar_msg__msg__RslidarPacket__Sequence * array = (rslidar_msg__msg__RslidarPacket__Sequence *)malloc(sizeof(rslidar_msg__msg__RslidarPacket__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rslidar_msg__msg__RslidarPacket__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rslidar_msg__msg__RslidarPacket__Sequence__destroy(rslidar_msg__msg__RslidarPacket__Sequence * array)
{
  if (array) {
    rslidar_msg__msg__RslidarPacket__Sequence__fini(array);
  }
  free(array);
}
