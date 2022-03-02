// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_drive_package_msg:msg/BmsFlagFb.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/bms_flag_fb__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_drive_package_msg/msg/detail/bms_flag_fb__struct.hpp"

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
  const ros2_drive_package_msg::msg::BmsFlagFb & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bms_flag_fb_soc
  cdr << ros_message.bms_flag_fb_soc;
  // Member: bms_flag_fb_single_ov
  cdr << (ros_message.bms_flag_fb_single_ov ? true : false);
  // Member: bms_flag_fb_single_uv
  cdr << (ros_message.bms_flag_fb_single_uv ? true : false);
  // Member: bms_flag_fb_ov
  cdr << (ros_message.bms_flag_fb_ov ? true : false);
  // Member: bms_flag_fb_uv
  cdr << (ros_message.bms_flag_fb_uv ? true : false);
  // Member: bms_flag_fb_charge_ot
  cdr << (ros_message.bms_flag_fb_charge_ot ? true : false);
  // Member: bms_flag_fb_charge_ut
  cdr << (ros_message.bms_flag_fb_charge_ut ? true : false);
  // Member: bms_flag_fb_discharge_ot
  cdr << (ros_message.bms_flag_fb_discharge_ot ? true : false);
  // Member: bms_flag_fb_discharge_ut
  cdr << (ros_message.bms_flag_fb_discharge_ut ? true : false);
  // Member: bms_flag_fb_charge_oc
  cdr << (ros_message.bms_flag_fb_charge_oc ? true : false);
  // Member: bms_flag_fb_discharge_oc
  cdr << (ros_message.bms_flag_fb_discharge_oc ? true : false);
  // Member: bms_flag_fb_short
  cdr << (ros_message.bms_flag_fb_short ? true : false);
  // Member: bms_flag_fb_ic_error
  cdr << (ros_message.bms_flag_fb_ic_error ? true : false);
  // Member: bms_flag_fb_lock_mos
  cdr << (ros_message.bms_flag_fb_lock_mos ? true : false);
  // Member: bms_flag_fb_charge_flag
  cdr << (ros_message.bms_flag_fb_charge_flag ? true : false);
  // Member: bms_flag_fb_hight_temperature
  cdr << ros_message.bms_flag_fb_hight_temperature;
  // Member: bms_flag_fb_low_temperature
  cdr << ros_message.bms_flag_fb_low_temperature;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_drive_package_msg::msg::BmsFlagFb & ros_message)
{
  // Member: bms_flag_fb_soc
  cdr >> ros_message.bms_flag_fb_soc;

  // Member: bms_flag_fb_single_ov
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_single_ov = tmp ? true : false;
  }

  // Member: bms_flag_fb_single_uv
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_single_uv = tmp ? true : false;
  }

  // Member: bms_flag_fb_ov
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_ov = tmp ? true : false;
  }

  // Member: bms_flag_fb_uv
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_uv = tmp ? true : false;
  }

  // Member: bms_flag_fb_charge_ot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_charge_ot = tmp ? true : false;
  }

  // Member: bms_flag_fb_charge_ut
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_charge_ut = tmp ? true : false;
  }

  // Member: bms_flag_fb_discharge_ot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_discharge_ot = tmp ? true : false;
  }

  // Member: bms_flag_fb_discharge_ut
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_discharge_ut = tmp ? true : false;
  }

  // Member: bms_flag_fb_charge_oc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_charge_oc = tmp ? true : false;
  }

  // Member: bms_flag_fb_discharge_oc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_discharge_oc = tmp ? true : false;
  }

  // Member: bms_flag_fb_short
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_short = tmp ? true : false;
  }

  // Member: bms_flag_fb_ic_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_ic_error = tmp ? true : false;
  }

  // Member: bms_flag_fb_lock_mos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_lock_mos = tmp ? true : false;
  }

  // Member: bms_flag_fb_charge_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bms_flag_fb_charge_flag = tmp ? true : false;
  }

  // Member: bms_flag_fb_hight_temperature
  cdr >> ros_message.bms_flag_fb_hight_temperature;

  // Member: bms_flag_fb_low_temperature
  cdr >> ros_message.bms_flag_fb_low_temperature;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
get_serialized_size(
  const ros2_drive_package_msg::msg::BmsFlagFb & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bms_flag_fb_soc
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_soc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_single_ov
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_single_ov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_single_uv
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_single_uv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_ov
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_ov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_uv
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_uv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_charge_ot
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_charge_ot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_charge_ut
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_charge_ut);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_discharge_ot
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_discharge_ot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_discharge_ut
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_discharge_ut);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_charge_oc
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_charge_oc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_discharge_oc
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_discharge_oc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_short
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_short);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_ic_error
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_ic_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_lock_mos
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_lock_mos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_charge_flag
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_charge_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_hight_temperature
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_hight_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_flag_fb_low_temperature
  {
    size_t item_size = sizeof(ros_message.bms_flag_fb_low_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
max_serialized_size_BmsFlagFb(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: bms_flag_fb_soc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_single_ov
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_single_uv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_ov
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_uv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_charge_ot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_charge_ut
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_discharge_ot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_discharge_ut
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_charge_oc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_discharge_oc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_short
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_ic_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_lock_mos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_charge_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_flag_fb_hight_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bms_flag_fb_low_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BmsFlagFb__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_drive_package_msg::msg::BmsFlagFb *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BmsFlagFb__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_drive_package_msg::msg::BmsFlagFb *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BmsFlagFb__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_drive_package_msg::msg::BmsFlagFb *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BmsFlagFb__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BmsFlagFb(full_bounded, 0);
}

static message_type_support_callbacks_t _BmsFlagFb__callbacks = {
  "ros2_drive_package_msg::msg",
  "BmsFlagFb",
  _BmsFlagFb__cdr_serialize,
  _BmsFlagFb__cdr_deserialize,
  _BmsFlagFb__get_serialized_size,
  _BmsFlagFb__max_serialized_size
};

static rosidl_message_type_support_t _BmsFlagFb__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BmsFlagFb__callbacks,
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
get_message_type_support_handle<ros2_drive_package_msg::msg::BmsFlagFb>()
{
  return &ros2_drive_package_msg::msg::typesupport_fastrtps_cpp::_BmsFlagFb__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_drive_package_msg, msg, BmsFlagFb)() {
  return &ros2_drive_package_msg::msg::typesupport_fastrtps_cpp::_BmsFlagFb__handle;
}

#ifdef __cplusplus
}
#endif
