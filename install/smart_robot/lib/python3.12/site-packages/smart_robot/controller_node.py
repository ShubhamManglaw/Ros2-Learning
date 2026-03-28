import rclpy
from rclpy.node import Node
from my_robot_interfaces.msg import Distance
from my_robot_interfaces.srv import ComputeSpeed

class ControllerNode(Node):
    def __init__(self):
        super().__init__('controller_node')

        # ✅ Parameter
        self.declare_parameter("safe_distance", 2.0)
        self.safe_distance = self.get_parameter("safe_distance").value

        # ✅ Subscriber
        self.subscription = self.create_subscription(
            Distance,
            'distance',
            self.callback,
            10
        )

        # ✅ Service client
        self.client = self.create_client(ComputeSpeed, 'compute_speed')

        # ✅ Wait for service
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for service...')

    def callback(self, msg):
        self.get_logger().info(f"Distance received: {msg.distance}")

        if msg.distance < self.safe_distance:
            self.get_logger().warn("Too close to obstacle!")

        req = ComputeSpeed.Request()
        req.input = msg.distance

        future = self.client.call_async(req)
        future.add_done_callback(self.handle_response)

    def handle_response(self, future):
        if future.result() is not None:
            response = future.result()
            self.get_logger().info(f"Speed: {response.speed}")
        else:
            self.get_logger().error("Service call failed")


def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()
    rclpy.spin(node)
    rclpy.shutdown()