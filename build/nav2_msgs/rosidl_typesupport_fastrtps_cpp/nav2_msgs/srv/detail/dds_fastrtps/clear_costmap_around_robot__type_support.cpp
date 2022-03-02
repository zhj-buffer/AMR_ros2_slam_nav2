// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nav2_msgs:srv/ClearCostmapAroundRobot.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/srv/detail/clear_costmap_around_robot__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nav2_msgs/srv/detail/clear_costmap_around_robot__struct.hpp"

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

namespace nav2_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
cdr_serialize(
  const nav2_msgs::srv::ClearCostmapAroundRobot_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: window_size_x
  cdr << ros_message.window_size_x;
  // Member: window_size_y
  cdr << ros_message.window_size_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nav2_msgs::srv::ClearCostmapAroundRobot_Request & ros_message)
{
  // Member: window_size_x
  cdr >> ros_message.window_size_x;

  // Member: window_size_y
  cdr >> ros_message.window_size_y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
get_serialized_size(
  const nav2_msgs::srv::ClearCostmapAroundRobot_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: window_size_x
  {
    size_t item_size = sizeof(ros_message.window_size_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: window_size_y
  {
    size_t item_size = sizeof(ros_message.window_size_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
max_serialized_size_ClearCostmapAroundRobot_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: window_size_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: window_size_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ClearCostmapAroundRobot_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nav2_msgs::srv::ClearCostmapAroundRobot_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ClearCostmapAroundRobot_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nav2_msgs::srv::ClearCostmapAroundRobot_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ClearCostmapAroundRobot_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nav2_msgs::srv::ClearCostmapAroundRobot_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ClearCostmapAroundRobot_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ClearCostmapAroundRobot_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ClearCostmapAroundRobot_Request__callbacks = {
  "nav2_msgs::srv",
  "ClearCostmapAroundRobot_Request",
  _ClearCostmapAroundRobot_Request__cdr_serialize,
  _ClearCostmapAroundRobot_Request__cdr_deserialize,
  _ClearCostmapAroundRobot_Request__get_serialized_size,
  _ClearCostmapAroundRobot_Request__max_serialized_size
};

static rosidl_message_type_support_t _ClearCostmapAroundRobot_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ClearCostmapAroundRobot_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::srv::ClearCostmapAroundRobot_Request>()
{
  return &nav2_msgs::srv::typesupport_fastrtps_cpp::_ClearCostmapAroundRobot_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, ClearCostmapAroundRobot_Request)() {
  return &nav2_msgs::srv::typesupport_fastrtps_cpp::_ClearCostmapAroundRobot_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Empty &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Empty &);
size_t get_serialized_size(
  const std_msgs::msg::Empty &,
  size_t current_alignment);
size_t
max_serialized_size_Empty(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace nav2_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
cdr_serialize(
  const nav2_msgs::srv::ClearCostmapAroundRobot_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: response
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.response,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nav2_msgs::srv::ClearCostmapAroundRobot_Response & ros_message)
{
  // Member: response
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.response);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
get_serialized_size(
  const nav2_msgs::srv::ClearCostmapAroundRobot_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: response

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.response, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
max_serialized_size_ClearCostmapAroundRobot_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: response
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Empty(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ClearCostmapAroundRobot_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nav2_msgs::srv::ClearCostmapAroundRobot_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ClearCostmapAroundRobot_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nav2_msgs::srv::ClearCostmapAroundRobot_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ClearCostmapAroundRobot_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nav2_msgs::srv::ClearCostmapAroundRobot_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ClearCostmapAroundRobot_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ClearCostmapAroundRobot_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ClearCostmapAroundRobot_Response__callbacks = {
  "nav2_msgs::srv",
  "ClearCostmapAroundRobot_Response",
  _ClearCostmapAroundRobot_Response__cdr_serialize,
  _ClearCostmapAroundRobot_Response__cdr_deserialize,
  _ClearCostmapAroundRobot_Response__get_serialized_size,
  _ClearCostmapAroundRobot_Response__max_serialized_size
};

static rosidl_message_type_support_t _ClearCostmapAroundRobot_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ClearCostmapAroundRobot_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::srv::ClearCostmapAroundRobot_Response>()
{
  return &nav2_msgs::srv::typesupport_fastrtps_cpp::_ClearCostmapAroundRobot_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, ClearCostmapAroundRobot_Response)() {
  return &nav2_msgs::srv::typesupport_fastrtps_cpp::_ClearCostmapAroundRobot_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace nav2_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ClearCostmapAroundRobot__callbacks = {
  "nav2_msgs::srv",
  "ClearCostmapAroundRobot",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, ClearCostmapAroundRobot_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, ClearCostmapAroundRobot_Response)(),
};

static rosidl_service_type_support_t _ClearCostmapAroundRobot__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ClearCostmapAroundRobot__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<nav2_msgs::srv::ClearCostmapAroundRobot>()
{
  return &nav2_msgs::srv::typesupport_fastrtps_cpp::_ClearCostmapAroundRobot__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, ClearCostmapAroundRobot)() {
  return &nav2_msgs::srv::typesupport_fastrtps_cpp::_ClearCostmapAroundRobot__handle;
}

#ifdef __cplusplus
}
#endif
