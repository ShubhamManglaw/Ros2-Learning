from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        Node(
            package='smart_robot',
            executable='sensor_node',
            name='sensor_node'
        ),

        Node(
            package='smart_robot',
            executable='controller_node',
            name='controller_node'
        ),

        Node(
            package='smart_robot',
            executable='speed_service',
            name='speed_service'
        ),

    ])