// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from realsense2_camera_msgs:msg/Metadata.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE2_CAMERA_MSGS__MSG__DETAIL__METADATA__FUNCTIONS_H_
#define REALSENSE2_CAMERA_MSGS__MSG__DETAIL__METADATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "realsense2_camera_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "realsense2_camera_msgs/msg/detail/metadata__struct.h"

/// Initialize msg/Metadata message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * realsense2_camera_msgs__msg__Metadata
 * )) before or use
 * realsense2_camera_msgs__msg__Metadata__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__msg__Metadata__init(realsense2_camera_msgs__msg__Metadata * msg);

/// Finalize msg/Metadata message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
void
realsense2_camera_msgs__msg__Metadata__fini(realsense2_camera_msgs__msg__Metadata * msg);

/// Create msg/Metadata message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * realsense2_camera_msgs__msg__Metadata__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
realsense2_camera_msgs__msg__Metadata *
realsense2_camera_msgs__msg__Metadata__create();

/// Destroy msg/Metadata message.
/**
 * It calls
 * realsense2_camera_msgs__msg__Metadata__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
void
realsense2_camera_msgs__msg__Metadata__destroy(realsense2_camera_msgs__msg__Metadata * msg);


/// Initialize array of msg/Metadata messages.
/**
 * It allocates the memory for the number of elements and calls
 * realsense2_camera_msgs__msg__Metadata__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__msg__Metadata__Sequence__init(realsense2_camera_msgs__msg__Metadata__Sequence * array, size_t size);

/// Finalize array of msg/Metadata messages.
/**
 * It calls
 * realsense2_camera_msgs__msg__Metadata__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
void
realsense2_camera_msgs__msg__Metadata__Sequence__fini(realsense2_camera_msgs__msg__Metadata__Sequence * array);

/// Create array of msg/Metadata messages.
/**
 * It allocates the memory for the array and calls
 * realsense2_camera_msgs__msg__Metadata__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
realsense2_camera_msgs__msg__Metadata__Sequence *
realsense2_camera_msgs__msg__Metadata__Sequence__create(size_t size);

/// Destroy array of msg/Metadata messages.
/**
 * It calls
 * realsense2_camera_msgs__msg__Metadata__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
void
realsense2_camera_msgs__msg__Metadata__Sequence__destroy(realsense2_camera_msgs__msg__Metadata__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // REALSENSE2_CAMERA_MSGS__MSG__DETAIL__METADATA__FUNCTIONS_H_
