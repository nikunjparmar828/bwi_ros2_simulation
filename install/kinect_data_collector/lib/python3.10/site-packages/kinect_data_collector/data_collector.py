#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import cv2
from cv_bridge import CvBridge
import os
import threading
import time
import sys
import select
from datetime import datetime

class KinectRecorder(Node):
    def __init__(self):
        super().__init__('kinect_rgb_recorder')

        # ✅ Correct RGB topic
        self.subscription = self.create_subscription(
            Image,
            '/r1/nav_kinect/image_raw',
            self.image_callback,
            10
        )

        self.bridge = CvBridge()
        self.recording = False
        self.last_save_time = 0.0

        self.save_dir = '/home/bwidemo/bwi_ros2_simulation/kinectdataset/rgb'
        os.makedirs(self.save_dir, exist_ok=True)

        self.current_time = str(datetime.now())
        self.latest_image = None

        threading.Thread(
            target=self.keyboard_listener,
            daemon=True
        ).start()

        self.get_logger().info(
            "Subscribed to /r1/nav_kinect/image_raw (RGB)"
        )

    def image_callback(self, msg):
        self.latest_image = msg

        if self.recording and (time.time() - self.last_save_time) >= 0.5:
            self.save_image()
            self.last_save_time = time.time()

    def save_image(self):
        if self.latest_image is None:
            return

        # 🔑 Handle both rgb8 and bgr8 safely
        encoding = self.latest_image.encoding.lower()

        if encoding == 'rgb8':
            cv_image = self.bridge.imgmsg_to_cv2(
                self.latest_image, 'rgb8'
            )
            cv_image = cv2.cvtColor(cv_image, cv2.COLOR_RGB2BGR)

        elif encoding == 'bgr8':
            cv_image = self.bridge.imgmsg_to_cv2(
                self.latest_image, 'bgr8'
            )
        else:
            self.get_logger().error(
                f"Unsupported image encoding: {encoding}"
            )
            return

        filename = os.path.join(
            self.save_dir,
            f"rgb_{self.current_time}.png"
        )

        cv2.imwrite(filename, cv_image)
        self.get_logger().info(
            f"Saved {filename} ({encoding})"
        )

        # self.image_count += 1
        self.current_time = str(datetime.now())

    def keyboard_listener(self):
        self.get_logger().info(
            "Press 'r' to start, 's' to stop, Ctrl+C to exit"
        )
        while rclpy.ok():
            if sys.stdin in select.select([sys.stdin], [], [], 0)[0]:
                key = sys.stdin.read(1)
                if key.lower() == 'r':
                    self.recording = True
                    self.get_logger().info("Recording started")
                elif key.lower() == 's':
                    self.recording = False
                    self.get_logger().info("Recording stopped")
            time.sleep(0.1)

def main(args=None):
    rclpy.init(args=args)
    node = KinectRecorder()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
