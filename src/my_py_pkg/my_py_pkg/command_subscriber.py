import rclpy
from rclpy.node import Node
from my_robot_interfaces.msg import RobotCommand

class CommandSubscriber(Node):

    def __init__(self):
        super().__init__('command_subscriber')

        self.subscription = self.create_subscription(
            RobotCommand,
            'robot_command',
            self.listener_callback,
            10
        )

    def listener_callback(self, msg):
        self.get_logger().info(
            f'Received: speed={msg.speed}, direction={msg.direction}, robot={msg.robot_name}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = CommandSubscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()