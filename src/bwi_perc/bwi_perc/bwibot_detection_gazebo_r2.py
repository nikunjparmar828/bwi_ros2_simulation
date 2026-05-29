#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import PoseWithCovarianceStamped
from bwi_perception_interface.msg import DlAmclCoords 
from cv_bridge import CvBridge

import cv2
import numpy as np
import math
from ultralytics import YOLO
from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy


class BwibotDetection(Node):
    def __init__(self):
        super().__init__('bwibot_detection_node_r2')

        # ---------- TOPICS ----------
        self.rgb_topic   = '/r2/nav_kinect/image_raw'
        self.depth_topic = '/r2/nav_kinect/depth/image_raw'
        self.amcl_topic  = '/r2/amcl_pose'
        self.r1_amcl_topic  = '/r1/amcl_pose'
        self.r1_amcl_topic_dl  = '/r1/amcl_pose_dl'

        # ---------- MODEL ----------
        import os
        default_model = os.path.join(os.environ.get('BWI_WORKSPACE', '/workspace'), 'models', 'robot_obb.pt')
        self.declare_parameter('model_path', default_model)
        self.model_path = self.get_parameter('model_path').get_parameter_value().string_value
        self.conf_thresh = 0.4

        self.model = YOLO(self.model_path)
        
        self.device = 0 if cv2.cuda.getCudaEnabledDeviceCount() > 0 else "cpu"

        # ---------- CAMERA INTRINSICS ----------
        self.fx = 590.0
        self.fy = 590.0
        self.cx = 320.0
        self.cy = 240.0

        # Camera pose relative to robot base
        self.cam_x = 0.0
        self.cam_y = 0.13
        self.cam_z = 0.6

        # ---------- STATE ----------
        self.bridge = CvBridge()
        self.rgb = None
        self.depth = None

        self.robot_x = None
        self.robot_y = None
        self.r1_x = None 
        self.r1_y = None 
        self.robot_yaw = None

        amcl_qos = QoSProfile(
            depth=10,
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
        )

        # ---------- SUBS ----------
        self.create_subscription(Image, self.rgb_topic, self.rgb_cb, 5)
        self.create_subscription(Image, self.depth_topic, self.depth_cb, 5)
        self.create_subscription(PoseWithCovarianceStamped, self.amcl_topic, self.amcl_cb, amcl_qos)
        self.create_subscription(PoseWithCovarianceStamped, self.r1_amcl_topic, self.r1_amcl_cb, amcl_qos)

        self.r1_amcl_dl_pub = self.create_publisher(DlAmclCoords, self.r1_amcl_topic_dl, 10)

        # ---------- TIMER ----------
        self.timer = self.create_timer(0.1, self.run_once)
        self._tick = 0

        self.get_logger().info("BWIBot Detection started")

    # ================= CALLBACKS =================
    def rgb_cb(self, msg):
        try:
            self.rgb = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        except Exception as e:
            self.get_logger().error(f'RGB error: {e}')

    def depth_cb(self, msg):
        try:
            if msg.encoding == '16UC1':
                self.depth = self.bridge.imgmsg_to_cv2(msg, 'passthrough').astype(np.float32) / 1000.0
            elif msg.encoding == '32FC1':
                self.depth = self.bridge.imgmsg_to_cv2(msg, 'passthrough')
        except Exception as e:
            self.get_logger().error(f'Depth error: {e}')

    def amcl_cb(self, msg):
        self.robot_x = msg.pose.pose.position.x
        self.robot_y = msg.pose.pose.position.y

        q = msg.pose.pose.orientation
        siny = 2.0 * (q.w * q.z + q.x * q.y)
        cosy = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)
        self.robot_yaw = math.atan2(siny, cosy)

    def r1_amcl_cb(self, msg):
        self.r1_x = msg.pose.pose.position.x
        self.r1_y = msg.pose.pose.position.y

    # ================= MAIN LOOP =================
    def run_once(self):
        self._tick += 1
        log_now = (self._tick % 50 == 0)  # log every 5 s at 10 Hz

        if self.rgb is None or self.depth is None or self.robot_x is None:
            if log_now:
                self.get_logger().warn(
                    f'[r2 perc] waiting — rgb={self.rgb is not None} '
                    f'depth={self.depth is not None} '
                    f'amcl={self.robot_x is not None}'
                )
            return

        frame = cv2.resize(self.rgb, (640, 480))
        depth = cv2.resize(self.depth, (640, 480))

        results = self.model(
            frame,
            conf=self.conf_thresh,
            device=self.device,
            imgsz=640,
            half=(self.device != "cpu"),
            verbose=False
        )

        n_det = len(results[0].obb) if results[0].obb is not None else 0
        if log_now:
            self.get_logger().info(f'[r2 perc] YOLO detections this frame: {n_det}')

        if results[0].obb is None or n_det == 0:
            return

        for obb in results[0].obb.xyxyxyxy:
            pts = obb.cpu().numpy().astype(np.float32)

            # --------- OBB CENTERLINE ---------
            pts_sorted = pts[np.argsort(pts[:, 1])]
            top_mid = (pts_sorted[0] + pts_sorted[1]) / 2.0
            bot_mid = (pts_sorted[2] + pts_sorted[3]) / 2.0

            v_dir = bot_mid - top_mid
            v_norm = np.linalg.norm(v_dir)
            if v_norm < 1e-6:
                continue
            v_dir /= v_norm

            center = np.mean(pts, axis=0)

            # --------- WALK 15 CM DOWN ---------
            target_dist = 0.15
            accumulated = 0.0
            step_px = 1.0

            curr = center.copy()
            Z = None

            while accumulated < target_dist:
                curr += v_dir * step_px
                u, v = int(curr[0]), int(curr[1])

                if u < 0 or v < 0 or u >= 640 or v >= 480:
                    break

                z_curr = depth[v, u]
                if not np.isfinite(z_curr) or z_curr <= 0:
                    continue

                accumulated += z_curr / self.fy * step_px
                Z = z_curr

            if Z is None:
                self.get_logger().warn('[r2 perc] depth walk returned no valid Z — depth image may be invalid at detection region')
                continue

            cx, cy = int(curr[0]), int(curr[1])

            # -------- CAMERA FRAME --------
            X_cam = (cx - self.cx) * Z / self.fx
            Z_cam = Z

            # -------- ROBOT BASE FRAME --------
            x_base = Z_cam + self.cam_x
            y_base = -X_cam + self.cam_y

            # -------- MAP FRAME --------
            x_map = self.robot_x + (
                x_base * math.cos(self.robot_yaw)
                - y_base * math.sin(self.robot_yaw)
            )
            y_map = self.robot_y + (
                x_base * math.sin(self.robot_yaw)
                + y_base * math.cos(self.robot_yaw)
            )

            # -------- VISUALIZATION --------
            # cv2.polylines(frame, [pts.astype(int)], True, (255, 0, 0), 2)
            # cv2.circle(frame, (cx, cy), 5, (0, 0, 255), -1)
            # cv2.line(frame, tuple(center.astype(int)), (cx, cy), (0, 255, 255), 2)

            # label = f"Z={Z:.2f}m | map=({x_map:.2f},{y_map:.2f}) | r1=({self.r1_x:.2f}, {self.r1_y:.2f})"

            # x1, y1 = int(np.min(pts[:,0])), int(np.min(pts[:,1]))
            # cv2.putText(frame, label, (x1, y1 - 8),
            #             cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

            # Publishing detected robot's coords on /r2/amcl_pose_dl --> r2 is the other robot here
            msg = DlAmclCoords()
            msg.x = x_map
            msg.y = y_map
            msg.depth = float(Z)
            self.r1_amcl_dl_pub.publish(msg)

        # cv2.imshow("BWIBot Detection", frame)
        # cv2.waitKey(1)


def main(args=None):
    rclpy.init(args=args)
    node = BwibotDetection()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
