// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dwb_msgs:srv/DebugLocalPlan.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/srv/detail/debug_local_plan__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dwb_msgs/srv/detail/debug_local_plan__struct.hpp"

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
namespace nav_2d_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nav_2d_msgs::msg::Pose2DStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nav_2d_msgs::msg::Pose2DStamped &);
size_t get_serialized_size(
  const nav_2d_msgs::msg::Pose2DStamped &,
  size_t current_alignment);
size_t
max_serialized_size_Pose2DStamped(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nav_2d_msgs

namespace nav_2d_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nav_2d_msgs::msg::Twist2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nav_2d_msgs::msg::Twist2D &);
size_t get_serialized_size(
  const nav_2d_msgs::msg::Twist2D &,
  size_t current_alignment);
size_t
max_serialized_size_Twist2D(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nav_2d_msgs

namespace nav_2d_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nav_2d_msgs::msg::Path2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nav_2d_msgs::msg::Path2D &);
size_t get_serialized_size(
  const nav_2d_msgs::msg::Path2D &,
  size_t current_alignment);
size_t
max_serialized_size_Path2D(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nav_2d_msgs


namespace dwb_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
cdr_serialize(
  const dwb_msgs::srv::DebugLocalPlan_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pose
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pose,
    cdr);
  // Member: velocity
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.velocity,
    cdr);
  // Member: global_plan
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.global_plan,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs::srv::DebugLocalPlan_Request & ros_message)
{
  // Member: pose
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pose);

  // Member: velocity
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.velocity);

  // Member: global_plan
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.global_plan);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
get_serialized_size(
  const dwb_msgs::srv::DebugLocalPlan_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pose

  current_alignment +=
    nav_2d_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pose, current_alignment);
  // Member: velocity

  current_alignment +=
    nav_2d_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.velocity, current_alignment);
  // Member: global_plan

  current_alignment +=
    nav_2d_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.global_plan, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
max_serialized_size_DebugLocalPlan_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nav_2d_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose2DStamped(
        full_bounded, current_alignment);
    }
  }

  // Member: velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nav_2d_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Twist2D(
        full_bounded, current_alignment);
    }
  }

  // Member: global_plan
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nav_2d_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Path2D(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _DebugLocalPlan_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dwb_msgs::srv::DebugLocalPlan_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DebugLocalPlan_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dwb_msgs::srv::DebugLocalPlan_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DebugLocalPlan_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dwb_msgs::srv::DebugLocalPlan_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DebugLocalPlan_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DebugLocalPlan_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _DebugLocalPlan_Request__callbacks = {
  "dwb_msgs::srv",
  "DebugLocalPlan_Request",
  _DebugLocalPlan_Request__cdr_serialize,
  _DebugLocalPlan_Request__cdr_deserialize,
  _DebugLocalPlan_Request__get_serialized_size,
  _DebugLocalPlan_Request__max_serialized_size
};

static rosidl_message_type_support_t _DebugLocalPlan_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DebugLocalPlan_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dwb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<dwb_msgs::srv::DebugLocalPlan_Request>()
{
  return &dwb_msgs::srv::typesupport_fastrtps_cpp::_DebugLocalPlan_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, DebugLocalPlan_Request)() {
  return &dwb_msgs::srv::typesupport_fastrtps_cpp::_DebugLocalPlan_Request__handle;
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
namespace dwb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const dwb_msgs::msg::LocalPlanEvaluation &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dwb_msgs::msg::LocalPlanEvaluation &);
size_t get_serialized_size(
  const dwb_msgs::msg::LocalPlanEvaluation &,
  size_t current_alignment);
size_t
max_serialized_size_LocalPlanEvaluation(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
cdr_serialize(
  const dwb_msgs::srv::DebugLocalPlan_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: results
  dwb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.results,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs::srv::DebugLocalPlan_Response & ros_message)
{
  // Member: results
  dwb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.results);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
get_serialized_size(
  const dwb_msgs::srv::DebugLocalPlan_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: results

  current_alignment +=
    dwb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.results, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
max_serialized_size_DebugLocalPlan_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: results
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        dwb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LocalPlanEvaluation(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _DebugLocalPlan_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dwb_msgs::srv::DebugLocalPlan_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DebugLocalPlan_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dwb_msgs::srv::DebugLocalPlan_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DebugLocalPlan_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dwb_msgs::srv::DebugLocalPlan_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DebugLocalPlan_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DebugLocalPlan_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _DebugLocalPlan_Response__callbacks = {
  "dwb_msgs::srv",
  "DebugLocalPlan_Response",
  _DebugLocalPlan_Response__cdr_serialize,
  _DebugLocalPlan_Response__cdr_deserialize,
  _DebugLocalPlan_Response__get_serialized_size,
  _DebugLocalPlan_Response__max_serialized_size
};

static rosidl_message_type_support_t _DebugLocalPlan_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DebugLocalPlan_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dwb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<dwb_msgs::srv::DebugLocalPlan_Response>()
{
  return &dwb_msgs::srv::typesupport_fastrtps_cpp::_DebugLocalPlan_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, DebugLocalPlan_Response)() {
  return &dwb_msgs::srv::typesupport_fastrtps_cpp::_DebugLocalPlan_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace dwb_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _DebugLocalPlan__callbacks = {
  "dwb_msgs::srv",
  "DebugLocalPlan",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, DebugLocalPlan_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, DebugLocalPlan_Response)(),
};

static rosidl_service_type_support_t _DebugLocalPlan__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DebugLocalPlan__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dwb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dwb_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<dwb_msgs::srv::DebugLocalPlan>()
{
  return &dwb_msgs::srv::typesupport_fastrtps_cpp::_DebugLocalPlan__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, DebugLocalPlan)() {
  return &dwb_msgs::srv::typesupport_fastrtps_cpp::_DebugLocalPlan__handle;
}

#ifdef __cplusplus
}
#endif
