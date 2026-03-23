import rclpy
from rclpy.node import Node
from my_robot_interfaces.msg import RobotCommand

class CommandPublisher(Node):

    def __init__(self):
        super().__init__('command_publisher')

        self.publisher_ = self.create_publisher(
            RobotCommand,
            'robot_command',
            10
        )

        self.timer = self.create_timer(1.0, self.publish_command)

    def publish_command(self):
        msg = RobotCommand()

        msg.speed = 2.5
        msg.direction = "forward"
        msg.robot_name = "turtle1"

        self.publisher_.publish(msg)

        self.get_logger().info(
            f'Sent: speed={msg.speed}, direction={msg.direction}, robot={msg.robot_name}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = CommandPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()