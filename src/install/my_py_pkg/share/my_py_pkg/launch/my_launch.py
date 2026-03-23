from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    return LaunchDescription([

        Node(
            package='my_py_pkg',
            executable='publisher_node',
            name='pub_node'
        ),

        Node(
            package='my_py_pkg',
            executable='subscriber_node',
            name='sub_node'
        ),

        Node(
            package='my_py_pkg',
            executable='param_node',
            name='param_node',
            parameters=[{'speed': 2.5}]
        )

    ])