from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='test_pkg',
            executable='Node1.py',
            name='node1'
        ),
        Node(
            package='test_pkg',
            executable='Node2',
            name='node2'
        ),

        # customize launch file below

        # end launch file customization
    ])
