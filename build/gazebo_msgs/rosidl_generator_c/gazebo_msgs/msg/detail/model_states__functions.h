// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gazebo_msgs:msg/ModelStates.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__MODEL_STATES__FUNCTIONS_H_
#define GAZEBO_MSGS__MSG__DETAIL__MODEL_STATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gazebo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "gazebo_msgs/msg/detail/model_states__struct.h"

/// Initialize msg/ModelStates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gazebo_msgs__msg__ModelStates
 * )) before or use
 * gazebo_msgs__msg__ModelStates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__ModelStates__init(gazebo_msgs__msg__ModelStates * msg);

/// Finalize msg/ModelStates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__ModelStates__fini(gazebo_msgs__msg__ModelStates * msg);

/// Create msg/ModelStates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gazebo_msgs__msg__ModelStates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__msg__ModelStates *
gazebo_msgs__msg__ModelStates__create();

/// Destroy msg/ModelStates message.
/**
 * It calls
 * gazebo_msgs__msg__ModelStates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__ModelStates__destroy(gazebo_msgs__msg__ModelStates * msg);


/// Initialize array of msg/ModelStates messages.
/**
 * It allocates the memory for the number of elements and calls
 * gazebo_msgs__msg__ModelStates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__ModelStates__Sequence__init(gazebo_msgs__msg__ModelStates__Sequence * array, size_t size);

/// Finalize array of msg/ModelStates messages.
/**
 * It calls
 * gazebo_msgs__msg__ModelStates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__ModelStates__Sequence__fini(gazebo_msgs__msg__ModelStates__Sequence * array);

/// Create array of msg/ModelStates messages.
/**
 * It allocates the memory for the array and calls
 * gazebo_msgs__msg__ModelStates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__msg__ModelStates__Sequence *
gazebo_msgs__msg__ModelStates__Sequence__create(size_t size);

/// Destroy array of msg/ModelStates messages.
/**
 * It calls
 * gazebo_msgs__msg__ModelStates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__ModelStates__Sequence__destroy(gazebo_msgs__msg__ModelStates__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__MODEL_STATES__FUNCTIONS_H_
