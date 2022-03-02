// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cartographer_ros_msgs:msg/TrajectoryOptions.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/trajectory_options__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cartographer_ros_msgs/msg/detail/trajectory_options__struct.h"
#include "cartographer_ros_msgs/msg/detail/trajectory_options__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // odom_frame, published_frame, tracking_frame, trajectory_builder_options_proto
#include "rosidl_runtime_c/string_functions.h"  // odom_frame, published_frame, tracking_frame, trajectory_builder_options_proto

// forward declare type support functions


using _TrajectoryOptions__ros_msg_type = cartographer_ros_msgs__msg__TrajectoryOptions;

static bool _TrajectoryOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryOptions__ros_msg_type * ros_message = static_cast<const _TrajectoryOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: tracking_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->tracking_frame;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: published_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->published_frame;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: odom_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->odom_frame;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: provide_odom_frame
  {
    cdr << (ros_message->provide_odom_frame ? true : false);
  }

  // Field name: use_odometry
  {
    cdr << (ros_message->use_odometry ? true : false);
  }

  // Field name: use_nav_sat
  {
    cdr << (ros_message->use_nav_sat ? true : false);
  }

  // Field name: use_landmarks
  {
    cdr << (ros_message->use_landmarks ? true : false);
  }

  // Field name: publish_frame_projected_to_2d
  {
    cdr << (ros_message->publish_frame_projected_to_2d ? true : false);
  }

  // Field name: num_laser_scans
  {
    cdr << ros_message->num_laser_scans;
  }

  // Field name: num_multi_echo_laser_scans
  {
    cdr << ros_message->num_multi_echo_laser_scans;
  }

  // Field name: num_subdivisions_per_laser_scan
  {
    cdr << ros_message->num_subdivisions_per_laser_scan;
  }

  // Field name: num_point_clouds
  {
    cdr << ros_message->num_point_clouds;
  }

  // Field name: rangefinder_sampling_ratio
  {
    cdr << ros_message->rangefinder_sampling_ratio;
  }

  // Field name: odometry_sampling_ratio
  {
    cdr << ros_message->odometry_sampling_ratio;
  }

  // Field name: fixed_frame_pose_sampling_ratio
  {
    cdr << ros_message->fixed_frame_pose_sampling_ratio;
  }

  // Field name: imu_sampling_ratio
  {
    cdr << ros_message->imu_sampling_ratio;
  }

  // Field name: landmarks_sampling_ratio
  {
    cdr << ros_message->landmarks_sampling_ratio;
  }

  // Field name: trajectory_builder_options_proto
  {
    const rosidl_runtime_c__String * str = &ros_message->trajectory_builder_options_proto;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _TrajectoryOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryOptions__ros_msg_type * ros_message = static_cast<_TrajectoryOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: tracking_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tracking_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->tracking_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tracking_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tracking_frame'\n");
      return false;
    }
  }

  // Field name: published_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->published_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->published_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->published_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'published_frame'\n");
      return false;
    }
  }

  // Field name: odom_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->odom_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->odom_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->odom_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'odom_frame'\n");
      return false;
    }
  }

  // Field name: provide_odom_frame
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->provide_odom_frame = tmp ? true : false;
  }

  // Field name: use_odometry
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_odometry = tmp ? true : false;
  }

  // Field name: use_nav_sat
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_nav_sat = tmp ? true : false;
  }

  // Field name: use_landmarks
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_landmarks = tmp ? true : false;
  }

  // Field name: publish_frame_projected_to_2d
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->publish_frame_projected_to_2d = tmp ? true : false;
  }

  // Field name: num_laser_scans
  {
    cdr >> ros_message->num_laser_scans;
  }

  // Field name: num_multi_echo_laser_scans
  {
    cdr >> ros_message->num_multi_echo_laser_scans;
  }

  // Field name: num_subdivisions_per_laser_scan
  {
    cdr >> ros_message->num_subdivisions_per_laser_scan;
  }

  // Field name: num_point_clouds
  {
    cdr >> ros_message->num_point_clouds;
  }

  // Field name: rangefinder_sampling_ratio
  {
    cdr >> ros_message->rangefinder_sampling_ratio;
  }

  // Field name: odometry_sampling_ratio
  {
    cdr >> ros_message->odometry_sampling_ratio;
  }

  // Field name: fixed_frame_pose_sampling_ratio
  {
    cdr >> ros_message->fixed_frame_pose_sampling_ratio;
  }

  // Field name: imu_sampling_ratio
  {
    cdr >> ros_message->imu_sampling_ratio;
  }

  // Field name: landmarks_sampling_ratio
  {
    cdr >> ros_message->landmarks_sampling_ratio;
  }

  // Field name: trajectory_builder_options_proto
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->trajectory_builder_options_proto.data) {
      rosidl_runtime_c__String__init(&ros_message->trajectory_builder_options_proto);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->trajectory_builder_options_proto,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'trajectory_builder_options_proto'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t get_serialized_size_cartographer_ros_msgs__msg__TrajectoryOptions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryOptions__ros_msg_type * ros_message = static_cast<const _TrajectoryOptions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tracking_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tracking_frame.size + 1);
  // field.name published_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->published_frame.size + 1);
  // field.name odom_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->odom_frame.size + 1);
  // field.name provide_odom_frame
  {
    size_t item_size = sizeof(ros_message->provide_odom_frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_odometry
  {
    size_t item_size = sizeof(ros_message->use_odometry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_nav_sat
  {
    size_t item_size = sizeof(ros_message->use_nav_sat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_landmarks
  {
    size_t item_size = sizeof(ros_message->use_landmarks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name publish_frame_projected_to_2d
  {
    size_t item_size = sizeof(ros_message->publish_frame_projected_to_2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_laser_scans
  {
    size_t item_size = sizeof(ros_message->num_laser_scans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_multi_echo_laser_scans
  {
    size_t item_size = sizeof(ros_message->num_multi_echo_laser_scans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_subdivisions_per_laser_scan
  {
    size_t item_size = sizeof(ros_message->num_subdivisions_per_laser_scan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_point_clouds
  {
    size_t item_size = sizeof(ros_message->num_point_clouds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rangefinder_sampling_ratio
  {
    size_t item_size = sizeof(ros_message->rangefinder_sampling_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odometry_sampling_ratio
  {
    size_t item_size = sizeof(ros_message->odometry_sampling_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fixed_frame_pose_sampling_ratio
  {
    size_t item_size = sizeof(ros_message->fixed_frame_pose_sampling_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_sampling_ratio
  {
    size_t item_size = sizeof(ros_message->imu_sampling_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name landmarks_sampling_ratio
  {
    size_t item_size = sizeof(ros_message->landmarks_sampling_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trajectory_builder_options_proto
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->trajectory_builder_options_proto.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryOptions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartographer_ros_msgs__msg__TrajectoryOptions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t max_serialized_size_cartographer_ros_msgs__msg__TrajectoryOptions(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: tracking_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: published_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: odom_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: provide_odom_frame
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: use_odometry
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: use_nav_sat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: use_landmarks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: publish_frame_projected_to_2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_laser_scans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_multi_echo_laser_scans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_subdivisions_per_laser_scan
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_point_clouds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rangefinder_sampling_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: odometry_sampling_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fixed_frame_pose_sampling_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu_sampling_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: landmarks_sampling_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: trajectory_builder_options_proto
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryOptions__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartographer_ros_msgs__msg__TrajectoryOptions(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryOptions = {
  "cartographer_ros_msgs::msg",
  "TrajectoryOptions",
  _TrajectoryOptions__cdr_serialize,
  _TrajectoryOptions__cdr_deserialize,
  _TrajectoryOptions__get_serialized_size,
  _TrajectoryOptions__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryOptions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryOptions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, TrajectoryOptions)() {
  return &_TrajectoryOptions__type_support;
}

#if defined(__cplusplus)
}
#endif
