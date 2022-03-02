# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_fdlink_ahrs_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED fdlink_ahrs_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(fdlink_ahrs_FOUND FALSE)
  elseif(NOT fdlink_ahrs_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(fdlink_ahrs_FOUND FALSE)
  endif()
  return()
endif()
set(_fdlink_ahrs_CONFIG_INCLUDED TRUE)

# output package information
if(NOT fdlink_ahrs_FIND_QUIETLY)
  message(STATUS "Found fdlink_ahrs: 0.0.0 (${fdlink_ahrs_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'fdlink_ahrs' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${fdlink_ahrs_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(fdlink_ahrs_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${fdlink_ahrs_DIR}/${_extra}")
endforeach()
