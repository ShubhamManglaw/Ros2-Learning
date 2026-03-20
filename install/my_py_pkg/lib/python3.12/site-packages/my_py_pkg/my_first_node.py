import rclpy
from rclpy.node import Node


class MyFirstNode(Node):

    def __init__(self):
        super().__init__('my_first_node')
        self.get_logger().info("Hello, this is my first ROS2 node!")


def main(args=None):
    rclpy.init(args=args)
    node = MyFirstNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
