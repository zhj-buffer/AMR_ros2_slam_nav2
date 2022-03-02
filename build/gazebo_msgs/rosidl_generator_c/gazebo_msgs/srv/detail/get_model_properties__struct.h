// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/GetModelProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'model_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetModelProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetModelProperties_Request
{
  rosidl_runtime_c__String model_name;
} gazebo_msgs__srv__GetModelProperties_Request;

// Struct for a sequence of gazebo_msgs__srv__GetModelProperties_Request.
typedef struct gazebo_msgs__srv__GetModelProperties_Request__Sequence
{
  gazebo_msgs__srv__GetModelProperties_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetModelProperties_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'parent_model_name'
// Member 'canonical_body_name'
// Member 'body_names'
// Member 'geom_names'
// Member 'joint_names'
// Member 'child_model_names'
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetModelProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetModelProperties_Response
{
  rosidl_runtime_c__String parent_model_name;
  rosidl_runtime_c__String canonical_body_name;
  rosidl_runtime_c__String__Sequence body_names;
  rosidl_runtime_c__String__Sequence geom_names;
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__String__Sequence child_model_names;
  bool is_static;
  bool success;
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__GetModelProperties_Response;

// Struct for a sequence of gazebo_msgs__srv__GetModelProperties_Response.
typedef struct gazebo_msgs__srv__GetModelProperties_Response__Sequence
{
  gazebo_msgs__srv__GetModelProperties_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetModelProperties_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__STRUCT_H_
