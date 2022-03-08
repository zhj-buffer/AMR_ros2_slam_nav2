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

    robot_pkg_dir = LaunchConfiguration(
        'robot_pkg_dir',
        default=os.path.join(get_package_share_directory('amr_bringup'), 'launch'))

    navigation_pkg_dir = LaunchConfiguration(
        'navigation_pkg_dir',
        default=os.path.join(get_package_share_directory('nav2_bringup'), 'launch'))

    slam_pkg_dir = LaunchConfiguration(
        'slam_pkg_dir',
        default=os.path.join(get_package_share_directory('slam_toolbox'), 'launch'))

    rviz_config_dir = os.path.join(get_package_share_directory('nav2_bringup'),
         'rviz', 'nav2_default_view.rviz')

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value=use_sim_time,
            description='Use simulation (Gazebo) clock if true'),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                [ThisLaunchFileDir(), '/robot.launch.py']),
            launch_arguments={'use_sim_time': use_sim_time}.items(),
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([navigation_pkg_dir, '/navigation_noamcl_nomap_launch.py']),
            launch_arguments={'map': './map_room.yaml'}.items(),
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([slam_pkg_dir, '/online_async_launch.py']),
        ),
         Node(
            package='rviz2',
            executable='rviz2',
            name='amr_rviz',
            output = 'screen',
            arguments=['-d', rviz_config_dir],
            parameters=[{'use_sim_time': use_sim_time}],
        ),
    ])
