#!/usr/bin/env python3
#
# Copyright 2019 ROBOTIS CO., LTD.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# Authors: Darby Lim

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.substitutions import ThisLaunchFileDir
from launch_ros.actions import Node


def generate_launch_description():

    lidar_pkg_dir = LaunchConfiguration(
        'lidar_pkg_dir',
        default=os.path.join(get_package_share_directory('rslidar_sdk'), 'launch'))

    imu_pkg_dir = LaunchConfiguration(
        'imu_pkg_dir',
        default=os.path.join(get_package_share_directory('fdlink_ahrs'), 'launch'))

    realsense_pkg_dir = LaunchConfiguration(
        'realsense_pkg_dir',
        default=os.path.join(get_package_share_directory('realsense2_camera'), 'launch'))

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')

	pub_odom = ExecuteProcess(
        	cmd=[[
            FindExecutable(name='ros2'),
            ' run tf2_ros static_transform_publisher 0 0 0 0 0 0  odom base_footprint',
        	]],
        	shell=True
    	)



    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value=use_sim_time,
            description='Use simulation (Gazebo) clock if true'),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                [ThisLaunchFileDir(), '/amr_state_publisher.launch.py']),
            launch_arguments={'use_sim_time': use_sim_time}.items(),
        ),

#        IncludeLaunchDescription(
#            PythonLaunchDescriptionSource([realsense_pkg_dir, '/rs_launch.py']),
#        ),
#         Node(
#            package='realsense2_camera',
#            executable='realsense2_camera_node',
#            name='realsense2_camera',
#            output = 'screen',
#            #arguments=['-d', rviz_config_dir],
#            parameters=[{'device_type': 'd455'},
#                        {'enable_pointcloud': True},
#                ]
#        ),
#
        Node(
            package='rslidar_sdk',
            executable='rslidar_sdk_node',
            output='screen'),
	    Node(
            package='ros2_drive_package_can_ctrol',
            executable='ros2_drive_package_can_ctrol',
            output='screen'),
        Node(
            package='ros2_rada_driver_pub',
            executable='rada_pub',
            output='screen'),
        Node(
            package='fdlink_ahrs',
            executable='ahrs_driver_node',
            output='screen'),
 
    ])
