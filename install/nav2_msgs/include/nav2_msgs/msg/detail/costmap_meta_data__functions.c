// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/CostmapMetaData.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/costmap_meta_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `map_load_time`
// Member `update_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `layer`
#include "rosidl_runtime_c/string_functions.h"
// Member `origin`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
nav2_msgs__msg__CostmapMetaData__init(nav2_msgs__msg__CostmapMetaData * msg)
{
  if (!msg) {
    return false;
  }
  // map_load_time
  if (!builtin_interfaces__msg__Time__init(&msg->map_load_time)) {
    nav2_msgs__msg__CostmapMetaData__fini(msg);
    return false;
  }
  // update_time
  if (!builtin_interfaces__msg__Time__init(&msg->update_time)) {
    nav2_msgs__msg__CostmapMetaData__fini(msg);
    return false;
  }
  // layer
  if (!rosidl_runtime_c__String__init(&msg->layer)) {
    nav2_msgs__msg__CostmapMetaData__fini(msg);
    return false;
  }
  // resolution
  // size_x
  // size_y
  // origin
  if (!geometry_msgs__msg__Pose__init(&msg->origin)) {
    nav2_msgs__msg__CostmapMetaData__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__msg__CostmapMetaData__fini(nav2_msgs__msg__CostmapMetaData * msg)
{
  if (!msg) {
    return;
  }
  // map_load_time
  builtin_interfaces__msg__Time__fini(&msg->map_load_time);
  // update_time
  builtin_interfaces__msg__Time__fini(&msg->update_time);
  // layer
  rosidl_runtime_c__String__fini(&msg->layer);
  // resolution
  // size_x
  // size_y
  // origin
  geometry_msgs__msg__Pose__fini(&msg->origin);
}

nav2_msgs__msg__CostmapMetaData *
nav2_msgs__msg__CostmapMetaData__create()
{
  nav2_msgs__msg__CostmapMetaData * msg = (nav2_msgs__msg__CostmapMetaData *)malloc(sizeof(nav2_msgs__msg__CostmapMetaData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__CostmapMetaData));
  bool success = nav2_msgs__msg__CostmapMetaData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__CostmapMetaData__destroy(nav2_msgs__msg__CostmapMetaData * msg)
{
  if (msg) {
    nav2_msgs__msg__CostmapMetaData__fini(msg);
  }
  free(msg);
}


bool
nav2_msgs__msg__CostmapMetaData__Sequence__init(nav2_msgs__msg__CostmapMetaData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_msgs__msg__CostmapMetaData * data = NULL;
  if (size) {
    data = (nav2_msgs__msg__CostmapMetaData *)calloc(size, sizeof(nav2_msgs__msg__CostmapMetaData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__CostmapMetaData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__CostmapMetaData__fini(&data[i - 1]);
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
nav2_msgs__msg__CostmapMetaData__Sequence__fini(nav2_msgs__msg__CostmapMetaData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_msgs__msg__CostmapMetaData__fini(&array->data[i]);
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

nav2_msgs__msg__CostmapMetaData__Sequence *
nav2_msgs__msg__CostmapMetaData__Sequence__create(size_t size)
{
  nav2_msgs__msg__CostmapMetaData__Sequence * array = (nav2_msgs__msg__CostmapMetaData__Sequence *)malloc(sizeof(nav2_msgs__msg__CostmapMetaData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__CostmapMetaData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__CostmapMetaData__Sequence__destroy(nav2_msgs__msg__CostmapMetaData__Sequence * array)
{
  if (array) {
    nav2_msgs__msg__CostmapMetaData__Sequence__fini(array);
  }
  free(array);
}
