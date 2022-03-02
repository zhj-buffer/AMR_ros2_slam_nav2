// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:msg/ContactsState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/msg/detail/contacts_state__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/msg/detail/contacts_state__functions.h"
#include "gazebo_msgs/msg/detail/contacts_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `states`
#include "gazebo_msgs/msg/contact_state.h"
// Member `states`
#include "gazebo_msgs/msg/detail/contact_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ContactsState__rosidl_typesupport_introspection_c__ContactsState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__msg__ContactsState__init(message_memory);
}

void ContactsState__rosidl_typesupport_introspection_c__ContactsState_fini_function(void * message_memory)
{
  gazebo_msgs__msg__ContactsState__fini(message_memory);
}

size_t ContactsState__rosidl_typesupport_introspection_c__size_function__ContactState__states(
  const void * untyped_member)
{
  const gazebo_msgs__msg__ContactState__Sequence * member =
    (const gazebo_msgs__msg__ContactState__Sequence *)(untyped_member);
  return member->size;
}

const void * ContactsState__rosidl_typesupport_introspection_c__get_const_function__ContactState__states(
  const void * untyped_member, size_t index)
{
  const gazebo_msgs__msg__ContactState__Sequence * member =
    (const gazebo_msgs__msg__ContactState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ContactsState__rosidl_typesupport_introspection_c__get_function__ContactState__states(
  void * untyped_member, size_t index)
{
  gazebo_msgs__msg__ContactState__Sequence * member =
    (gazebo_msgs__msg__ContactState__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ContactsState__rosidl_typesupport_introspection_c__resize_function__ContactState__states(
  void * untyped_member, size_t size)
{
  gazebo_msgs__msg__ContactState__Sequence * member =
    (gazebo_msgs__msg__ContactState__Sequence *)(untyped_member);
  gazebo_msgs__msg__ContactState__Sequence__fini(member);
  return gazebo_msgs__msg__ContactState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ContactsState__rosidl_typesupport_introspection_c__ContactsState_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ContactsState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ContactsState, states),  // bytes offset in struct
    NULL,  // default value
    ContactsState__rosidl_typesupport_introspection_c__size_function__ContactState__states,  // size() function pointer
    ContactsState__rosidl_typesupport_introspection_c__get_const_function__ContactState__states,  // get_const(index) function pointer
    ContactsState__rosidl_typesupport_introspection_c__get_function__ContactState__states,  // get(index) function pointer
    ContactsState__rosidl_typesupport_introspection_c__resize_function__ContactState__states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ContactsState__rosidl_typesupport_introspection_c__ContactsState_message_members = {
  "gazebo_msgs__msg",  // message namespace
  "ContactsState",  // message name
  2,  // number of fields
  sizeof(gazebo_msgs__msg__ContactsState),
  ContactsState__rosidl_typesupport_introspection_c__ContactsState_message_member_array,  // message members
  ContactsState__rosidl_typesupport_introspection_c__ContactsState_init_function,  // function to initialize message memory (memory has to be allocated)
  ContactsState__rosidl_typesupport_introspection_c__ContactsState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ContactsState__rosidl_typesupport_introspection_c__ContactsState_message_type_support_handle = {
  0,
  &ContactsState__rosidl_typesupport_introspection_c__ContactsState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, msg, ContactsState)() {
  ContactsState__rosidl_typesupport_introspection_c__ContactsState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ContactsState__rosidl_typesupport_introspection_c__ContactsState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, msg, ContactState)();
  if (!ContactsState__rosidl_typesupport_introspection_c__ContactsState_message_type_support_handle.typesupport_identifier) {
    ContactsState__rosidl_typesupport_introspection_c__ContactsState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ContactsState__rosidl_typesupport_introspection_c__ContactsState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
