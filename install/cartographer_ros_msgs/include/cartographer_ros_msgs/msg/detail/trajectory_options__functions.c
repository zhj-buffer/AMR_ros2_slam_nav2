// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/TrajectoryOptions.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/trajectory_options__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `tracking_frame`
// Member `published_frame`
// Member `odom_frame`
// Member `trajectory_builder_options_proto`
#include "rosidl_runtime_c/string_functions.h"

bool
cartographer_ros_msgs__msg__TrajectoryOptions__init(cartographer_ros_msgs__msg__TrajectoryOptions * msg)
{
  if (!msg) {
    return false;
  }
  // tracking_frame
  if (!rosidl_runtime_c__String__init(&msg->tracking_frame)) {
    cartographer_ros_msgs__msg__TrajectoryOptions__fini(msg);
    return false;
  }
  // published_frame
  if (!rosidl_runtime_c__String__init(&msg->published_frame)) {
    cartographer_ros_msgs__msg__TrajectoryOptions__fini(msg);
    return false;
  }
  // odom_frame
  if (!rosidl_runtime_c__String__init(&msg->odom_frame)) {
    cartographer_ros_msgs__msg__TrajectoryOptions__fini(msg);
    return false;
  }
  // provide_odom_frame
  // use_odometry
  // use_nav_sat
  // use_landmarks
  // publish_frame_projected_to_2d
  // num_laser_scans
  // num_multi_echo_laser_scans
  // num_subdivisions_per_laser_scan
  // num_point_clouds
  // rangefinder_sampling_ratio
  // odometry_sampling_ratio
  // fixed_frame_pose_sampling_ratio
  // imu_sampling_ratio
  // landmarks_sampling_ratio
  // trajectory_builder_options_proto
  if (!rosidl_runtime_c__String__init(&msg->trajectory_builder_options_proto)) {
    cartographer_ros_msgs__msg__TrajectoryOptions__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__msg__TrajectoryOptions__fini(cartographer_ros_msgs__msg__TrajectoryOptions * msg)
{
  if (!msg) {
    return;
  }
  // tracking_frame
  rosidl_runtime_c__String__fini(&msg->tracking_frame);
  // published_frame
  rosidl_runtime_c__String__fini(&msg->published_frame);
  // odom_frame
  rosidl_runtime_c__String__fini(&msg->odom_frame);
  // provide_odom_frame
  // use_odometry
  // use_nav_sat
  // use_landmarks
  // publish_frame_projected_to_2d
  // num_laser_scans
  // num_multi_echo_laser_scans
  // num_subdivisions_per_laser_scan
  // num_point_clouds
  // rangefinder_sampling_ratio
  // odometry_sampling_ratio
  // fixed_frame_pose_sampling_ratio
  // imu_sampling_ratio
  // landmarks_sampling_ratio
  // trajectory_builder_options_proto
  rosidl_runtime_c__String__fini(&msg->trajectory_builder_options_proto);
}

cartographer_ros_msgs__msg__TrajectoryOptions *
cartographer_ros_msgs__msg__TrajectoryOptions__create()
{
  cartographer_ros_msgs__msg__TrajectoryOptions * msg = (cartographer_ros_msgs__msg__TrajectoryOptions *)malloc(sizeof(cartographer_ros_msgs__msg__TrajectoryOptions));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__TrajectoryOptions));
  bool success = cartographer_ros_msgs__msg__TrajectoryOptions__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__TrajectoryOptions__destroy(cartographer_ros_msgs__msg__TrajectoryOptions * msg)
{
  if (msg) {
    cartographer_ros_msgs__msg__TrajectoryOptions__fini(msg);
  }
  free(msg);
}


bool
cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__init(cartographer_ros_msgs__msg__TrajectoryOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartographer_ros_msgs__msg__TrajectoryOptions * data = NULL;
  if (size) {
    data = (cartographer_ros_msgs__msg__TrajectoryOptions *)calloc(size, sizeof(cartographer_ros_msgs__msg__TrajectoryOptions));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__TrajectoryOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__TrajectoryOptions__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__fini(cartographer_ros_msgs__msg__TrajectoryOptions__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartographer_ros_msgs__msg__TrajectoryOptions__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__TrajectoryOptions__Sequence *
cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__create(size_t size)
{
  cartographer_ros_msgs__msg__TrajectoryOptions__Sequence * array = (cartographer_ros_msgs__msg__TrajectoryOptions__Sequence *)malloc(sizeof(cartographer_ros_msgs__msg__TrajectoryOptions__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__destroy(cartographer_ros_msgs__msg__TrajectoryOptions__Sequence * array)
{
  if (array) {
    cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__fini(array);
  }
  free(array);
}
