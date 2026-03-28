import rclpy
from rclpy.node import Node
from my_robot_interfaces.msg import Distance
from my_robot_interfaces.srv import ComputeSpeed

class ControllerNode(Node):
    def __init__(self):
        super().__init__('controller_node')
        self.subscription = self.create_subscription(
            Distance,
            'distance',
            self.listener_callback,
            10
        )

        self.client = self.create_client(ComputeSpeed, 'compute_speed')

    def listener_callback(self, msg):
        req = ComputeSpeed.Request()
        req.input = msg.distance

        future = self.client.call_async(req)
        future.add_done_callback(self.callback_response)

    def callback_response(self, future):
        response = future.result()
        self.get_logger().info(f"Recommended Speed: {response.speed}")

def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()
    rclpy.spin(node)
    rclpy.shutdown()