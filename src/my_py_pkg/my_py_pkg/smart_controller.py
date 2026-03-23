import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from my_robot_interfaces.msg import RobotCommand

class SmartController(Node):

    def __init__(self):
        super().__init__('smart_controller')

        # Publisher to turtle
        self.publisher_ = self.create_publisher(
            Twist,
            '/turtle1/cmd_vel',
            10
        )

        # Subscriber to custom command
        self.subscription = self.create_subscription(
            RobotCommand,
            'robot_command',
            self.command_callback,
            10
        )

    def command_callback(self, msg):
        twist = Twist()

        # Apply speed
        twist.linear.x = msg.speed

        # Apply direction logic
        if msg.direction == "forward":
            twist.angular.z = 0.0
        elif msg.direction == "left":
            twist.angular.z = 1.0
        elif msg.direction == "right":
            twist.angular.z = -1.0
        else:
            twist.linear.x = 0.0
            twist.angular.z = 0.0

        self.publisher_.publish(twist)

        self.get_logger().info(
            f'Executing: {msg.direction} at speed {msg.speed}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = SmartController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()