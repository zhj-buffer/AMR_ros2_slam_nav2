cmake_minimum_required(VERSION 3.5)
project(yhs_chassis_description)

if(NOT CMAKE_CXX_STANDARD)
	set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	add_compile_options(-Wall -Wextra -Wpedantic)
endif()


find_package(ament_cmake REQUIRED)
find_package(urdf REQUIRED)


################################################################################
# Install
################################################################################
install(DIRECTORY meshes rviz urdf launch
	DESTINATION share/${PROJECT_NAME}
)

ament_package()

