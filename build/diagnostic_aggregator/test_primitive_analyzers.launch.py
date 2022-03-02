import os

import unittest

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.events import matches_action
from launch.events.process import ShutdownProcess

import launch_testing
import launch_testing.actions
import launch_testing.asserts
import launch_testing.util
import launch_testing_ros



def generate_test_description():
    os.environ['OSPL_VERBOSITY'] = '8'
    os.environ['RCUTILS_CONSOLE_OUTPUT_FORMAT'] = '{message}'

    aggregator_node = ExecuteProcess(
        cmd=[
            "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/install/diagnostic_aggregator/lib/diagnostic_aggregator/aggregator_node",
            "--ros-args",
            "--params-file",
            "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/ROS2-driver-for-Realsense/diagnostics/diagnostic_aggregator/test/primitive_analyzers.yaml"
            ],
        name='aggregator_node',
        emulate_tty=True,
        output='screen')

    launch_description = LaunchDescription()
    launch_description.add_action(aggregator_node)
    launch_description.add_action(launch_testing.util.KeepAliveProc())
    launch_description.add_action(launch_testing.actions.ReadyToTest())
    return launch_description, locals()

class TestAggregator(unittest.TestCase):

    def test_processes_output(self, proc_output, aggregator_node):
        """Check aggregator logging output for expected strings."""
        
        from launch_testing.tools.output import get_default_filtered_prefixes
        output_filter = launch_testing_ros.tools.basic_output_filter(
            filtered_prefixes=get_default_filtered_prefixes() + ['service not available, waiting...'],
            filtered_rmw_implementation=''
        )
        proc_output.assertWaitFor(
            expected_output=launch_testing.tools.expected_output_from_file(path="/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/ROS2-driver-for-Realsense/diagnostics/diagnostic_aggregator/test/expected_output/primitive_analyzers"),
            process=aggregator_node,
            output_filter=output_filter,
            timeout=15
        )

        import time
        time.sleep(5)

@launch_testing.post_shutdown_test()
class TestAggregatorShutdown(unittest.TestCase):

    def test_last_process_exit_code(self, proc_info, aggregator_node):
        launch_testing.asserts.assertExitCodes(proc_info, process=aggregator_node)
