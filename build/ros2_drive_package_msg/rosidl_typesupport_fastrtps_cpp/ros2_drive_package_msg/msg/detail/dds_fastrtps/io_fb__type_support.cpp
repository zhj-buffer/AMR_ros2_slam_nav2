// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_drive_package_msg:msg/IoFb.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/io_fb__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_drive_package_msg/msg/detail/io_fb__struct.hpp"

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
  const ros2_drive_package_msg::msg::IoFb & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: io_fb_lamp_ctrl
  cdr << (ros_message.io_fb_lamp_ctrl ? true : false);
  // Member: io_fb_unlock
  cdr << (ros_message.io_fb_unlock ? true : false);
  // Member: io_fb_lower_beam_headlamp
  cdr << (ros_message.io_fb_lower_beam_headlamp ? true : false);
  // Member: io_fb_upper_beam_headlamp
  cdr << (ros_message.io_fb_upper_beam_headlamp ? true : false);
  // Member: io_fb_turn_lamp
  cdr << ros_message.io_fb_turn_lamp;
  // Member: io_fb_braking_lamp
  cdr << (ros_message.io_fb_braking_lamp ? true : false);
  // Member: io_fb_clearance_lamp
  cdr << (ros_message.io_fb_clearance_lamp ? true : false);
  // Member: io_fb_fog_lamp
  cdr << (ros_message.io_fb_fog_lamp ? true : false);
  // Member: io_fb_speaker
  cdr << (ros_message.io_fb_speaker ? true : false);
  // Member: io_fb_fl_impact_sensor
  cdr << (ros_message.io_fb_fl_impact_sensor ? true : false);
  // Member: io_fb_fm_impact_sensor
  cdr << (ros_message.io_fb_fm_impact_sensor ? true : false);
  // Member: io_fb_fr_impact_sensor
  cdr << (ros_message.io_fb_fr_impact_sensor ? true : false);
  // Member: io_fb_rl_impact_sensor
  cdr << (ros_message.io_fb_rl_impact_sensor ? true : false);
  // Member: io_fb_rm_impact_sensor
  cdr << (ros_message.io_fb_rm_impact_sensor ? true : false);
  // Member: io_fb_rr_impact_sensor
  cdr << (ros_message.io_fb_rr_impact_sensor ? true : false);
  // Member: io_fb_fl_drop_sensor
  cdr << (ros_message.io_fb_fl_drop_sensor ? true : false);
  // Member: io_fb_fm_drop_sensor
  cdr << (ros_message.io_fb_fm_drop_sensor ? true : false);
  // Member: io_fb_fr_drop_sensor
  cdr << (ros_message.io_fb_fr_drop_sensor ? true : false);
  // Member: io_fb_rl_drop_sensor
  cdr << (ros_message.io_fb_rl_drop_sensor ? true : false);
  // Member: io_fb_rm_drop_sensor
  cdr << (ros_message.io_fb_rm_drop_sensor ? true : false);
  // Member: io_fb_rr_drop_sensor
  cdr << (ros_message.io_fb_rr_drop_sensor ? true : false);
  // Member: io_fb_estop
  cdr << (ros_message.io_fb_estop ? true : false);
  // Member: io_fb_joypad_ctrl
  cdr << (ros_message.io_fb_joypad_ctrl ? true : false);
  // Member: io_fb_charge_state
  cdr << (ros_message.io_fb_charge_state ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_drive_package_msg::msg::IoFb & ros_message)
{
  // Member: io_fb_lamp_ctrl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_lamp_ctrl = tmp ? true : false;
  }

  // Member: io_fb_unlock
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_unlock = tmp ? true : false;
  }

  // Member: io_fb_lower_beam_headlamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_lower_beam_headlamp = tmp ? true : false;
  }

  // Member: io_fb_upper_beam_headlamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_upper_beam_headlamp = tmp ? true : false;
  }

  // Member: io_fb_turn_lamp
  cdr >> ros_message.io_fb_turn_lamp;

  // Member: io_fb_braking_lamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_braking_lamp = tmp ? true : false;
  }

  // Member: io_fb_clearance_lamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_clearance_lamp = tmp ? true : false;
  }

  // Member: io_fb_fog_lamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_fog_lamp = tmp ? true : false;
  }

  // Member: io_fb_speaker
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_speaker = tmp ? true : false;
  }

  // Member: io_fb_fl_impact_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_fl_impact_sensor = tmp ? true : false;
  }

  // Member: io_fb_fm_impact_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_fm_impact_sensor = tmp ? true : false;
  }

  // Member: io_fb_fr_impact_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_fr_impact_sensor = tmp ? true : false;
  }

  // Member: io_fb_rl_impact_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_rl_impact_sensor = tmp ? true : false;
  }

  // Member: io_fb_rm_impact_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_rm_impact_sensor = tmp ? true : false;
  }

  // Member: io_fb_rr_impact_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_rr_impact_sensor = tmp ? true : false;
  }

  // Member: io_fb_fl_drop_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_fl_drop_sensor = tmp ? true : false;
  }

  // Member: io_fb_fm_drop_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_fm_drop_sensor = tmp ? true : false;
  }

  // Member: io_fb_fr_drop_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_fr_drop_sensor = tmp ? true : false;
  }

  // Member: io_fb_rl_drop_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_rl_drop_sensor = tmp ? true : false;
  }

  // Member: io_fb_rm_drop_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_rm_drop_sensor = tmp ? true : false;
  }

  // Member: io_fb_rr_drop_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_rr_drop_sensor = tmp ? true : false;
  }

  // Member: io_fb_estop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_estop = tmp ? true : false;
  }

  // Member: io_fb_joypad_ctrl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_joypad_ctrl = tmp ? true : false;
  }

  // Member: io_fb_charge_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_fb_charge_state = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
