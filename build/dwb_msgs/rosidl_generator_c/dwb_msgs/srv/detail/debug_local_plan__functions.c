// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dwb_msgs:srv/DebugLocalPlan.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/srv/detail/debug_local_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `pose`
#include "nav_2d_msgs/msg/detail/pose2_d_stamped__functions.h"
// Member `velocity`
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"
// Member `global_plan`
#include "nav_2d_msgs/msg/detail/path2_d__functions.h"

bool
dwb_msgs__srv__DebugLocalPlan_Request__init(dwb_msgs__srv__DebugLocalPlan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!nav_2d_msgs__msg__Pose2DStamped__init(&msg->pose)) {
    dwb_msgs__srv__DebugLocalPlan_Request__fini(msg);
    return false;
  }
  // velocity
  if (!nav_2d_msgs__msg__Twist2D__init(&msg->velocity)) {
    dwb_msgs__srv__DebugLocalPlan_Request__fini(msg);
    return false;
  }
  // global_plan
  if (!nav_2d_msgs__msg__Path2D__init(&msg->global_plan)) {
    dwb_msgs__srv__DebugLocalPlan_Request__fini(msg);
    return false;
  }
  return true;
}

void
dwb_msgs__srv__DebugLocalPlan_Request__fini(dwb_msgs__srv__DebugLocalPlan_Request * msg)
{
  if (!msg) {
    return;
  }
  // pose
  nav_2d_msgs__msg__Pose2DStamped__fini(&msg->pose);
  // velocity
  nav_2d_msgs__msg__Twist2D__fini(&msg->velocity);
  // global_plan
  nav_2d_msgs__msg__Path2D__fini(&msg->global_plan);
}

dwb_msgs__srv__DebugLocalPlan_Request *
dwb_msgs__srv__DebugLocalPlan_Request__create()
{
  dwb_msgs__srv__DebugLocalPlan_Request * msg = (dwb_msgs__srv__DebugLocalPlan_Request *)malloc(sizeof(dwb_msgs__srv__DebugLocalPlan_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__srv__DebugLocalPlan_Request));
  bool success = dwb_msgs__srv__DebugLocalPlan_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__srv__DebugLocalPlan_Request__destroy(dwb_msgs__srv__DebugLocalPlan_Request * msg)
{
  if (msg) {
    dwb_msgs__srv__DebugLocalPlan_Request__fini(msg);
  }
  free(msg);
}


bool
dwb_msgs__srv__DebugLocalPlan_Request__Sequence__init(dwb_msgs__srv__DebugLocalPlan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dwb_msgs__srv__DebugLocalPlan_Request * data = NULL;
  if (size) {
    data = (dwb_msgs__srv__DebugLocalPlan_Request *)calloc(size, sizeof(dwb_msgs__srv__DebugLocalPlan_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__srv__DebugLocalPlan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__srv__DebugLocalPlan_Request__fini(&data[i - 1]);
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
dwb_msgs__srv__DebugLocalPlan_Request__Sequence__fini(dwb_msgs__srv__DebugLocalPlan_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dwb_msgs__srv__DebugLocalPlan_Request__fini(&array->data[i]);
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

dwb_msgs__srv__DebugLocalPlan_Request__Sequence *
dwb_msgs__srv__DebugLocalPlan_Request__Sequence__create(size_t size)
{
  dwb_msgs__srv__DebugLocalPlan_Request__Sequence * array = (dwb_msgs__srv__DebugLocalPlan_Request__Sequence *)malloc(sizeof(dwb_msgs__srv__DebugLocalPlan_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__srv__DebugLocalPlan_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dwb_msgs__srv__DebugLocalPlan_Request__Sequence__destroy(dwb_msgs__srv__DebugLocalPlan_Request__Sequence * array)
{
  if (array) {
    dwb_msgs__srv__DebugLocalPlan_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `results`
#include "dwb_msgs/msg/detail/local_plan_evaluation__functions.h"

bool
dwb_msgs__srv__DebugLocalPlan_Response__init(dwb_msgs__srv__DebugLocalPlan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // results
  if (!dwb_msgs__msg__LocalPlanEvaluation__init(&msg->results)) {
    dwb_msgs__srv__DebugLocalPlan_Response__fini(msg);
    return false;
  }
  return true;
}

void
dwb_msgs__srv__DebugLocalPlan_Response__fini(dwb_msgs__srv__DebugLocalPlan_Response * msg)
{
  if (!msg) {
    return;
  }
  // results
  dwb_msgs__msg__LocalPlanEvaluation__fini(&msg->results);
}

dwb_msgs__srv__DebugLocalPlan_Response *
dwb_msgs__srv__DebugLocalPlan_Response__create()
{
  dwb_msgs__srv__DebugLocalPlan_Response * msg = (dwb_msgs__srv__DebugLocalPlan_Response *)malloc(sizeof(dwb_msgs__srv__DebugLocalPlan_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__srv__DebugLocalPlan_Response));
  bool success = dwb_msgs__srv__DebugLocalPlan_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__srv__DebugLocalPlan_Response__destroy(dwb_msgs__srv__DebugLocalPlan_Response * msg)
{
  if (msg) {
    dwb_msgs__srv__DebugLocalPlan_Response__fini(msg);
  }
  free(msg);
}


bool
dwb_msgs__srv__DebugLocalPlan_Response__Sequence__init(dwb_msgs__srv__DebugLocalPlan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dwb_msgs__srv__DebugLocalPlan_Response * data = NULL;
  if (size) {
    data = (dwb_msgs__srv__DebugLocalPlan_Response *)calloc(size, sizeof(dwb_msgs__srv__DebugLocalPlan_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__srv__DebugLocalPlan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__srv__DebugLocalPlan_Response__fini(&data[i - 1]);
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
dwb_msgs__srv__DebugLocalPlan_Response__Sequence__fini(dwb_msgs__srv__DebugLocalPlan_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dwb_msgs__srv__DebugLocalPlan_Response__fini(&array->data[i]);
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

dwb_msgs__srv__DebugLocalPlan_Response__Sequence *
dwb_msgs__srv__DebugLocalPlan_Response__Sequence__create(size_t size)
{
  dwb_msgs__srv__DebugLocalPlan_Response__Sequence * array = (dwb_msgs__srv__DebugLocalPlan_Response__Sequence *)malloc(sizeof(dwb_msgs__srv__DebugLocalPlan_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__srv__DebugLocalPlan_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dwb_msgs__srv__DebugLocalPlan_Response__Sequence__destroy(dwb_msgs__srv__DebugLocalPlan_Response__Sequence * array)
{
  if (array) {
    dwb_msgs__srv__DebugLocalPlan_Response__Sequence__fini(array);
  }
  free(array);
}
