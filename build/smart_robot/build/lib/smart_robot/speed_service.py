import rclpy
from rclpy.node import Node
from my_robot_interfaces.srv import ComputeSpeed

class SpeedService(Node):
    def __init__(self):
        super().__init__('speed_service')
        self.srv = self.create_service(ComputeSpeed, 'compute_speed', self.callback)

    def callback(self, request, response):

        distance = request.input

        if distance < 1:
            response.speed = 0.0
        elif distance < 3:
            response.speed = 2.0
        else:
            response.speed = 5.0

        return response


def main(args=None):
    rclpy.init(args=args)
    node = SpeedService()
    rclpy.spin(node)
    rclpy.shutdown()