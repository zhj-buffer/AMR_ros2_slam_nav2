// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pcl_msgs:msg/Vertices.idl
// generated code does not contain a copyright notice
#include "pcl_msgs/msg/detail/vertices__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `vertices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pcl_msgs__msg__Vertices__init(pcl_msgs__msg__Vertices * msg)
{
  if (!msg) {
    return false;
  }
  // vertices
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->vertices, 0)) {
    pcl_msgs__msg__Vertices__fini(msg);
    return false;
  }
  return true;
}

void
pcl_msgs__msg__Vertices__fini(pcl_msgs__msg__Vertices * msg)
{
  if (!msg) {
    return;
  }
  // vertices
  rosidl_runtime_c__uint32__Sequence__fini(&msg->vertices);
}

pcl_msgs__msg__Vertices *
pcl_msgs__msg__Vertices__create()
{
  pcl_msgs__msg__Vertices * msg = (pcl_msgs__msg__Vertices *)malloc(sizeof(pcl_msgs__msg__Vertices));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pcl_msgs__msg__Vertices));
  bool success = pcl_msgs__msg__Vertices__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pcl_msgs__msg__Vertices__destroy(pcl_msgs__msg__Vertices * msg)
{
  if (msg) {
    pcl_msgs__msg__Vertices__fini(msg);
  }
  free(msg);
}


bool
pcl_msgs__msg__Vertices__Sequence__init(pcl_msgs__msg__Vertices__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pcl_msgs__msg__Vertices * data = NULL;
  if (size) {
    data = (pcl_msgs__msg__Vertices *)calloc(size, sizeof(pcl_msgs__msg__Vertices));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pcl_msgs__msg__Vertices__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pcl_msgs__msg__Vertices__fini(&data[i - 1]);
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
pcl_msgs__msg__Vertices__Sequence__fini(pcl_msgs__msg__Vertices__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pcl_msgs__msg__Vertices__fini(&array->data[i]);
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

pcl_msgs__msg__Vertices__Sequence *
pcl_msgs__msg__Vertices__Sequence__create(size_t size)
{
  pcl_msgs__msg__Vertices__Sequence * array = (pcl_msgs__msg__Vertices__Sequence *)malloc(sizeof(pcl_msgs__msg__Vertices__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pcl_msgs__msg__Vertices__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pcl_msgs__msg__Vertices__Sequence__destroy(pcl_msgs__msg__Vertices__Sequence * array)
{
  if (array) {
    pcl_msgs__msg__Vertices__Sequence__fini(array);
  }
  free(array);
}
