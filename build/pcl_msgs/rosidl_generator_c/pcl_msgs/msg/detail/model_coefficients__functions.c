// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pcl_msgs:msg/ModelCoefficients.idl
// generated code does not contain a copyright notice
#include "pcl_msgs/msg/detail/model_coefficients__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pcl_msgs__msg__ModelCoefficients__init(pcl_msgs__msg__ModelCoefficients * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pcl_msgs__msg__ModelCoefficients__fini(msg);
    return false;
  }
  // values
  if (!rosidl_runtime_c__float__Sequence__init(&msg->values, 0)) {
    pcl_msgs__msg__ModelCoefficients__fini(msg);
    return false;
  }
  return true;
}

void
pcl_msgs__msg__ModelCoefficients__fini(pcl_msgs__msg__ModelCoefficients * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // values
  rosidl_runtime_c__float__Sequence__fini(&msg->values);
}

pcl_msgs__msg__ModelCoefficients *
pcl_msgs__msg__ModelCoefficients__create()
{
  pcl_msgs__msg__ModelCoefficients * msg = (pcl_msgs__msg__ModelCoefficients *)malloc(sizeof(pcl_msgs__msg__ModelCoefficients));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pcl_msgs__msg__ModelCoefficients));
  bool success = pcl_msgs__msg__ModelCoefficients__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pcl_msgs__msg__ModelCoefficients__destroy(pcl_msgs__msg__ModelCoefficients * msg)
{
  if (msg) {
    pcl_msgs__msg__ModelCoefficients__fini(msg);
  }
  free(msg);
}


bool
pcl_msgs__msg__ModelCoefficients__Sequence__init(pcl_msgs__msg__ModelCoefficients__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pcl_msgs__msg__ModelCoefficients * data = NULL;
  if (size) {
    data = (pcl_msgs__msg__ModelCoefficients *)calloc(size, sizeof(pcl_msgs__msg__ModelCoefficients));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pcl_msgs__msg__ModelCoefficients__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pcl_msgs__msg__ModelCoefficients__fini(&data[i - 1]);
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
pcl_msgs__msg__ModelCoefficients__Sequence__fini(pcl_msgs__msg__ModelCoefficients__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pcl_msgs__msg__ModelCoefficients__fini(&array->data[i]);
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

pcl_msgs__msg__ModelCoefficients__Sequence *
pcl_msgs__msg__ModelCoefficients__Sequence__create(size_t size)
{
  pcl_msgs__msg__ModelCoefficients__Sequence * array = (pcl_msgs__msg__ModelCoefficients__Sequence *)malloc(sizeof(pcl_msgs__msg__ModelCoefficients__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pcl_msgs__msg__ModelCoefficients__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pcl_msgs__msg__ModelCoefficients__Sequence__destroy(pcl_msgs__msg__ModelCoefficients__Sequence * array)
{
  if (array) {
    pcl_msgs__msg__ModelCoefficients__Sequence__fini(array);
  }
  free(array);
}
