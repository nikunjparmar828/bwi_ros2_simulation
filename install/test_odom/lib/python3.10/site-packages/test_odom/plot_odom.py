import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
import matplotlib.pyplot as plt
from threading import Timer

class OdomPlotterNode(Node):
    def __init__(self):
        super().__init__('odom_plotter_node')

        # Subscriptions for two robots
        self.sub_r1 = self.create_subscription(Odometry, '/r1/odom', self.odom_callback_r1, 10)
        self.sub_r2 = self.create_subscription(Odometry, '/r2/odom', self.odom_callback_r2, 10)

        # Data storage for robot 1
        self.times_r1 = []
        self.x_r1 = []
        self.y_r1 = []

        # Data storage for robot 2
        self.times_r2 = []
        self.x_r2 = []
        self.y_r2 = []

        self.start_time = None
        
        # Stop plotting after 30 seconds
        self.plot_timer = Timer(30.0, self.plot_data)
        self.plot_timer.start()

        self.get_logger().info("Started collecting /r1/odom and /r2/odom data...")

    def _record(self, msg, times, xs, ys):
        # Extract linear x and y velocities from the odometry message
        x = msg.twist.twist.linear.x
        y = msg.twist.twist.linear.y
        # x = msg.twist.twist.angular.x
        # y = msg.twist.twist.angular.w
        
        # Record time as seconds since start
        if self.start_time is None:
            self.start_time = self.get_clock().now().to_msg().sec
        
        current_time = self.get_clock().now().to_msg().sec - self.start_time
        
        # Store the time and linear velocities
        times.append(current_time)
        xs.append(x)
        ys.append(y)

    def odom_callback_r1(self, msg):
        self._record(msg, self.times_r1, self.x_r1, self.y_r1)

    def odom_callback_r2(self, msg):
        self._record(msg, self.times_r2, self.x_r2, self.y_r2)

    def plot_data(self):
        fig, axs = plt.subplots(2, 2, figsize=(12, 10))

        # --- Robot 1 Plots ---
        axs[0][0].plot(self.times_r1, self.x_r1, marker='o', color='b')
        axs[0][0].set_title('R1 X vs Time')
        axs[0][0].set_xlabel('Time (s)')
        axs[0][0].set_ylabel('X')
        axs[0][0].grid(True)

        axs[0][1].plot(self.times_r1, self.y_r1, marker='o', color='r')
        axs[0][1].set_title('R1 Y vs Time')
        axs[0][1].set_xlabel('Time (s)')
        axs[0][1].set_ylabel('Y')
        axs[0][1].grid(True)

        # # --- Robot 2 Plots ---
        axs[1][0].plot(self.times_r2, self.x_r2, marker='o', color='b')
        axs[1][0].set_title('R2 X vs Time')
        axs[1][0].set_xlabel('Time (s)')
        axs[1][0].set_ylabel('X')
        axs[1][0].grid(True)

        axs[1][1].plot(self.times_r2, self.y_r2, marker='o', color='r')
        axs[1][1].set_title('R2 Y vs Time')
        axs[1][1].set_xlabel('Time (s)')
        axs[1][1].set_ylabel('Y')
        axs[1][1].grid(True)

        plt.tight_layout()
        plt.show()

        self.get_logger().info("Finished plotting /r1/odom and /r2/odom data.")
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    node = OdomPlotterNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
