# generated from ament_cmake_export_definitions/cmake/ament_cmake_export_definitions-extras.cmake.in

set(_exported_definitions "PLUGINLIB__DISABLE_BOOST_FUNCTIONS")

# append definitions to nav2_regulated_pure_pursuit_controller_DEFINITIONS
if(NOT _exported_definitions STREQUAL "")
  foreach(_def ${_exported_definitions})
    list(APPEND nav2_regulated_pure_pursuit_controller_DEFINITIONS "${_def}")
  endforeach()
endif()
