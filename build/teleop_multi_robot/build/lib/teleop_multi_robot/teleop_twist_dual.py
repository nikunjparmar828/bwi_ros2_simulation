#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import sys
import termios
import tty
import select

# Robot 1 keys
r1_bindings = {
    'i': (1, 0),
    ',': (-1, 0),
    'j': (0, 1),
    'l': (0, -1),
    'k': (0, 0)
}

# Robot 2 keys
r2_bindings = {
    'w': (1, 0),
    'x': (-1, 0),
    'a': (0, 1),
    'd': (0, -1),
    's': (0, 0)
}

def get_key(settings):
    tty.setraw(sys.stdin.fileno())
    rlist, _, _ = select.select([sys.stdin], [], [], 0.05)
    key = sys.stdin.read(1) if rlist else ''
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    return key


class DualTeleop(Node):
    def __init__(self):
        super().__init__('dual_teleop')
        self.pub_r1 = self.create_publisher(Twist, '/r1/cmd_vel', 10)
        self.pub_r2 = self.create_publisher(Twist, '/r2/cmd_vel', 10)

        self.speed = 0.4
        self.turn = 1.2

        print("\nDual Teleop Keyboard")
        print("---------------------------------------")
        print("Robot 1 (r1) controls — same as teleop_twist_keyboard:")
        print("  i: forward  ,: backward  j: left  l: right  k: stop")
        print("Robot 2 (r2) controls:")
        print("  W: forward  X: backward  A: left  D: right  S: stop")
        print("CTRL+C to quit\n")

    def publish_cmd(self, robot, x, th):
        msg = Twist()
        msg.linear.x = x * self.speed
        msg.angular.z = th * self.turn
        if robot == 1:
            self.pub_r1.publish(msg)
        else:
            self.pub_r2.publish(msg)

    def run(self):
        settings = termios.tcgetattr(sys.stdin)
        try:
            while True:
                key = get_key(settings).lower()
                if key in r1_bindings:
                    x, th = r1_bindings[key]
                    self.publish_cmd(1, x, th)
                elif key in r2_bindings:
                    x, th = r2_bindings[key]
                    self.publish_cmd(2, x, th)
                elif key == '\x03':  # Ctrl+C
                    break
        finally:
            self.publish_cmd(1, 0, 0)
            self.publish_cmd(2, 0, 0)
            termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)


def main(args=None):
    rclpy.init(args=args)
    node = DualTeleop()
    try:
        node.run()
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
