# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_typesupport_introspection_c:ros2_rada_msg__rosidl_typesupport_introspection_c;__rosidl_typesupport_introspection_cpp:ros2_rada_msg__rosidl_typesupport_introspection_cpp")

# populate ros2_rada_msg_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "ros2_rada_msg::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'ros2_rada_msg' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND ros2_rada_msg_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
