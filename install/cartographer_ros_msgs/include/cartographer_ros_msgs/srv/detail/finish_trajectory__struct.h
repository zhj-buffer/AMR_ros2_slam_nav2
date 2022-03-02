// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:srv/FinishTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__FINISH_TRAJECTORY__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__FINISH_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/FinishTrajectory in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__srv__FinishTrajectory_Request
{
  int32_t trajectory_id;
} cartographer_ros_msgs__srv__FinishTrajectory_Request;

// Struct for a sequence of cartographer_ros_msgs__srv__FinishTrajectory_Request.
typedef struct cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence
{
  cartographer_ros_msgs__srv__FinishTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__struct.h"

// Struct defined in srv/FinishTrajectory in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__srv__FinishTrajectory_Response
{
  cartographer_ros_msgs__msg__StatusResponse status;
} cartographer_ros_msgs__srv__FinishTrajectory_Response;

// Struct for a sequence of cartographer_ros_msgs__srv__FinishTrajectory_Response.
typedef struct cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence
{
  cartographer_ros_msgs__srv__FinishTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__FINISH_TRAJECTORY__STRUCT_H_
