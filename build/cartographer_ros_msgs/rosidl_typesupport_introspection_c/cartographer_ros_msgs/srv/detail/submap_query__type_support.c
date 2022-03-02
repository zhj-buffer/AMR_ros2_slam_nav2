// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:srv/SubmapQuery.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/srv/detail/submap_query__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/srv/detail/submap_query__functions.h"
#include "cartographer_ros_msgs/srv/detail/submap_query__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SubmapQuery_Request__rosidl_typesupport_introspection_c__SubmapQuery_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__srv__SubmapQuery_Request__init(message_memory);
}

void SubmapQuery_Request__rosidl_typesupport_introspection_c__SubmapQuery_Request_fini_function(void * message_memory)
{
  cartographer_ros_msgs__srv__SubmapQuery_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SubmapQuery_Request__rosidl_typesupport_introspection_c__SubmapQuery_Request_message_member_array[2] = {
  {
    "trajectory_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__SubmapQuery_Request, trajectory_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "submap_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__SubmapQuery_Request, submap_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SubmapQuery_Request__rosidl_typesupport_introspection_c__SubmapQuery_Request_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "SubmapQuery_Request",  // message name
  2,  // number of fields
  sizeof(cartographer_ros_msgs__srv__SubmapQuery_Request),
  SubmapQuery_Request__rosidl_typesupport_introspection_c__SubmapQuery_Request_message_member_array,  // message members
  SubmapQuery_Request__rosidl_typesupport_introspection_c__SubmapQuery_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SubmapQuery_Request__rosidl_typesupport_introspection_c__SubmapQuery_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SubmapQuery_Request__rosidl_typesupport_introspection_c__SubmapQuery_Request_message_type_support_handle = {
  0,
  &SubmapQuery_Request__rosidl_typesupport_introspection_c__SubmapQuery_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, SubmapQuery_Request)() {
  if (!SubmapQuery_Request__rosidl_typesupport_introspection_c__SubmapQuery_Request_message_type_support_handle.typesupport_identifier) {
    SubmapQuery_Request__rosidl_typesupport_introspection_c__SubmapQuery_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SubmapQuery_Request__rosidl_typesupport_introspection_c__SubmapQuery_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cartographer_ros_msgs/srv/detail/submap_query__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/submap_query__functions.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/submap_query__struct.h"


// Include directives for member types
// Member `status`
#include "cartographer_ros_msgs/msg/status_response.h"
// Member `status`
#include "cartographer_ros_msgs/msg/detail/status_response__rosidl_typesupport_introspection_c.h"
// Member `textures`
#include "cartographer_ros_msgs/msg/submap_texture.h"
// Member `textures`
#include "cartographer_ros_msgs/msg/detail/submap_texture__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__srv__SubmapQuery_Response__init(message_memory);
}

void SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_fini_function(void * message_memory)
{
  cartographer_ros_msgs__srv__SubmapQuery_Response__fini(message_memory);
}

size_t SubmapQuery_Response__rosidl_typesupport_introspection_c__size_function__SubmapTexture__textures(
  const void * untyped_member)
{
  const cartographer_ros_msgs__msg__SubmapTexture__Sequence * member =
    (const cartographer_ros_msgs__msg__SubmapTexture__Sequence *)(untyped_member);
  return member->size;
}

const void * SubmapQuery_Response__rosidl_typesupport_introspection_c__get_const_function__SubmapTexture__textures(
  const void * untyped_member, size_t index)
{
  const cartographer_ros_msgs__msg__SubmapTexture__Sequence * member =
    (const cartographer_ros_msgs__msg__SubmapTexture__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SubmapQuery_Response__rosidl_typesupport_introspection_c__get_function__SubmapTexture__textures(
  void * untyped_member, size_t index)
{
  cartographer_ros_msgs__msg__SubmapTexture__Sequence * member =
    (cartographer_ros_msgs__msg__SubmapTexture__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SubmapQuery_Response__rosidl_typesupport_introspection_c__resize_function__SubmapTexture__textures(
  void * untyped_member, size_t size)
{
  cartographer_ros_msgs__msg__SubmapTexture__Sequence * member =
    (cartographer_ros_msgs__msg__SubmapTexture__Sequence *)(untyped_member);
  cartographer_ros_msgs__msg__SubmapTexture__Sequence__fini(member);
  return cartographer_ros_msgs__msg__SubmapTexture__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_message_member_array[3] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__SubmapQuery_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "submap_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__SubmapQuery_Response, submap_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "textures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__SubmapQuery_Response, textures),  // bytes offset in struct
    NULL,  // default value
    SubmapQuery_Response__rosidl_typesupport_introspection_c__size_function__SubmapTexture__textures,  // size() function pointer
    SubmapQuery_Response__rosidl_typesupport_introspection_c__get_const_function__SubmapTexture__textures,  // get_const(index) function pointer
    SubmapQuery_Response__rosidl_typesupport_introspection_c__get_function__SubmapTexture__textures,  // get(index) function pointer
    SubmapQuery_Response__rosidl_typesupport_introspection_c__resize_function__SubmapTexture__textures  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "SubmapQuery_Response",  // message name
  3,  // number of fields
  sizeof(cartographer_ros_msgs__srv__SubmapQuery_Response),
  SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_message_member_array,  // message members
  SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_message_type_support_handle = {
  0,
  &SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, SubmapQuery_Response)() {
  SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, StatusResponse)();
  SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, SubmapTexture)();
  if (!SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_message_type_support_handle.typesupport_identifier) {
    SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SubmapQuery_Response__rosidl_typesupport_introspection_c__SubmapQuery_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/submap_query__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cartographer_ros_msgs__srv__detail__submap_query__rosidl_typesupport_introspection_c__SubmapQuery_service_members = {
  "cartographer_ros_msgs__srv",  // service namespace
  "SubmapQuery",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cartographer_ros_msgs__srv__detail__submap_query__rosidl_typesupport_introspection_c__SubmapQuery_Request_message_type_support_handle,
  NULL  // response message
  // cartographer_ros_msgs__srv__detail__submap_query__rosidl_typesupport_introspection_c__SubmapQuery_Response_message_type_support_handle
};

static rosidl_service_type_support_t cartographer_ros_msgs__srv__detail__submap_query__rosidl_typesupport_introspection_c__SubmapQuery_service_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__detail__submap_query__rosidl_typesupport_introspection_c__SubmapQuery_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, SubmapQuery_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, SubmapQuery_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, SubmapQuery)() {
  if (!cartographer_ros_msgs__srv__detail__submap_query__rosidl_typesupport_introspection_c__SubmapQuery_service_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__detail__submap_query__rosidl_typesupport_introspection_c__SubmapQuery_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cartographer_ros_msgs__srv__detail__submap_query__rosidl_typesupport_introspection_c__SubmapQuery_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, SubmapQuery_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, SubmapQuery_Response)()->data;
  }

  return &cartographer_ros_msgs__srv__detail__submap_query__rosidl_typesupport_introspection_c__SubmapQuery_service_type_support_handle;
}
