// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pcl_msgs:srv/UpdateFilename.idl
// generated code does not contain a copyright notice
#include "pcl_msgs/srv/detail/update_filename__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `filename`
#include "rosidl_runtime_c/string_functions.h"

bool
pcl_msgs__srv__UpdateFilename_Request__init(pcl_msgs__srv__UpdateFilename_Request * msg)
{
  if (!msg) {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__init(&msg->filename)) {
    pcl_msgs__srv__UpdateFilename_Request__fini(msg);
    return false;
  }
  return true;
}

void
pcl_msgs__srv__UpdateFilename_Request__fini(pcl_msgs__srv__UpdateFilename_Request * msg)
{
  if (!msg) {
    return;
  }
  // filename
  rosidl_runtime_c__String__fini(&msg->filename);
}

pcl_msgs__srv__UpdateFilename_Request *
pcl_msgs__srv__UpdateFilename_Request__create()
{
  pcl_msgs__srv__UpdateFilename_Request * msg = (pcl_msgs__srv__UpdateFilename_Request *)malloc(sizeof(pcl_msgs__srv__UpdateFilename_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pcl_msgs__srv__UpdateFilename_Request));
  bool success = pcl_msgs__srv__UpdateFilename_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pcl_msgs__srv__UpdateFilename_Request__destroy(pcl_msgs__srv__UpdateFilename_Request * msg)
{
  if (msg) {
    pcl_msgs__srv__UpdateFilename_Request__fini(msg);
  }
  free(msg);
}


bool
pcl_msgs__srv__UpdateFilename_Request__Sequence__init(pcl_msgs__srv__UpdateFilename_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pcl_msgs__srv__UpdateFilename_Request * data = NULL;
  if (size) {
    data = (pcl_msgs__srv__UpdateFilename_Request *)calloc(size, sizeof(pcl_msgs__srv__UpdateFilename_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pcl_msgs__srv__UpdateFilename_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pcl_msgs__srv__UpdateFilename_Request__fini(&data[i - 1]);
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
pcl_msgs__srv__UpdateFilename_Request__Sequence__fini(pcl_msgs__srv__UpdateFilename_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pcl_msgs__srv__UpdateFilename_Request__fini(&array->data[i]);
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

pcl_msgs__srv__UpdateFilename_Request__Sequence *
pcl_msgs__srv__UpdateFilename_Request__Sequence__create(size_t size)
{
  pcl_msgs__srv__UpdateFilename_Request__Sequence * array = (pcl_msgs__srv__UpdateFilename_Request__Sequence *)malloc(sizeof(pcl_msgs__srv__UpdateFilename_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pcl_msgs__srv__UpdateFilename_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pcl_msgs__srv__UpdateFilename_Request__Sequence__destroy(pcl_msgs__srv__UpdateFilename_Request__Sequence * array)
{
  if (array) {
    pcl_msgs__srv__UpdateFilename_Request__Sequence__fini(array);
  }
  free(array);
}


bool
pcl_msgs__srv__UpdateFilename_Response__init(pcl_msgs__srv__UpdateFilename_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
pcl_msgs__srv__UpdateFilename_Response__fini(pcl_msgs__srv__UpdateFilename_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

pcl_msgs__srv__UpdateFilename_Response *
pcl_msgs__srv__UpdateFilename_Response__create()
{
  pcl_msgs__srv__UpdateFilename_Response * msg = (pcl_msgs__srv__UpdateFilename_Response *)malloc(sizeof(pcl_msgs__srv__UpdateFilename_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pcl_msgs__srv__UpdateFilename_Response));
  bool success = pcl_msgs__srv__UpdateFilename_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pcl_msgs__srv__UpdateFilename_Response__destroy(pcl_msgs__srv__UpdateFilename_Response * msg)
{
  if (msg) {
    pcl_msgs__srv__UpdateFilename_Response__fini(msg);
  }
  free(msg);
}


bool
pcl_msgs__srv__UpdateFilename_Response__Sequence__init(pcl_msgs__srv__UpdateFilename_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pcl_msgs__srv__UpdateFilename_Response * data = NULL;
  if (size) {
    data = (pcl_msgs__srv__UpdateFilename_Response *)calloc(size, sizeof(pcl_msgs__srv__UpdateFilename_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pcl_msgs__srv__UpdateFilename_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pcl_msgs__srv__UpdateFilename_Response__fini(&data[i - 1]);
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
pcl_msgs__srv__UpdateFilename_Response__Sequence__fini(pcl_msgs__srv__UpdateFilename_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pcl_msgs__srv__UpdateFilename_Response__fini(&array->data[i]);
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

pcl_msgs__srv__UpdateFilename_Response__Sequence *
pcl_msgs__srv__UpdateFilename_Response__Sequence__create(size_t size)
{
  pcl_msgs__srv__UpdateFilename_Response__Sequence * array = (pcl_msgs__srv__UpdateFilename_Response__Sequence *)malloc(sizeof(pcl_msgs__srv__UpdateFilename_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pcl_msgs__srv__UpdateFilename_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pcl_msgs__srv__UpdateFilename_Response__Sequence__destroy(pcl_msgs__srv__UpdateFilename_Response__Sequence * array)
{
  if (array) {
    pcl_msgs__srv__UpdateFilename_Response__Sequence__fini(array);
  }
  free(array);
}
