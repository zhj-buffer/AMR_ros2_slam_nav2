// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/ODEPhysics.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/ode_physics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
gazebo_msgs__msg__ODEPhysics__init(gazebo_msgs__msg__ODEPhysics * msg)
{
  if (!msg) {
    return false;
  }
  // auto_disable_bodies
  // sor_pgs_precon_iters
  // sor_pgs_iters
  // sor_pgs_w
  // sor_pgs_rms_error_tol
  // contact_surface_layer
  // contact_max_correcting_vel
  // cfm
  // erp
  // max_contacts
  return true;
}

void
gazebo_msgs__msg__ODEPhysics__fini(gazebo_msgs__msg__ODEPhysics * msg)
{
  if (!msg) {
    return;
  }
  // auto_disable_bodies
  // sor_pgs_precon_iters
  // sor_pgs_iters
  // sor_pgs_w
  // sor_pgs_rms_error_tol
  // contact_surface_layer
  // contact_max_correcting_vel
  // cfm
  // erp
  // max_contacts
}

gazebo_msgs__msg__ODEPhysics *
gazebo_msgs__msg__ODEPhysics__create()
{
  gazebo_msgs__msg__ODEPhysics * msg = (gazebo_msgs__msg__ODEPhysics *)malloc(sizeof(gazebo_msgs__msg__ODEPhysics));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__ODEPhysics));
  bool success = gazebo_msgs__msg__ODEPhysics__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__ODEPhysics__destroy(gazebo_msgs__msg__ODEPhysics * msg)
{
  if (msg) {
    gazebo_msgs__msg__ODEPhysics__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__msg__ODEPhysics__Sequence__init(gazebo_msgs__msg__ODEPhysics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__msg__ODEPhysics * data = NULL;
  if (size) {
    data = (gazebo_msgs__msg__ODEPhysics *)calloc(size, sizeof(gazebo_msgs__msg__ODEPhysics));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__ODEPhysics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__ODEPhysics__fini(&data[i - 1]);
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
gazebo_msgs__msg__ODEPhysics__Sequence__fini(gazebo_msgs__msg__ODEPhysics__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__msg__ODEPhysics__fini(&array->data[i]);
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

gazebo_msgs__msg__ODEPhysics__Sequence *
gazebo_msgs__msg__ODEPhysics__Sequence__create(size_t size)
{
  gazebo_msgs__msg__ODEPhysics__Sequence * array = (gazebo_msgs__msg__ODEPhysics__Sequence *)malloc(sizeof(gazebo_msgs__msg__ODEPhysics__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__ODEPhysics__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__ODEPhysics__Sequence__destroy(gazebo_msgs__msg__ODEPhysics__Sequence * array)
{
  if (array) {
    gazebo_msgs__msg__ODEPhysics__Sequence__fini(array);
  }
  free(array);
}
