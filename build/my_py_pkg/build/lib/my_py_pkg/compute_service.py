import rclpy
from rclpy.node import Node
from my_robot_interfaces.srv import ComputeSpeed

class ComputeService(Node):

    def __init__(self):
        super().__init__('compute_service')

        self.srv = self.create_service(
            ComputeSpeed,
            'compute_speed',
            self.callback
        )

    def callback(self, request, response):
        response.output = request.input * 2.0
        self.get_logger().info(f'Input: {request.input} → Output: {response.output}')
        return response


def main(args=None):
    rclpy.init(args=args)
    node = ComputeService()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()