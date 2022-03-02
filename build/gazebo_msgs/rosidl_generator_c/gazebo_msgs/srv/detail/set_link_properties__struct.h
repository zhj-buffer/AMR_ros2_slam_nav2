// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/SetLinkProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_LINK_PROPERTIES__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__SET_LINK_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_name'
#include "rosidl_runtime_c/string.h"
// Member 'com'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in srv/SetLinkProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetLinkProperties_Request
{
  rosidl_runtime_c__String link_name;
  geometry_msgs__msg__Pose com;
  bool gravity_mode;
  double mass;
  double ixx;
  double ixy;
  double ixz;
  double iyy;
  double iyz;
  double izz;
} gazebo_msgs__srv__SetLinkProperties_Request;

// Struct for a sequence of gazebo_msgs__srv__SetLinkProperties_Request.
typedef struct gazebo_msgs__srv__SetLinkProperties_Request__Sequence
{
  gazebo_msgs__srv__SetLinkProperties_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetLinkProperties_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/SetLinkProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetLinkProperties_Response
{
  bool success;
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__SetLinkProperties_Response;

// Struct for a sequence of gazebo_msgs__srv__SetLinkProperties_Response.
typedef struct gazebo_msgs__srv__SetLinkProperties_Response__Sequence
{
  gazebo_msgs__srv__SetLinkProperties_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetLinkProperties_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_LINK_PROPERTIES__STRUCT_H_
