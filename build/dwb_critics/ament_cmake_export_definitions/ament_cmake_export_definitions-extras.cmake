# generated from ament_cmake_export_definitions/cmake/ament_cmake_export_definitions-extras.cmake.in

set(_exported_definitions "PLUGINLIB__DISABLE_BOOST_FUNCTIONS")

# append definitions to dwb_critics_DEFINITIONS
if(NOT _exported_definitions STREQUAL "")
  foreach(_def ${_exported_definitions})
    list(APPEND dwb_critics_DEFINITIONS "${_def}")
  endforeach()
endif()