get_serialized_size(
  const ros2_drive_package_msg::msg::IoFb & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: io_fb_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message.io_fb_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_unlock
  {
    size_t item_size = sizeof(ros_message.io_fb_unlock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_lower_beam_headlamp
  {
    size_t item_size = sizeof(ros_message.io_fb_lower_beam_headlamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_upper_beam_headlamp
  {
    size_t item_size = sizeof(ros_message.io_fb_upper_beam_headlamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_turn_lamp
  {
    size_t item_size = sizeof(ros_message.io_fb_turn_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_braking_lamp
  {
    size_t item_size = sizeof(ros_message.io_fb_braking_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_clearance_lamp
  {
    size_t item_size = sizeof(ros_message.io_fb_clearance_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_fog_lamp
  {
    size_t item_size = sizeof(ros_message.io_fb_fog_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_speaker
  {
    size_t item_size = sizeof(ros_message.io_fb_speaker);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_fl_impact_sensor
  {
    size_t item_size = sizeof(ros_message.io_fb_fl_impact_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_fm_impact_sensor
  {
    size_t item_size = sizeof(ros_message.io_fb_fm_impact_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_fr_impact_sensor
  {
    size_t item_size = sizeof(ros_message.io_fb_fr_impact_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_rl_impact_sensor
  {
    size_t item_size = sizeof(ros_message.io_fb_rl_impact_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_rm_impact_sensor
  {
    size_t item_size = sizeof(ros_message.io_fb_rm_impact_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_rr_impact_sensor
  {
    size_t item_size = sizeof(ros_message.io_fb_rr_impact_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_fl_drop_sensor
  {
    size_t item_size = sizeof(ros_message.io_fb_fl_drop_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_fm_drop_sensor
  {
    size_t item_size = sizeof(ros_message.io_fb_fm_drop_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_fr_drop_sensor
  {
    size_t item_size = sizeof(ros_message.io_fb_fr_drop_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_rl_drop_sensor
  {
    size_t item_size = sizeof(ros_message.io_fb_rl_drop_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_rm_drop_sensor
  {
    size_t item_size = sizeof(ros_message.io_fb_rm_drop_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_rr_drop_sensor
  {
    size_t item_size = sizeof(ros_message.io_fb_rr_drop_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_estop
  {
    size_t item_size = sizeof(ros_message.io_fb_estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_joypad_ctrl
  {
    size_t item_size = sizeof(ros_message.io_fb_joypad_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_fb_charge_state
  {
    size_t item_size = sizeof(ros_message.io_fb_charge_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
max_serialized_size_IoFb(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: io_fb_lamp_ctrl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_unlock
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_lower_beam_headlamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_upper_beam_headlamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_turn_lamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_braking_lamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_clearance_lamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_fog_lamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_speaker
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_fl_impact_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_fm_impact_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_fr_impact_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_rl_impact_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_rm_impact_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_rr_impact_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_fl_drop_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_fm_drop_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_fr_drop_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_rl_drop_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_rm_drop_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_rr_drop_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_estop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_joypad_ctrl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_fb_charge_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _IoFb__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_drive_package_msg::msg::IoFb *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IoFb__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_drive_package_msg::msg::IoFb *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IoFb__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_drive_package_msg::msg::IoFb *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IoFb__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_IoFb(full_bounded, 0);
}

static message_type_support_callbacks_t _IoFb__callbacks = {
  "ros2_drive_package_msg::msg",
  "IoFb",
  _IoFb__cdr_serialize,
  _IoFb__cdr_deserialize,
  _IoFb__get_serialized_size,
  _IoFb__max_serialized_size
};

static rosidl_message_type_support_t _IoFb__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IoFb__callbacks,
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
get_message_type_support_handle<ros2_drive_package_msg::msg::IoFb>()
{
  return &ros2_drive_package_msg::msg::typesupport_fastrtps_cpp::_IoFb__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_drive_package_msg, msg, IoFb)() {
  return &ros2_drive_package_msg::msg::typesupport_fastrtps_cpp::_IoFb__handle;
}

#ifdef __cplusplus
}
#endif
