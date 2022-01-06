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
    TURTLEBOT3_MODEL = os.environ['TURTLEBOT3_MODEL']

    amr_param_dir = LaunchConfiguration(
        'amr_param_dir',
        default=os.path.join(
            get_package_share_directory('ros2_drive_package_can_ctrol'),
            'param',
            TURTLEBOT3_MODEL + '.yaml'))

    lidar_pkg_dir = LaunchConfiguration(
        'lidar_pkg_dir',
        default=os.path.join(get_package_share_directory('rslidar_sdk'), 'launch'))

    imu_pkg_dir = LaunchConfiguration(
        'imu_pkg_dir',
        default=os.path.join(get_package_share_directory('fdlink_ahrs'), 'launch'))

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value=use_sim_time,
            description='Use simulation (Gazebo) clock if true'),

        DeclareLaunchArgument(
            'amr_param_dir',
            default_value=amr_param_dir,
            description='Full path to amr parameter file to load'),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                [ThisLaunchFileDir(), '/turtlebot3_state_publisher.launch.py']),
            launch_arguments={'use_sim_time': use_sim_time}.items(),
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([imu_pkg_dir, '/ahrs_driver.launch.py']),
#            launch_arguments={'port': '/dev/ttyUSB0', 'frame_id': 'base_scan'}.items(),
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([lidar_pkg_dir, '/start.py']),
#            launch_arguments={'port': '/dev/ttyUSB0', 'frame_id': 'base_scan'}.items(),
        ),


        Node(
            package='ros2_drive_package_can_ctrol',
            executable='ros2_drive_package_can_ctrol',
            parameters=[amr_param_dir],
 #           arguments=['-i', usb_port],
            output='screen'),
    ])
