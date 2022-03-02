// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:msg/ParticleCloud.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/msg/detail/particle_cloud__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/msg/detail/particle_cloud__functions.h"
#include "nav2_msgs/msg/detail/particle_cloud__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `particles`
#include "nav2_msgs/msg/particle.h"
// Member `particles`
#include "nav2_msgs/msg/detail/particle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__msg__ParticleCloud__init(message_memory);
}

void ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_fini_function(void * message_memory)
{
  nav2_msgs__msg__ParticleCloud__fini(message_memory);
}

size_t ParticleCloud__rosidl_typesupport_introspection_c__size_function__Particle__particles(
  const void * untyped_member)
{
  const nav2_msgs__msg__Particle__Sequence * member =
    (const nav2_msgs__msg__Particle__Sequence *)(untyped_member);
  return member->size;
}

const void * ParticleCloud__rosidl_typesupport_introspection_c__get_const_function__Particle__particles(
  const void * untyped_member, size_t index)
{
  const nav2_msgs__msg__Particle__Sequence * member =
    (const nav2_msgs__msg__Particle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ParticleCloud__rosidl_typesupport_introspection_c__get_function__Particle__particles(
  void * untyped_member, size_t index)
{
  nav2_msgs__msg__Particle__Sequence * member =
    (nav2_msgs__msg__Particle__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ParticleCloud__rosidl_typesupport_introspection_c__resize_function__Particle__particles(
  void * untyped_member, size_t size)
{
  nav2_msgs__msg__Particle__Sequence * member =
    (nav2_msgs__msg__Particle__Sequence *)(untyped_member);
  nav2_msgs__msg__Particle__Sequence__fini(member);
  return nav2_msgs__msg__Particle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__ParticleCloud, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "particles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__ParticleCloud, particles),  // bytes offset in struct
    NULL,  // default value
    ParticleCloud__rosidl_typesupport_introspection_c__size_function__Particle__particles,  // size() function pointer
    ParticleCloud__rosidl_typesupport_introspection_c__get_const_function__Particle__particles,  // get_const(index) function pointer
    ParticleCloud__rosidl_typesupport_introspection_c__get_function__Particle__particles,  // get(index) function pointer
    ParticleCloud__rosidl_typesupport_introspection_c__resize_function__Particle__particles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_message_members = {
  "nav2_msgs__msg",  // message namespace
  "ParticleCloud",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__msg__ParticleCloud),
  ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_message_member_array,  // message members
  ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_init_function,  // function to initialize message memory (memory has to be allocated)
  ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_message_type_support_handle = {
  0,
  &ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, ParticleCloud)() {
  ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, Particle)();
  if (!ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_message_type_support_handle.typesupport_identifier) {
    ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ParticleCloud__rosidl_typesupport_introspection_c__ParticleCloud_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
