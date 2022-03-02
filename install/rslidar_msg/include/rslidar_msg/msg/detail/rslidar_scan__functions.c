// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rslidar_msg:msg/RslidarScan.idl
// generated code does not contain a copyright notice
#include "rslidar_msg/msg/detail/rslidar_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `packets`
#include "rslidar_msg/msg/detail/rslidar_packet__functions.h"

bool
rslidar_msg__msg__RslidarScan__init(rslidar_msg__msg__RslidarScan * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rslidar_msg__msg__RslidarScan__fini(msg);
    return false;
  }
  // packets
  if (!rslidar_msg__msg__RslidarPacket__Sequence__init(&msg->packets, 0)) {
    rslidar_msg__msg__RslidarScan__fini(msg);
    return false;
  }
  return true;
}

void
rslidar_msg__msg__RslidarScan__fini(rslidar_msg__msg__RslidarScan * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // packets
  rslidar_msg__msg__RslidarPacket__Sequence__fini(&msg->packets);
}

rslidar_msg__msg__RslidarScan *
rslidar_msg__msg__RslidarScan__create()
{
  rslidar_msg__msg__RslidarScan * msg = (rslidar_msg__msg__RslidarScan *)malloc(sizeof(rslidar_msg__msg__RslidarScan));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rslidar_msg__msg__RslidarScan));
  bool success = rslidar_msg__msg__RslidarScan__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rslidar_msg__msg__RslidarScan__destroy(rslidar_msg__msg__RslidarScan * msg)
{
  if (msg) {
    rslidar_msg__msg__RslidarScan__fini(msg);
  }
  free(msg);
}


bool
rslidar_msg__msg__RslidarScan__Sequence__init(rslidar_msg__msg__RslidarScan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rslidar_msg__msg__RslidarScan * data = NULL;
  if (size) {
    data = (rslidar_msg__msg__RslidarScan *)calloc(size, sizeof(rslidar_msg__msg__RslidarScan));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rslidar_msg__msg__RslidarScan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rslidar_msg__msg__RslidarScan__fini(&data[i - 1]);
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
rslidar_msg__msg__RslidarScan__Sequence__fini(rslidar_msg__msg__RslidarScan__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rslidar_msg__msg__RslidarScan__fini(&array->data[i]);
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

rslidar_msg__msg__RslidarScan__Sequence *
rslidar_msg__msg__RslidarScan__Sequence__create(size_t size)
{
  rslidar_msg__msg__RslidarScan__Sequence * array = (rslidar_msg__msg__RslidarScan__Sequence *)malloc(sizeof(rslidar_msg__msg__RslidarScan__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rslidar_msg__msg__RslidarScan__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rslidar_msg__msg__RslidarScan__Sequence__destroy(rslidar_msg__msg__RslidarScan__Sequence * array)
{
  if (array) {
    rslidar_msg__msg__RslidarScan__Sequence__fini(array);
  }
  free(array);
}
