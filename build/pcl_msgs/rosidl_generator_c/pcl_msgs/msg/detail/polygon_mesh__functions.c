// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pcl_msgs:msg/PolygonMesh.idl
// generated code does not contain a copyright notice
#include "pcl_msgs/msg/detail/polygon_mesh__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cloud`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `polygons`
#include "pcl_msgs/msg/detail/vertices__functions.h"

bool
pcl_msgs__msg__PolygonMesh__init(pcl_msgs__msg__PolygonMesh * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pcl_msgs__msg__PolygonMesh__fini(msg);
    return false;
  }
  // cloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cloud)) {
    pcl_msgs__msg__PolygonMesh__fini(msg);
    return false;
  }
  // polygons
  if (!pcl_msgs__msg__Vertices__Sequence__init(&msg->polygons, 0)) {
    pcl_msgs__msg__PolygonMesh__fini(msg);
    return false;
  }
  return true;
}

void
pcl_msgs__msg__PolygonMesh__fini(pcl_msgs__msg__PolygonMesh * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cloud
  sensor_msgs__msg__PointCloud2__fini(&msg->cloud);
  // polygons
  pcl_msgs__msg__Vertices__Sequence__fini(&msg->polygons);
}

pcl_msgs__msg__PolygonMesh *
pcl_msgs__msg__PolygonMesh__create()
{
  pcl_msgs__msg__PolygonMesh * msg = (pcl_msgs__msg__PolygonMesh *)malloc(sizeof(pcl_msgs__msg__PolygonMesh));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pcl_msgs__msg__PolygonMesh));
  bool success = pcl_msgs__msg__PolygonMesh__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pcl_msgs__msg__PolygonMesh__destroy(pcl_msgs__msg__PolygonMesh * msg)
{
  if (msg) {
    pcl_msgs__msg__PolygonMesh__fini(msg);
  }
  free(msg);
}


bool
pcl_msgs__msg__PolygonMesh__Sequence__init(pcl_msgs__msg__PolygonMesh__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pcl_msgs__msg__PolygonMesh * data = NULL;
  if (size) {
    data = (pcl_msgs__msg__PolygonMesh *)calloc(size, sizeof(pcl_msgs__msg__PolygonMesh));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pcl_msgs__msg__PolygonMesh__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pcl_msgs__msg__PolygonMesh__fini(&data[i - 1]);
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
pcl_msgs__msg__PolygonMesh__Sequence__fini(pcl_msgs__msg__PolygonMesh__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pcl_msgs__msg__PolygonMesh__fini(&array->data[i]);
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

pcl_msgs__msg__PolygonMesh__Sequence *
pcl_msgs__msg__PolygonMesh__Sequence__create(size_t size)
{
  pcl_msgs__msg__PolygonMesh__Sequence * array = (pcl_msgs__msg__PolygonMesh__Sequence *)malloc(sizeof(pcl_msgs__msg__PolygonMesh__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pcl_msgs__msg__PolygonMesh__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pcl_msgs__msg__PolygonMesh__Sequence__destroy(pcl_msgs__msg__PolygonMesh__Sequence * array)
{
  if (array) {
    pcl_msgs__msg__PolygonMesh__Sequence__fini(array);
  }
  free(array);
}
