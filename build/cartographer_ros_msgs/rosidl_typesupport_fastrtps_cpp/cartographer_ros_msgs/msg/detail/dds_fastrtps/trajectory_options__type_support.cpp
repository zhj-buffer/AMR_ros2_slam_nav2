// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cartographer_ros_msgs:msg/TrajectoryOptions.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/trajectory_options__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cartographer_ros_msgs/msg/detail/trajectory_options__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace cartographer_ros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
cdr_serialize(
  const cartographer_ros_msgs::msg::TrajectoryOptions & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tracking_frame
  cdr << ros_message.tracking_frame;
  // Member: published_frame
  cdr << ros_message.published_frame;
  // Member: odom_frame
  cdr << ros_message.odom_frame;
  // Member: provide_odom_frame
  cdr << (ros_message.provide_odom_frame ? true : false);
  // Member: use_odometry
  cdr << (ros_message.use_odometry ? true : false);
  // Member: use_nav_sat
  cdr << (ros_message.use_nav_sat ? true : false);
  // Member: use_landmarks
  cdr << (ros_message.use_landmarks ? true : false);
  // Member: publish_frame_projected_to_2d
  cdr << (ros_message.publish_frame_projected_to_2d ? true : false);
  // Member: num_laser_scans
  cdr << ros_message.num_laser_scans;
  // Member: num_multi_echo_laser_scans
  cdr << ros_message.num_multi_echo_laser_scans;
  // Member: num_subdivisions_per_laser_scan
  cdr << ros_message.num_subdivisions_per_laser_scan;
  // Member: num_point_clouds
  cdr << ros_message.num_point_clouds;
  // Member: rangefinder_sampling_ratio
  cdr << ros_message.rangefinder_sampling_ratio;
  // Member: odometry_sampling_ratio
  cdr << ros_message.odometry_sampling_ratio;
  // Member: fixed_frame_pose_sampling_ratio
  cdr << ros_message.fixed_frame_pose_sampling_ratio;
  // Member: imu_sampling_ratio
  cdr << ros_message.imu_sampling_ratio;
  // Member: landmarks_sampling_ratio
  cdr << ros_message.landmarks_sampling_ratio;
  // Member: trajectory_builder_options_proto
  cdr << ros_message.trajectory_builder_options_proto;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartographer_ros_msgs::msg::TrajectoryOptions & ros_message)
{
  // Member: tracking_frame
  cdr >> ros_message.tracking_frame;

  // Member: published_frame
  cdr >> ros_message.published_frame;

  // Member: odom_frame
  cdr >> ros_message.odom_frame;

  // Member: provide_odom_frame
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.provide_odom_frame = tmp ? true : false;
  }

  // Member: use_odometry
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_odometry = tmp ? true : false;
  }

  // Member: use_nav_sat
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_nav_sat = tmp ? true : false;
  }

  // Member: use_landmarks
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_landmarks = tmp ? true : false;
  }

  // Member: publish_frame_projected_to_2d
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.publish_frame_projected_to_2d = tmp ? true : false;
  }

  // Member: num_laser_scans
  cdr >> ros_message.num_laser_scans;

  // Member: num_multi_echo_laser_scans
  cdr >> ros_message.num_multi_echo_laser_scans;

  // Member: num_subdivisions_per_laser_scan
  cdr >> ros_message.num_subdivisions_per_laser_scan;

  // Member: num_point_clouds
  cdr >> ros_message.num_point_clouds;

  // Member: rangefinder_sampling_ratio
  cdr >> ros_message.rangefinder_sampling_ratio;

  // Member: odometry_sampling_ratio
  cdr >> ros_message.odometry_sampling_ratio;

  // Member: fixed_frame_pose_sampling_ratio
  cdr >> ros_message.fixed_frame_pose_sampling_ratio;

  // Member: imu_sampling_ratio
  cdr >> ros_message.imu_sampling_ratio;

  // Member: landmarks_sampling_ratio
  cdr >> ros_message.landmarks_sampling_ratio;

  // Member: trajectory_builder_options_proto
  cdr >> ros_message.trajectory_builder_options_proto;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
get_serialized_size(
  const cartographer_ros_msgs::msg::TrajectoryOptions & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tracking_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.tracking_frame.size() + 1);
  // Member: published_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.published_frame.size() + 1);
  // Member: odom_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.odom_frame.size() + 1);
  // Member: provide_odom_frame
  {
    size_t item_size = sizeof(ros_message.provide_odom_frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_odometry
  {
    size_t item_size = sizeof(ros_message.use_odometry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_nav_sat
  {
    size_t item_size = sizeof(ros_message.use_nav_sat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_landmarks
  {
    size_t item_size = sizeof(ros_message.use_landmarks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: publish_frame_projected_to_2d
  {
    size_t item_size = sizeof(ros_message.publish_frame_projected_to_2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_laser_scans
  {
    size_t item_size = sizeof(ros_message.num_laser_scans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_multi_echo_laser_scans
  {
    size_t item_size = sizeof(ros_message.num_multi_echo_laser_scans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_subdivisions_per_laser_scan
  {
    size_t item_size = sizeof(ros_message.num_subdivisions_per_laser_scan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_point_clouds
  {
    size_t item_size = sizeof(ros_message.num_point_clouds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rangefinder_sampling_ratio
  {
    size_t item_size = sizeof(ros_message.rangefinder_sampling_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: odometry_sampling_ratio
  {
    size_t item_size = sizeof(ros_message.odometry_sampling_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fixed_frame_pose_sampling_ratio
  {
    size_t item_size = sizeof(ros_message.fixed_frame_pose_sampling_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_sampling_ratio
  {
    size_t item_size = sizeof(ros_message.imu_sampling_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: landmarks_sampling_ratio
  {
    size_t item_size = sizeof(ros_message.landmarks_sampling_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trajectory_builder_options_proto
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.trajectory_builder_options_proto.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
max_serialized_size_TrajectoryOptions(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: tracking_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: published_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: odom_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: provide_odom_frame
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: use_odometry
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: use_nav_sat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: use_landmarks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: publish_frame_projected_to_2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_laser_scans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_multi_echo_laser_scans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_subdivisions_per_laser_scan
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_point_clouds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rangefinder_sampling_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: odometry_sampling_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: fixed_frame_pose_sampling_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: imu_sampling_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: landmarks_sampling_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: trajectory_builder_options_proto
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

static bool _TrajectoryOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartographer_ros_msgs::msg::TrajectoryOptions *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrajectoryOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartographer_ros_msgs::msg::TrajectoryOptions *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrajectoryOptions__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartographer_ros_msgs::msg::TrajectoryOptions *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrajectoryOptions__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrajectoryOptions(full_bounded, 0);
}

static message_type_support_callbacks_t _TrajectoryOptions__callbacks = {
  "cartographer_ros_msgs::msg",
  "TrajectoryOptions",
  _TrajectoryOptions__cdr_serialize,
  _TrajectoryOptions__cdr_deserialize,
  _TrajectoryOptions__get_serialized_size,
  _TrajectoryOptions__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryOptions__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrajectoryOptions__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cartographer_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartographer_ros_msgs::msg::TrajectoryOptions>()
{
  return &cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::_TrajectoryOptions__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartographer_ros_msgs, msg, TrajectoryOptions)() {
  return &cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::_TrajectoryOptions__handle;
}

#ifdef __cplusplus
}
#endif
