// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_drive_package_msg:msg/LWheelFb.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/l_wheel_fb__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_drive_package_msg/msg/detail/l_wheel_fb__struct.hpp"

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

namespace ros2_drive_package_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
cdr_serialize(
  const ros2_drive_package_msg::msg::LWheelFb & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: l_wheel_fb_velocity
  cdr << ros_message.l_wheel_fb_velocity;
  // Member: l_wheel_fb_pulse
  cdr << ros_message.l_wheel_fb_pulse;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_drive_package_msg::msg::LWheelFb & ros_message)
{
  // Member: l_wheel_fb_velocity
  cdr >> ros_message.l_wheel_fb_velocity;

  // Member: l_wheel_fb_pulse
  cdr >> ros_message.l_wheel_fb_pulse;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
get_serialized_size(
  const ros2_drive_package_msg::msg::LWheelFb & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: l_wheel_fb_velocity
  {
    size_t item_size = sizeof(ros_message.l_wheel_fb_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l_wheel_fb_pulse
  {
    size_t item_size = sizeof(ros_message.l_wheel_fb_pulse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
max_serialized_size_LWheelFb(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: l_wheel_fb_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: l_wheel_fb_pulse
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _LWheelFb__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_drive_package_msg::msg::LWheelFb *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LWheelFb__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_drive_package_msg::msg::LWheelFb *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LWheelFb__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_drive_package_msg::msg::LWheelFb *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LWheelFb__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LWheelFb(full_bounded, 0);
}

static message_type_support_callbacks_t _LWheelFb__callbacks = {
  "ros2_drive_package_msg::msg",
  "LWheelFb",
  _LWheelFb__cdr_serialize,
  _LWheelFb__cdr_deserialize,
  _LWheelFb__get_serialized_size,
  _LWheelFb__max_serialized_size
};

static rosidl_message_type_support_t _LWheelFb__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LWheelFb__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2_drive_package_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_drive_package_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_drive_package_msg::msg::LWheelFb>()
{
  return &ros2_drive_package_msg::msg::typesupport_fastrtps_cpp::_LWheelFb__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_drive_package_msg, msg, LWheelFb)() {
  return &ros2_drive_package_msg::msg::typesupport_fastrtps_cpp::_LWheelFb__handle;
}

#ifdef __cplusplus
}
#endif
