// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:srv/SpawnEntity.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/srv/detail/spawn_entity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `name`
// Member `xml`
// Member `robot_namespace`
// Member `reference_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `initial_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
gazebo_msgs__srv__SpawnEntity_Request__init(gazebo_msgs__srv__SpawnEntity_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    gazebo_msgs__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  // xml
  if (!rosidl_runtime_c__String__init(&msg->xml)) {
    gazebo_msgs__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  // robot_namespace
  if (!rosidl_runtime_c__String__init(&msg->robot_namespace)) {
    gazebo_msgs__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  // initial_pose
  if (!geometry_msgs__msg__Pose__init(&msg->initial_pose)) {
    gazebo_msgs__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__init(&msg->reference_frame)) {
    gazebo_msgs__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__SpawnEntity_Request__fini(gazebo_msgs__srv__SpawnEntity_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // xml
  rosidl_runtime_c__String__fini(&msg->xml);
  // robot_namespace
  rosidl_runtime_c__String__fini(&msg->robot_namespace);
  // initial_pose
  geometry_msgs__msg__Pose__fini(&msg->initial_pose);
  // reference_frame
  rosidl_runtime_c__String__fini(&msg->reference_frame);
}

gazebo_msgs__srv__SpawnEntity_Request *
gazebo_msgs__srv__SpawnEntity_Request__create()
{
  gazebo_msgs__srv__SpawnEntity_Request * msg = (gazebo_msgs__srv__SpawnEntity_Request *)malloc(sizeof(gazebo_msgs__srv__SpawnEntity_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SpawnEntity_Request));
  bool success = gazebo_msgs__srv__SpawnEntity_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SpawnEntity_Request__destroy(gazebo_msgs__srv__SpawnEntity_Request * msg)
{
  if (msg) {
    gazebo_msgs__srv__SpawnEntity_Request__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__srv__SpawnEntity_Request__Sequence__init(gazebo_msgs__srv__SpawnEntity_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__srv__SpawnEntity_Request * data = NULL;
  if (size) {
    data = (gazebo_msgs__srv__SpawnEntity_Request *)calloc(size, sizeof(gazebo_msgs__srv__SpawnEntity_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SpawnEntity_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SpawnEntity_Request__fini(&data[i - 1]);
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
gazebo_msgs__srv__SpawnEntity_Request__Sequence__fini(gazebo_msgs__srv__SpawnEntity_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SpawnEntity_Request__fini(&array->data[i]);
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

gazebo_msgs__srv__SpawnEntity_Request__Sequence *
gazebo_msgs__srv__SpawnEntity_Request__Sequence__create(size_t size)
{
  gazebo_msgs__srv__SpawnEntity_Request__Sequence * array = (gazebo_msgs__srv__SpawnEntity_Request__Sequence *)malloc(sizeof(gazebo_msgs__srv__SpawnEntity_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SpawnEntity_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SpawnEntity_Request__Sequence__destroy(gazebo_msgs__srv__SpawnEntity_Request__Sequence * array)
{
  if (array) {
    gazebo_msgs__srv__SpawnEntity_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
gazebo_msgs__srv__SpawnEntity_Response__init(gazebo_msgs__srv__SpawnEntity_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    gazebo_msgs__srv__SpawnEntity_Response__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__SpawnEntity_Response__fini(gazebo_msgs__srv__SpawnEntity_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
}

gazebo_msgs__srv__SpawnEntity_Response *
gazebo_msgs__srv__SpawnEntity_Response__create()
{
  gazebo_msgs__srv__SpawnEntity_Response * msg = (gazebo_msgs__srv__SpawnEntity_Response *)malloc(sizeof(gazebo_msgs__srv__SpawnEntity_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SpawnEntity_Response));
  bool success = gazebo_msgs__srv__SpawnEntity_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SpawnEntity_Response__destroy(gazebo_msgs__srv__SpawnEntity_Response * msg)
{
  if (msg) {
    gazebo_msgs__srv__SpawnEntity_Response__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__srv__SpawnEntity_Response__Sequence__init(gazebo_msgs__srv__SpawnEntity_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__srv__SpawnEntity_Response * data = NULL;
  if (size) {
    data = (gazebo_msgs__srv__SpawnEntity_Response *)calloc(size, sizeof(gazebo_msgs__srv__SpawnEntity_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SpawnEntity_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SpawnEntity_Response__fini(&data[i - 1]);
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
gazebo_msgs__srv__SpawnEntity_Response__Sequence__fini(gazebo_msgs__srv__SpawnEntity_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SpawnEntity_Response__fini(&array->data[i]);
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

gazebo_msgs__srv__SpawnEntity_Response__Sequence *
gazebo_msgs__srv__SpawnEntity_Response__Sequence__create(size_t size)
{
  gazebo_msgs__srv__SpawnEntity_Response__Sequence * array = (gazebo_msgs__srv__SpawnEntity_Response__Sequence *)malloc(sizeof(gazebo_msgs__srv__SpawnEntity_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SpawnEntity_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SpawnEntity_Response__Sequence__destroy(gazebo_msgs__srv__SpawnEntity_Response__Sequence * array)
{
  if (array) {
    gazebo_msgs__srv__SpawnEntity_Response__Sequence__fini(array);
  }
  free(array);
}
