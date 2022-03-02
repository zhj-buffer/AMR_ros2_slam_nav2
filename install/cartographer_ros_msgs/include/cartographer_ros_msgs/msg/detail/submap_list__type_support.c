// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:msg/SubmapList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/msg/detail/submap_list__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/msg/detail/submap_list__functions.h"
#include "cartographer_ros_msgs/msg/detail/submap_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `submap`
#include "cartographer_ros_msgs/msg/submap_entry.h"
// Member `submap`
#include "cartographer_ros_msgs/msg/detail/submap_entry__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SubmapList__rosidl_typesupport_introspection_c__SubmapList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__msg__SubmapList__init(message_memory);
}

void SubmapList__rosidl_typesupport_introspection_c__SubmapList_fini_function(void * message_memory)
{
  cartographer_ros_msgs__msg__SubmapList__fini(message_memory);
}

size_t SubmapList__rosidl_typesupport_introspection_c__size_function__SubmapEntry__submap(
  const void * untyped_member)
{
  const cartographer_ros_msgs__msg__SubmapEntry__Sequence * member =
    (const cartographer_ros_msgs__msg__SubmapEntry__Sequence *)(untyped_member);
  return member->size;
}

const void * SubmapList__rosidl_typesupport_introspection_c__get_const_function__SubmapEntry__submap(
  const void * untyped_member, size_t index)
{
  const cartographer_ros_msgs__msg__SubmapEntry__Sequence * member =
    (const cartographer_ros_msgs__msg__SubmapEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SubmapList__rosidl_typesupport_introspection_c__get_function__SubmapEntry__submap(
  void * untyped_member, size_t index)
{
  cartographer_ros_msgs__msg__SubmapEntry__Sequence * member =
    (cartographer_ros_msgs__msg__SubmapEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SubmapList__rosidl_typesupport_introspection_c__resize_function__SubmapEntry__submap(
  void * untyped_member, size_t size)
{
  cartographer_ros_msgs__msg__SubmapEntry__Sequence * member =
    (cartographer_ros_msgs__msg__SubmapEntry__Sequence *)(untyped_member);
  cartographer_ros_msgs__msg__SubmapEntry__Sequence__fini(member);
  return cartographer_ros_msgs__msg__SubmapEntry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SubmapList__rosidl_typesupport_introspection_c__SubmapList_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "submap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapList, submap),  // bytes offset in struct
    NULL,  // default value
    SubmapList__rosidl_typesupport_introspection_c__size_function__SubmapEntry__submap,  // size() function pointer
    SubmapList__rosidl_typesupport_introspection_c__get_const_function__SubmapEntry__submap,  // get_const(index) function pointer
    SubmapList__rosidl_typesupport_introspection_c__get_function__SubmapEntry__submap,  // get(index) function pointer
    SubmapList__rosidl_typesupport_introspection_c__resize_function__SubmapEntry__submap  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SubmapList__rosidl_typesupport_introspection_c__SubmapList_message_members = {
  "cartographer_ros_msgs__msg",  // message namespace
  "SubmapList",  // message name
  2,  // number of fields
  sizeof(cartographer_ros_msgs__msg__SubmapList),
  SubmapList__rosidl_typesupport_introspection_c__SubmapList_message_member_array,  // message members
  SubmapList__rosidl_typesupport_introspection_c__SubmapList_init_function,  // function to initialize message memory (memory has to be allocated)
  SubmapList__rosidl_typesupport_introspection_c__SubmapList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SubmapList__rosidl_typesupport_introspection_c__SubmapList_message_type_support_handle = {
  0,
  &SubmapList__rosidl_typesupport_introspection_c__SubmapList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, SubmapList)() {
  SubmapList__rosidl_typesupport_introspection_c__SubmapList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  SubmapList__rosidl_typesupport_introspection_c__SubmapList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, SubmapEntry)();
  if (!SubmapList__rosidl_typesupport_introspection_c__SubmapList_message_type_support_handle.typesupport_identifier) {
    SubmapList__rosidl_typesupport_introspection_c__SubmapList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SubmapList__rosidl_typesupport_introspection_c__SubmapList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
