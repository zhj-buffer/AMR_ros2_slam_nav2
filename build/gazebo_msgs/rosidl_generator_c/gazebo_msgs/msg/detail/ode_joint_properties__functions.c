// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/ODEJointProperties.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/ode_joint_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `damping`
// Member `hi_stop`
// Member `lo_stop`
// Member `erp`
// Member `cfm`
// Member `stop_erp`
// Member `stop_cfm`
// Member `fudge_factor`
// Member `fmax`
// Member `vel`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gazebo_msgs__msg__ODEJointProperties__init(gazebo_msgs__msg__ODEJointProperties * msg)
{
  if (!msg) {
    return false;
  }
  // damping
  if (!rosidl_runtime_c__double__Sequence__init(&msg->damping, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // hi_stop
  if (!rosidl_runtime_c__double__Sequence__init(&msg->hi_stop, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // lo_stop
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lo_stop, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // erp
  if (!rosidl_runtime_c__double__Sequence__init(&msg->erp, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // cfm
  if (!rosidl_runtime_c__double__Sequence__init(&msg->cfm, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // stop_erp
  if (!rosidl_runtime_c__double__Sequence__init(&msg->stop_erp, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // stop_cfm
  if (!rosidl_runtime_c__double__Sequence__init(&msg->stop_cfm, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // fudge_factor
  if (!rosidl_runtime_c__double__Sequence__init(&msg->fudge_factor, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // fmax
  if (!rosidl_runtime_c__double__Sequence__init(&msg->fmax, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // vel
  if (!rosidl_runtime_c__double__Sequence__init(&msg->vel, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__msg__ODEJointProperties__fini(gazebo_msgs__msg__ODEJointProperties * msg)
{
  if (!msg) {
    return;
  }
  // damping
  rosidl_runtime_c__double__Sequence__fini(&msg->damping);
  // hi_stop
  rosidl_runtime_c__double__Sequence__fini(&msg->hi_stop);
  // lo_stop
  rosidl_runtime_c__double__Sequence__fini(&msg->lo_stop);
  // erp
  rosidl_runtime_c__double__Sequence__fini(&msg->erp);
  // cfm
  rosidl_runtime_c__double__Sequence__fini(&msg->cfm);
  // stop_erp
  rosidl_runtime_c__double__Sequence__fini(&msg->stop_erp);
  // stop_cfm
  rosidl_runtime_c__double__Sequence__fini(&msg->stop_cfm);
  // fudge_factor
  rosidl_runtime_c__double__Sequence__fini(&msg->fudge_factor);
  // fmax
  rosidl_runtime_c__double__Sequence__fini(&msg->fmax);
  // vel
  rosidl_runtime_c__double__Sequence__fini(&msg->vel);
}

gazebo_msgs__msg__ODEJointProperties *
gazebo_msgs__msg__ODEJointProperties__create()
{
  gazebo_msgs__msg__ODEJointProperties * msg = (gazebo_msgs__msg__ODEJointProperties *)malloc(sizeof(gazebo_msgs__msg__ODEJointProperties));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__ODEJointProperties));
  bool success = gazebo_msgs__msg__ODEJointProperties__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__ODEJointProperties__destroy(gazebo_msgs__msg__ODEJointProperties * msg)
{
  if (msg) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__msg__ODEJointProperties__Sequence__init(gazebo_msgs__msg__ODEJointProperties__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__msg__ODEJointProperties * data = NULL;
  if (size) {
    data = (gazebo_msgs__msg__ODEJointProperties *)calloc(size, sizeof(gazebo_msgs__msg__ODEJointProperties));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__ODEJointProperties__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__ODEJointProperties__fini(&data[i - 1]);
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
gazebo_msgs__msg__ODEJointProperties__Sequence__fini(gazebo_msgs__msg__ODEJointProperties__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__msg__ODEJointProperties__fini(&array->data[i]);
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

gazebo_msgs__msg__ODEJointProperties__Sequence *
gazebo_msgs__msg__ODEJointProperties__Sequence__create(size_t size)
{
  gazebo_msgs__msg__ODEJointProperties__Sequence * array = (gazebo_msgs__msg__ODEJointProperties__Sequence *)malloc(sizeof(gazebo_msgs__msg__ODEJointProperties__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__ODEJointProperties__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__ODEJointProperties__Sequence__destroy(gazebo_msgs__msg__ODEJointProperties__Sequence * array)
{
  if (array) {
    gazebo_msgs__msg__ODEJointProperties__Sequence__fini(array);
  }
  free(array);
}
