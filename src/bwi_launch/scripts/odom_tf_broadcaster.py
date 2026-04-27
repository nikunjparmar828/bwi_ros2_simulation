#!/usr/bin/env python3
import sys
import rclpy
import rclpy.parameter
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy
from nav_msgs.msg import Odometry
from geometry_msgs.msg import TransformStamped
from tf2_msgs.msg import TFMessage

class OdomTFBroadcaster(Node):
    def __init__(self, robot_prefix):
        super().__init__(f'odom_tf_broadcaster_{robot_prefix}')
        self.robot_prefix = robot_prefix

        # Publish directly to /r2/tf (no relay hop needed)
        self.tf_pub = self.create_publisher(
            TFMessage,
            f'/{robot_prefix}/tf',
            100
        )

        self.sub = self.create_subscription(
            Odometry,
            f'/{robot_prefix}/odom',
            self.odom_cb,
            10
        )
        self.get_logger().info(f'OdomTFBroadcaster for {robot_prefix} started!')

    def odom_cb(self, msg):
        t = TransformStamped()
        t.header.stamp = msg.header.stamp
        # Hardcode correct namespaced frame IDs regardless of what odom message contains
        t.header.frame_id = f'{self.robot_prefix}/odom'
        t.child_frame_id = f'{self.robot_prefix}_base_footprint'
        t.transform.translation.x = msg.pose.pose.position.x
        t.transform.translation.y = msg.pose.pose.position.y
        t.transform.translation.z = msg.pose.pose.position.z
        t.transform.rotation = msg.pose.pose.orientation

        tf_msg = TFMessage()
        tf_msg.transforms = [t]
        self.tf_pub.publish(tf_msg)

def main():
    prefix = sys.argv[1] if len(sys.argv) > 1 else 'r1'
    # Correct way to pass ros args
    rclpy.init(args=sys.argv)
    node = OdomTFBroadcaster(prefix)
    # Set use_sim_time correctly
    node.set_parameters([
        rclpy.parameter.Parameter(
            'use_sim_time',
            rclpy.parameter.Parameter.Type.BOOL,
            True
        )
    ])
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()