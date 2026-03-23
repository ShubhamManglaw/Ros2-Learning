from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='sim'
        ),

        Node(
            package='my_py_pkg',
            executable='turtle_controller',
            name='controller',
            parameters=[{'speed': 2.0}]
        )

    ])