// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cartographer_ros_msgs:srv/SubmapQuery.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/srv/detail/submap_query__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cartographer_ros_msgs/srv/detail/submap_query__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
cdr_serialize(
  const cartographer_ros_msgs::srv::SubmapQuery_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trajectory_id
  cdr << ros_message.trajectory_id;
  // Member: submap_index
  cdr << ros_message.submap_index;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartographer_ros_msgs::srv::SubmapQuery_Request & ros_message)
{
  // Member: trajectory_id
  cdr >> ros_message.trajectory_id;

  // Member: submap_index
  cdr >> ros_message.submap_index;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
get_serialized_size(
  const cartographer_ros_msgs::srv::SubmapQuery_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: trajectory_id
  {
    size_t item_size = sizeof(ros_message.trajectory_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: submap_index
  {
    size_t item_size = sizeof(ros_message.submap_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
max_serialized_size_SubmapQuery_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: trajectory_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: submap_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SubmapQuery_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartographer_ros_msgs::srv::SubmapQuery_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SubmapQuery_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartographer_ros_msgs::srv::SubmapQuery_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SubmapQuery_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartographer_ros_msgs::srv::SubmapQuery_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SubmapQuery_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SubmapQuery_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SubmapQuery_Request__callbacks = {
  "cartographer_ros_msgs::srv",
  "SubmapQuery_Request",
  _SubmapQuery_Request__cdr_serialize,
  _SubmapQuery_Request__cdr_deserialize,
  _SubmapQuery_Request__get_serialized_size,
  _SubmapQuery_Request__max_serialized_size
};

static rosidl_message_type_support_t _SubmapQuery_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SubmapQuery_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cartographer_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartographer_ros_msgs::srv::SubmapQuery_Request>()
{
  return &cartographer_ros_msgs::srv::typesupport_fastrtps_cpp::_SubmapQuery_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartographer_ros_msgs, srv, SubmapQuery_Request)() {
  return &cartographer_ros_msgs::srv::typesupport_fastrtps_cpp::_SubmapQuery_Request__handle;
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
namespace cartographer_ros_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartographer_ros_msgs::msg::StatusResponse &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartographer_ros_msgs::msg::StatusResponse &);
size_t get_serialized_size(
  const cartographer_ros_msgs::msg::StatusResponse &,
  size_t current_alignment);
size_t
max_serialized_size_StatusResponse(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartographer_ros_msgs

namespace cartographer_ros_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartographer_ros_msgs::msg::SubmapTexture &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartographer_ros_msgs::msg::SubmapTexture &);
size_t get_serialized_size(
  const cartographer_ros_msgs::msg::SubmapTexture &,
  size_t current_alignment);
size_t
max_serialized_size_SubmapTexture(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartographer_ros_msgs


namespace cartographer_ros_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
cdr_serialize(
  const cartographer_ros_msgs::srv::SubmapQuery_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.status,
    cdr);
  // Member: submap_version
  cdr << ros_message.submap_version;
  // Member: textures
  {
    size_t size = ros_message.textures.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.textures[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartographer_ros_msgs::srv::SubmapQuery_Response & ros_message)
{
  // Member: status
  cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.status);

  // Member: submap_version
  cdr >> ros_message.submap_version;

  // Member: textures
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.textures.resize(size);
    for (size_t i = 0; i < size; i++) {
      cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.textures[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
get_serialized_size(
  const cartographer_ros_msgs::srv::SubmapQuery_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status

  current_alignment +=
    cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.status, current_alignment);
  // Member: submap_version
  {
    size_t item_size = sizeof(ros_message.submap_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: textures
  {
    size_t array_size = ros_message.textures.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.textures[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
max_serialized_size_SubmapQuery_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_StatusResponse(
        full_bounded, current_alignment);
    }
  }

  // Member: submap_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: textures
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SubmapTexture(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _SubmapQuery_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartographer_ros_msgs::srv::SubmapQuery_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SubmapQuery_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartographer_ros_msgs::srv::SubmapQuery_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SubmapQuery_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartographer_ros_msgs::srv::SubmapQuery_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SubmapQuery_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SubmapQuery_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SubmapQuery_Response__callbacks = {
  "cartographer_ros_msgs::srv",
  "SubmapQuery_Response",
  _SubmapQuery_Response__cdr_serialize,
  _SubmapQuery_Response__cdr_deserialize,
  _SubmapQuery_Response__get_serialized_size,
  _SubmapQuery_Response__max_serialized_size
};

static rosidl_message_type_support_t _SubmapQuery_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SubmapQuery_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cartographer_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartographer_ros_msgs::srv::SubmapQuery_Response>()
{
  return &cartographer_ros_msgs::srv::typesupport_fastrtps_cpp::_SubmapQuery_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartographer_ros_msgs, srv, SubmapQuery_Response)() {
  return &cartographer_ros_msgs::srv::typesupport_fastrtps_cpp::_SubmapQuery_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace cartographer_ros_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SubmapQuery__callbacks = {
  "cartographer_ros_msgs::srv",
  "SubmapQuery",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartographer_ros_msgs, srv, SubmapQuery_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartographer_ros_msgs, srv, SubmapQuery_Response)(),
};

static rosidl_service_type_support_t _SubmapQuery__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SubmapQuery__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cartographer_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartographer_ros_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<cartographer_ros_msgs::srv::SubmapQuery>()
{
  return &cartographer_ros_msgs::srv::typesupport_fastrtps_cpp::_SubmapQuery__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartographer_ros_msgs, srv, SubmapQuery)() {
  return &cartographer_ros_msgs::srv::typesupport_fastrtps_cpp::_SubmapQuery__handle;
}

#ifdef __cplusplus
}
#endif
