import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_srvs.srv import SetBool

class TurtleController(Node):

    def __init__(self):
        super().__init__('turtle_controller')

        # Parameter for speed
        self.declare_parameter('speed', 2.0)

        # Publisher to cmd_vel
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        # Timer
        self.timer = self.create_timer(0.5, self.move_turtle)
        self.is_moving=True
        self.srv=self.create_service(SetBool,'start_stop',self.handle_service)

    def move_turtle(self):
        if not self.is_moving:
            return
        speed = self.get_parameter('speed').value

        msg = Twist()
        msg.linear.x = speed
        msg.angular.z = 1.0

        self.publisher_.publish(msg)

        self.get_logger().info(f'Moving turtle with speed {speed}')

    def handle_service(self,request,response):
        self.is_moving=request.data
        if self.is_moving:
            
            response.message="Turtle started moving"
        else:
            response.message="Turtle stopped"
        return response


def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()