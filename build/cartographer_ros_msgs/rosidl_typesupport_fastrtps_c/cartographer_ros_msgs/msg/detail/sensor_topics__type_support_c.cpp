// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cartographer_ros_msgs:msg/SensorTopics.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/sensor_topics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cartographer_ros_msgs/msg/detail/sensor_topics__struct.h"
#include "cartographer_ros_msgs/msg/detail/sensor_topics__functions.h"
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

#include "rosidl_runtime_c/string.h"  // imu_topic, landmark_topic, laser_scan_topic, multi_echo_laser_scan_topic, nav_sat_fix_topic, odometry_topic, point_cloud2_topic
#include "rosidl_runtime_c/string_functions.h"  // imu_topic, landmark_topic, laser_scan_topic, multi_echo_laser_scan_topic, nav_sat_fix_topic, odometry_topic, point_cloud2_topic

// forward declare type support functions


using _SensorTopics__ros_msg_type = cartographer_ros_msgs__msg__SensorTopics;

static bool _SensorTopics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorTopics__ros_msg_type * ros_message = static_cast<const _SensorTopics__ros_msg_type *>(untyped_ros_message);
  // Field name: laser_scan_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->laser_scan_topic;
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

  // Field name: multi_echo_laser_scan_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->multi_echo_laser_scan_topic;
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

  // Field name: point_cloud2_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->point_cloud2_topic;
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

  // Field name: imu_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->imu_topic;
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

  // Field name: odometry_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->odometry_topic;
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

  // Field name: nav_sat_fix_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->nav_sat_fix_topic;
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

  // Field name: landmark_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->landmark_topic;
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

static bool _SensorTopics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorTopics__ros_msg_type * ros_message = static_cast<_SensorTopics__ros_msg_type *>(untyped_ros_message);
  // Field name: laser_scan_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->laser_scan_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->laser_scan_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->laser_scan_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'laser_scan_topic'\n");
      return false;
    }
  }

  // Field name: multi_echo_laser_scan_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->multi_echo_laser_scan_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->multi_echo_laser_scan_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->multi_echo_laser_scan_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'multi_echo_laser_scan_topic'\n");
      return false;
    }
  }

  // Field name: point_cloud2_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->point_cloud2_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->point_cloud2_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->point_cloud2_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'point_cloud2_topic'\n");
      return false;
    }
  }

  // Field name: imu_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->imu_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->imu_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->imu_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'imu_topic'\n");
      return false;
    }
  }

  // Field name: odometry_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->odometry_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->odometry_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->odometry_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'odometry_topic'\n");
      return false;
    }
  }

  // Field name: nav_sat_fix_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->nav_sat_fix_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->nav_sat_fix_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->nav_sat_fix_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'nav_sat_fix_topic'\n");
      return false;
    }
  }

  // Field name: landmark_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->landmark_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->landmark_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->landmark_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'landmark_topic'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t get_serialized_size_cartographer_ros_msgs__msg__SensorTopics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorTopics__ros_msg_type * ros_message = static_cast<const _SensorTopics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name laser_scan_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->laser_scan_topic.size + 1);
  // field.name multi_echo_laser_scan_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->multi_echo_laser_scan_topic.size + 1);
  // field.name point_cloud2_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->point_cloud2_topic.size + 1);
  // field.name imu_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->imu_topic.size + 1);
  // field.name odometry_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->odometry_topic.size + 1);
  // field.name nav_sat_fix_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->nav_sat_fix_topic.size + 1);
  // field.name landmark_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->landmark_topic.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SensorTopics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartographer_ros_msgs__msg__SensorTopics(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t max_serialized_size_cartographer_ros_msgs__msg__SensorTopics(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: laser_scan_topic
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: multi_echo_laser_scan_topic
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: point_cloud2_topic
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: imu_topic
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: odometry_topic
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: nav_sat_fix_topic
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: landmark_topic
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

static size_t _SensorTopics__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartographer_ros_msgs__msg__SensorTopics(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SensorTopics = {
  "cartographer_ros_msgs::msg",
  "SensorTopics",
  _SensorTopics__cdr_serialize,
  _SensorTopics__cdr_deserialize,
  _SensorTopics__get_serialized_size,
  _SensorTopics__max_serialized_size
};

static rosidl_message_type_support_t _SensorTopics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorTopics,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, SensorTopics)() {
  return &_SensorTopics__type_support;
}

#if defined(__cplusplus)
}
#endif
