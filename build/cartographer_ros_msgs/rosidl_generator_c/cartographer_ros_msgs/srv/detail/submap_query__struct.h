// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:srv/SubmapQuery.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SubmapQuery in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__srv__SubmapQuery_Request
{
  int32_t trajectory_id;
  int32_t submap_index;
} cartographer_ros_msgs__srv__SubmapQuery_Request;

// Struct for a sequence of cartographer_ros_msgs__srv__SubmapQuery_Request.
typedef struct cartographer_ros_msgs__srv__SubmapQuery_Request__Sequence
{
  cartographer_ros_msgs__srv__SubmapQuery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__SubmapQuery_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__struct.h"
// Member 'textures'
#include "cartographer_ros_msgs/msg/detail/submap_texture__struct.h"

// Struct defined in srv/SubmapQuery in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__srv__SubmapQuery_Response
{
  cartographer_ros_msgs__msg__StatusResponse status;
  int32_t submap_version;
  cartographer_ros_msgs__msg__SubmapTexture__Sequence textures;
} cartographer_ros_msgs__srv__SubmapQuery_Response;

// Struct for a sequence of cartographer_ros_msgs__srv__SubmapQuery_Response.
typedef struct cartographer_ros_msgs__srv__SubmapQuery_Response__Sequence
{
  cartographer_ros_msgs__srv__SubmapQuery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__SubmapQuery_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__STRUCT_H_
