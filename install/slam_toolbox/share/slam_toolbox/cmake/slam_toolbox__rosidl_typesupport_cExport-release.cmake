#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "slam_toolbox::slam_toolbox__rosidl_typesupport_c" for configuration "Release"
set_property(TARGET slam_toolbox::slam_toolbox__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(slam_toolbox::slam_toolbox__rosidl_typesupport_c PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libslam_toolbox__rosidl_typesupport_c.so"
  IMPORTED_SONAME_RELEASE "libslam_toolbox__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS slam_toolbox::slam_toolbox__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_slam_toolbox::slam_toolbox__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libslam_toolbox__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
