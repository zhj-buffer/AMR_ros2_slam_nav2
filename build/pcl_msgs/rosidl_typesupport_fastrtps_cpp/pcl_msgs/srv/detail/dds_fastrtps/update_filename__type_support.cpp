// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pcl_msgs:srv/UpdateFilename.idl
// generated code does not contain a copyright notice
#include "pcl_msgs/srv/detail/update_filename__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pcl_msgs/srv/detail/update_filename__struct.hpp"

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

namespace pcl_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pcl_msgs
cdr_serialize(
  const pcl_msgs::srv::UpdateFilename_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: filename
  cdr << ros_message.filename;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pcl_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pcl_msgs::srv::UpdateFilename_Request & ros_message)
{
  // Member: filename
  cdr >> ros_message.filename;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pcl_msgs
get_serialized_size(
  const pcl_msgs::srv::UpdateFilename_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.filename.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pcl_msgs
max_serialized_size_UpdateFilename_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: filename
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

static bool _UpdateFilename_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pcl_msgs::srv::UpdateFilename_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UpdateFilename_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pcl_msgs::srv::UpdateFilename_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UpdateFilename_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pcl_msgs::srv::UpdateFilename_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UpdateFilename_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_UpdateFilename_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _UpdateFilename_Request__callbacks = {
  "pcl_msgs::srv",
  "UpdateFilename_Request",
  _UpdateFilename_Request__cdr_serialize,
  _UpdateFilename_Request__cdr_deserialize,
  _UpdateFilename_Request__get_serialized_size,
  _UpdateFilename_Request__max_serialized_size
};

static rosidl_message_type_support_t _UpdateFilename_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UpdateFilename_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace pcl_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pcl_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<pcl_msgs::srv::UpdateFilename_Request>()
{
  return &pcl_msgs::srv::typesupport_fastrtps_cpp::_UpdateFilename_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pcl_msgs, srv, UpdateFilename_Request)() {
  return &pcl_msgs::srv::typesupport_fastrtps_cpp::_UpdateFilename_Request__handle;
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

namespace pcl_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pcl_msgs
cdr_serialize(
  const pcl_msgs::srv::UpdateFilename_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pcl_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pcl_msgs::srv::UpdateFilename_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pcl_msgs
get_serialized_size(
  const pcl_msgs::srv::UpdateFilename_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pcl_msgs
max_serialized_size_UpdateFilename_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _UpdateFilename_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pcl_msgs::srv::UpdateFilename_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UpdateFilename_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pcl_msgs::srv::UpdateFilename_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UpdateFilename_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pcl_msgs::srv::UpdateFilename_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UpdateFilename_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_UpdateFilename_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _UpdateFilename_Response__callbacks = {
  "pcl_msgs::srv",
  "UpdateFilename_Response",
  _UpdateFilename_Response__cdr_serialize,
  _UpdateFilename_Response__cdr_deserialize,
  _UpdateFilename_Response__get_serialized_size,
  _UpdateFilename_Response__max_serialized_size
};

static rosidl_message_type_support_t _UpdateFilename_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UpdateFilename_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace pcl_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pcl_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<pcl_msgs::srv::UpdateFilename_Response>()
{
  return &pcl_msgs::srv::typesupport_fastrtps_cpp::_UpdateFilename_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pcl_msgs, srv, UpdateFilename_Response)() {
  return &pcl_msgs::srv::typesupport_fastrtps_cpp::_UpdateFilename_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace pcl_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _UpdateFilename__callbacks = {
  "pcl_msgs::srv",
  "UpdateFilename",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pcl_msgs, srv, UpdateFilename_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pcl_msgs, srv, UpdateFilename_Response)(),
};

static rosidl_service_type_support_t _UpdateFilename__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UpdateFilename__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace pcl_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pcl_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<pcl_msgs::srv::UpdateFilename>()
{
  return &pcl_msgs::srv::typesupport_fastrtps_cpp::_UpdateFilename__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pcl_msgs, srv, UpdateFilename)() {
  return &pcl_msgs::srv::typesupport_fastrtps_cpp::_UpdateFilename__handle;
}

#ifdef __cplusplus
}
#endif
