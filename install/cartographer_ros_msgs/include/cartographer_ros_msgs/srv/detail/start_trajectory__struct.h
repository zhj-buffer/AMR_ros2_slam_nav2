// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:srv/StartTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__START_TRAJECTORY__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__START_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'options'
#include "cartographer_ros_msgs/msg/detail/trajectory_options__struct.h"
// Member 'topics'
#include "cartographer_ros_msgs/msg/detail/sensor_topics__struct.h"

// Struct defined in srv/StartTrajectory in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__srv__StartTrajectory_Request
{
  cartographer_ros_msgs__msg__TrajectoryOptions options;
  cartographer_ros_msgs__msg__SensorTopics topics;
} cartographer_ros_msgs__srv__StartTrajectory_Request;

// Struct for a sequence of cartographer_ros_msgs__srv__StartTrajectory_Request.
typedef struct cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence
{
  cartographer_ros_msgs__srv__StartTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__struct.h"

// Struct defined in srv/StartTrajectory in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__srv__StartTrajectory_Response
{
  cartographer_ros_msgs__msg__StatusResponse status;
  int32_t trajectory_id;
} cartographer_ros_msgs__srv__StartTrajectory_Response;

// Struct for a sequence of cartographer_ros_msgs__srv__StartTrajectory_Response.
typedef struct cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence
{
  cartographer_ros_msgs__srv__StartTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__START_TRAJECTORY__STRUCT_H_
