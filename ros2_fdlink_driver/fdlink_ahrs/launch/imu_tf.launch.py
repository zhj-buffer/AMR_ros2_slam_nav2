from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    imu_tf=Node(
        package="fdlink_ahrs",
        executable="imu_tf_node",
        parameters=[{'imu_topic':'/imu',
        'position_x':1,
        'position_y':1,
        'position_z':1,
        }],
    )

    launch_description =LaunchDescription([imu_tf])
    return launch_description
