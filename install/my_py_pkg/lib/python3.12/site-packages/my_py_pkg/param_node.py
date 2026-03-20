import rclpy
from rclpy.node import Node

class ParamNode(Node):

    def __init__(self):
        super().__init__('param_node')

        # Step 1: declare parameter
        self.declare_parameter('speed', 1.0)
        self.declare_parameter('robot_name', 'turtle1')

        # Timer to print value
        self.timer = self.create_timer(2.0, self.timer_callback)

    def timer_callback(self):
        speed = self.get_parameter('speed').value
        robot_name = self.get_parameter('robot_name').value
        self.get_logger().info(f'Robot: {robot_name} | Speed: {speed}')



def main(args=None):
    rclpy.init(args=args)
    node = ParamNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()