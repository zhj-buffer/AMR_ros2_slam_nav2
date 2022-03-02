#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pcl_ros::pcl_ros_tf" for configuration ""
set_property(TARGET pcl_ros::pcl_ros_tf APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(pcl_ros::pcl_ros_tf PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libpcl_ros_tf.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS pcl_ros::pcl_ros_tf )
list(APPEND _IMPORT_CHECK_FILES_FOR_pcl_ros::pcl_ros_tf "${_IMPORT_PREFIX}/lib/libpcl_ros_tf.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
