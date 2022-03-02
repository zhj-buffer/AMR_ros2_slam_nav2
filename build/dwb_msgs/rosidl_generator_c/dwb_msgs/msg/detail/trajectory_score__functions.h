// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__DETAIL__TRAJECTORY_SCORE__FUNCTIONS_H_
#define DWB_MSGS__MSG__DETAIL__TRAJECTORY_SCORE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dwb_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dwb_msgs/msg/detail/trajectory_score__struct.h"

/// Initialize msg/TrajectoryScore message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dwb_msgs__msg__TrajectoryScore
 * )) before or use
 * dwb_msgs__msg__TrajectoryScore__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__msg__TrajectoryScore__init(dwb_msgs__msg__TrajectoryScore * msg);

/// Finalize msg/TrajectoryScore message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__msg__TrajectoryScore__fini(dwb_msgs__msg__TrajectoryScore * msg);

/// Create msg/TrajectoryScore message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dwb_msgs__msg__TrajectoryScore__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
dwb_msgs__msg__TrajectoryScore *
dwb_msgs__msg__TrajectoryScore__create();

/// Destroy msg/TrajectoryScore message.
/**
 * It calls
 * dwb_msgs__msg__TrajectoryScore__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__msg__TrajectoryScore__destroy(dwb_msgs__msg__TrajectoryScore * msg);


/// Initialize array of msg/TrajectoryScore messages.
/**
 * It allocates the memory for the number of elements and calls
 * dwb_msgs__msg__TrajectoryScore__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__msg__TrajectoryScore__Sequence__init(dwb_msgs__msg__TrajectoryScore__Sequence * array, size_t size);

/// Finalize array of msg/TrajectoryScore messages.
/**
 * It calls
 * dwb_msgs__msg__TrajectoryScore__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__msg__TrajectoryScore__Sequence__fini(dwb_msgs__msg__TrajectoryScore__Sequence * array);

/// Create array of msg/TrajectoryScore messages.
/**
 * It allocates the memory for the array and calls
 * dwb_msgs__msg__TrajectoryScore__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
dwb_msgs__msg__TrajectoryScore__Sequence *
dwb_msgs__msg__TrajectoryScore__Sequence__create(size_t size);

/// Destroy array of msg/TrajectoryScore messages.
/**
 * It calls
 * dwb_msgs__msg__TrajectoryScore__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__msg__TrajectoryScore__Sequence__destroy(dwb_msgs__msg__TrajectoryScore__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__MSG__DETAIL__TRAJECTORY_SCORE__FUNCTIONS_H_
