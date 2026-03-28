import rclpy
from rclpy.node import Node
from my_robot_interfaces.srv import ComputeSpeed

class SpeedService(Node):
    def __init__(self):
        super().__init__('speed_service')
        self.srv = self.create_service(ComputeSpeed, 'compute_speed', self.callback)

    def callback(self, request, response):
        if request.input < 2.0:
            response.speed = 0.0
        elif request.input < 5.0:
            response.speed = 2.0
        else:
            response.speed = 5.0

        self.get_logger().info(f"Input: {request.input} → Speed: {response.speed}")
        return response

def main(args=None):
    rclpy.init(args=args)
    node = SpeedService()
    rclpy.spin(node)
    rclpy.shutdown()