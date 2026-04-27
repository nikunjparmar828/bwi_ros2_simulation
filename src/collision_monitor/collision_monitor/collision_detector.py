#!/usr/bin/env python3

import math
import numpy as np
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseWithCovarianceStamped
from nav_msgs.msg import OccupancyGrid
from std_msgs.msg import Bool
from rclpy.qos import (QoSProfile, QoSReliabilityPolicy,
                        QoSHistoryPolicy, QoSDurabilityPolicy)

# ---------------------------------------------------------------------------
# Robot footprint in base_link frame (meters)
# Source: physical segbot_v2 dimensions
# ---------------------------------------------------------------------------
FOOTPRINT = np.array([
    [-0.46, -0.27],
    [-0.24, -0.32],
    [ 0.24, -0.32],
    [ 0.26, -0.27],
    [ 0.26,  0.27],
    [ 0.24,  0.32],
    [-0.24,  0.32],
    [-0.46,  0.27],
], dtype=float)

# Extra margin added to every vertex (outward from centroid).
# Accounts for AMCL localisation error and ensures that genuine contact
# always produces a measurable polygon overlap.
FOOTPRINT_PADDING = 0.08  # metres

def _inflate(poly: np.ndarray, padding: float) -> np.ndarray:
    centroid = poly.mean(axis=0)
    dirs = poly - centroid
    norms = np.linalg.norm(dirs, axis=1, keepdims=True)
    return poly + (dirs / norms) * padding

FOOTPRINT_PADDED = _inflate(FOOTPRINT, FOOTPRINT_PADDING)

# Bounding-circle radius for fast pre-rejection before polygon check
_FOOTPRINT_RADIUS = float(np.max(np.linalg.norm(FOOTPRINT_PADDED, axis=1)))

# Map cells with value >= this are treated as occupied obstacles
_OCCUPIED_THRESHOLD = 65


# ---------------------------------------------------------------------------
# Geometry helpers
# ---------------------------------------------------------------------------

def _transform_footprint(x: float, y: float, yaw: float) -> np.ndarray:
    """Rotate and translate the padded footprint polygon into the world frame."""
    cos_y, sin_y = math.cos(yaw), math.sin(yaw)
    R = np.array([[cos_y, -sin_y], [sin_y, cos_y]])
    return (R @ FOOTPRINT_PADDED.T).T + np.array([x, y])


def _polygons_overlap(p1: np.ndarray, p2: np.ndarray) -> bool:
    """
    Separating Axis Theorem (SAT) for two convex polygons.
    Returns True if they overlap (i.e. are in collision).
    """
    for poly in (p1, p2):
        n = len(poly)
        for i in range(n):
            edge = poly[(i + 1) % n] - poly[i]
            axis = np.array([-edge[1], edge[0]])
            norm = np.linalg.norm(axis)
            if norm < 1e-10:
                continue
            axis /= norm
            proj1 = p1 @ axis
            proj2 = p2 @ axis
            if proj1.max() < proj2.min() or proj2.max() < proj1.min():
                return False   # separating axis found → no collision
    return True


def _point_in_polygon(px: float, py: float, poly: np.ndarray) -> bool:
    """Ray-casting point-in-polygon test."""
    inside = False
    n = len(poly)
    j = n - 1
    for i in range(n):
        xi, yi = poly[i]
        xj, yj = poly[j]
        if ((yi > py) != (yj > py)) and (px < (xj - xi) * (py - yi) / (yj - yi) + xi):
            inside = not inside
        j = i
    return inside


# ---------------------------------------------------------------------------
# Node
# ---------------------------------------------------------------------------

