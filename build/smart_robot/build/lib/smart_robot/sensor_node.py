import rclpy
from rclpy.node import Node
from my_robot_interfaces.msg import Distance
import random

class SensorNode(Node):
    def __init__(self):
        super().__init__('sensor_node')
        self.publisher_ = self.create_publisher(Distance, 'distance', 10)
        self.timer = self.create_timer(1.0, self.publish_data)

    def publish_data(self):
        msg = Distance()
        msg.distance = random.uniform(0.0, 10.0)
        self.publisher_.publish(msg)
        self.get_logger().info(f"Distance: {msg.distance}")

def main(args=None):
    rclpy.init(args=args)
    node = SensorNode()
    rclpy.spin(node)
    rclpy.shutdown()