// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pcl_msgs:srv/UpdateFilename.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__SRV__DETAIL__UPDATE_FILENAME__FUNCTIONS_H_
#define PCL_MSGS__SRV__DETAIL__UPDATE_FILENAME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pcl_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pcl_msgs/srv/detail/update_filename__struct.h"

/// Initialize srv/UpdateFilename message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pcl_msgs__srv__UpdateFilename_Request
 * )) before or use
 * pcl_msgs__srv__UpdateFilename_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
bool
pcl_msgs__srv__UpdateFilename_Request__init(pcl_msgs__srv__UpdateFilename_Request * msg);

/// Finalize srv/UpdateFilename message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__srv__UpdateFilename_Request__fini(pcl_msgs__srv__UpdateFilename_Request * msg);

/// Create srv/UpdateFilename message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pcl_msgs__srv__UpdateFilename_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
pcl_msgs__srv__UpdateFilename_Request *
pcl_msgs__srv__UpdateFilename_Request__create();

/// Destroy srv/UpdateFilename message.
/**
 * It calls
 * pcl_msgs__srv__UpdateFilename_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__srv__UpdateFilename_Request__destroy(pcl_msgs__srv__UpdateFilename_Request * msg);


/// Initialize array of srv/UpdateFilename messages.
/**
 * It allocates the memory for the number of elements and calls
 * pcl_msgs__srv__UpdateFilename_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
bool
pcl_msgs__srv__UpdateFilename_Request__Sequence__init(pcl_msgs__srv__UpdateFilename_Request__Sequence * array, size_t size);

/// Finalize array of srv/UpdateFilename messages.
/**
 * It calls
 * pcl_msgs__srv__UpdateFilename_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__srv__UpdateFilename_Request__Sequence__fini(pcl_msgs__srv__UpdateFilename_Request__Sequence * array);

/// Create array of srv/UpdateFilename messages.
/**
 * It allocates the memory for the array and calls
 * pcl_msgs__srv__UpdateFilename_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
pcl_msgs__srv__UpdateFilename_Request__Sequence *
pcl_msgs__srv__UpdateFilename_Request__Sequence__create(size_t size);

/// Destroy array of srv/UpdateFilename messages.
/**
 * It calls
 * pcl_msgs__srv__UpdateFilename_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__srv__UpdateFilename_Request__Sequence__destroy(pcl_msgs__srv__UpdateFilename_Request__Sequence * array);

/// Initialize srv/UpdateFilename message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pcl_msgs__srv__UpdateFilename_Response
 * )) before or use
 * pcl_msgs__srv__UpdateFilename_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
bool
pcl_msgs__srv__UpdateFilename_Response__init(pcl_msgs__srv__UpdateFilename_Response * msg);

/// Finalize srv/UpdateFilename message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__srv__UpdateFilename_Response__fini(pcl_msgs__srv__UpdateFilename_Response * msg);

/// Create srv/UpdateFilename message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pcl_msgs__srv__UpdateFilename_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
pcl_msgs__srv__UpdateFilename_Response *
pcl_msgs__srv__UpdateFilename_Response__create();

/// Destroy srv/UpdateFilename message.
/**
 * It calls
 * pcl_msgs__srv__UpdateFilename_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__srv__UpdateFilename_Response__destroy(pcl_msgs__srv__UpdateFilename_Response * msg);


/// Initialize array of srv/UpdateFilename messages.
/**
 * It allocates the memory for the number of elements and calls
 * pcl_msgs__srv__UpdateFilename_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
bool
pcl_msgs__srv__UpdateFilename_Response__Sequence__init(pcl_msgs__srv__UpdateFilename_Response__Sequence * array, size_t size);

/// Finalize array of srv/UpdateFilename messages.
/**
 * It calls
 * pcl_msgs__srv__UpdateFilename_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__srv__UpdateFilename_Response__Sequence__fini(pcl_msgs__srv__UpdateFilename_Response__Sequence * array);

/// Create array of srv/UpdateFilename messages.
/**
 * It allocates the memory for the array and calls
 * pcl_msgs__srv__UpdateFilename_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
pcl_msgs__srv__UpdateFilename_Response__Sequence *
pcl_msgs__srv__UpdateFilename_Response__Sequence__create(size_t size);

/// Destroy array of srv/UpdateFilename messages.
/**
 * It calls
 * pcl_msgs__srv__UpdateFilename_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__srv__UpdateFilename_Response__Sequence__destroy(pcl_msgs__srv__UpdateFilename_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PCL_MSGS__SRV__DETAIL__UPDATE_FILENAME__FUNCTIONS_H_