class CollisionDetector(Node):

    def __init__(self):
        super().__init__('collision_detector_node')

        amcl_qos = QoSProfile(
            reliability=QoSReliabilityPolicy.RELIABLE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=10,
            durability=QoSDurabilityPolicy.TRANSIENT_LOCAL,
        )
        map_qos = QoSProfile(
            reliability=QoSReliabilityPolicy.RELIABLE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=1,
            durability=QoSDurabilityPolicy.TRANSIENT_LOCAL,
        )

        self._r1_pose = None   # (x, y, yaw)
        self._r2_pose = None
        self._map: OccupancyGrid = None

        self.create_subscription(PoseWithCovarianceStamped, '/r1/amcl_pose', self._r1_cb, amcl_qos)
        self.create_subscription(PoseWithCovarianceStamped, '/r2/amcl_pose', self._r2_cb, amcl_qos)
        # Both robots use the same static map; /r1/map is sufficient
        self.create_subscription(OccupancyGrid, '/r1/map', self._map_cb, map_qos)

        self._pub = self.create_publisher(Bool, 'v2collision', 10)

        self.get_logger().info(
            f'Collision Detector started | footprint radius={_FOOTPRINT_RADIUS:.3f} m'
        )

    # ── pose callbacks ─────────────────────────────────────────────────────

    @staticmethod
    def _yaw_from_quat(q) -> float:
        return math.atan2(
            2.0 * (q.w * q.z + q.x * q.y),
            1.0 - 2.0 * (q.y * q.y + q.z * q.z),
        )

    def _r1_cb(self, msg: PoseWithCovarianceStamped):
        p = msg.pose.pose
        self._r1_pose = (p.position.x, p.position.y, self._yaw_from_quat(p.orientation))
        self._check()

    def _r2_cb(self, msg: PoseWithCovarianceStamped):
        p = msg.pose.pose
        self._r2_pose = (p.position.x, p.position.y, self._yaw_from_quat(p.orientation))
        self._check()

    def _map_cb(self, msg: OccupancyGrid):
        self._map = msg
        self.get_logger().info(
            f'Map received: {msg.info.width}x{msg.info.height} @ {msg.info.resolution:.3f} m/cell',
            once=True,
        )

    # ── collision logic ────────────────────────────────────────────────────

    def _check(self):
        # Need at least one robot pose before we can do anything useful
        if self._r1_pose is None and self._r2_pose is None:
            return

        collision = False
        reason = ''

        # 1. Each active robot independently vs static map obstacles
        if self._map is not None:
            for pose, name in ((self._r1_pose, 'r1'), (self._r2_pose, 'r2')):
                if pose is None:
                    continue
                if self._footprint_hits_obstacle(_transform_footprint(*pose)):
                    collision = True
                    reason = f'{name} ↔ static obstacle'
                    break

        # 2. Robot-robot collision — only when both poses are known
        if not collision and self._r1_pose is not None and self._r2_pose is not None:
            dist = math.hypot(
                self._r1_pose[0] - self._r2_pose[0],
                self._r1_pose[1] - self._r2_pose[1],
            )
            if dist <= 2.0 * _FOOTPRINT_RADIUS:
                fp1 = _transform_footprint(*self._r1_pose)
                fp2 = _transform_footprint(*self._r2_pose)
                if _polygons_overlap(fp1, fp2):
                    collision = True
                    reason = 'r1 ↔ r2 robot-robot collision'

        if collision:
            self.get_logger().warn(f'Collision detected: {reason}')

        out = Bool()
        out.data = collision
        self._pub.publish(out)

    def _footprint_hits_obstacle(self, fp: np.ndarray) -> bool:
        """Check if any occupied map cell centre falls inside the footprint polygon."""
        m = self._map
        res = m.info.resolution
        ox = m.info.origin.position.x
        oy = m.info.origin.position.y
        width = m.info.width
        height = m.info.height

        # Fast O(8) check: any footprint vertex inside an occupied cell?
        for vx, vy in fp:
            col = math.floor((vx - ox) / res)
            row = math.floor((vy - oy) / res)
            if 0 <= col < width and 0 <= row < height:
                if m.data[row * width + col] >= _OCCUPIED_THRESHOLD:
                    return True

        # Footprint bounding box → grid cell range
        min_x, min_y = fp.min(axis=0)
        max_x, max_y = fp.max(axis=0)

        col_min = max(0, math.floor((min_x - ox) / res))
        col_max = min(width - 1, math.ceil((max_x - ox) / res))
        row_min = max(0, math.floor((min_y - oy) / res))
        row_max = min(height - 1, math.ceil((max_y - oy) / res))

        for row in range(row_min, row_max + 1):
            for col in range(col_min, col_max + 1):
                val = m.data[row * width + col]
                if val < _OCCUPIED_THRESHOLD:
                    continue
                # World-frame centre of this cell
                cx = ox + (col + 0.5) * res
                cy = oy + (row + 0.5) * res
                if _point_in_polygon(cx, cy, fp):
                    return True
        return False


def main(args=None):
    rclpy.init(args=args)
    node = CollisionDetector()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
