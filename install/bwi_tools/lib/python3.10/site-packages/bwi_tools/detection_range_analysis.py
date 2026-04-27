#!/usr/bin/env python3
"""
Detection range analysis for YOLOv8-based robot detection.

Controls:
  s  — start collecting data
  q  — stop collecting and show the plot

Detectors:
  r1 detects r2 → publishes /r2/amcl_pose_dl
  r2 detects r1 → publishes /r1/amcl_pose_dl
"""

import math
import sys
import termios
import threading
import tty

import matplotlib
matplotlib.use('TkAgg')
import matplotlib.pyplot as plt
import numpy as np
import rclpy
from bwi_perception_interface.msg import DlAmclCoords
from geometry_msgs.msg import PoseWithCovarianceStamped
from rclpy.node import Node
from rclpy.qos import DurabilityPolicy, QoSProfile, ReliabilityPolicy


def _read_char() -> str:
    """Read a single keypress from stdin without requiring Enter."""
    fd = sys.stdin.fileno()
    old = termios.tcgetattr(fd)
    try:
        tty.setraw(fd)
        return sys.stdin.read(1)
    finally:
        termios.tcsetattr(fd, termios.TCSADRAIN, old)


class RangeAnalyzer(Node):
    def __init__(self):
        super().__init__('range_analyzer_node')

        self.r1_amcl_topic    = '/r1/amcl_pose'
        self.r2_amcl_topic    = '/r2/amcl_pose'
        self.r1_amcl_dl_topic = '/r1/amcl_pose_dl'  # r2 detects r1
        self.r2_amcl_dl_topic = '/r2/amcl_pose_dl'  # r1 detects r2

        amcl_qos = QoSProfile(
            depth=10,
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
        )

        # Ground-truth poses
        self.r1_x = self.r1_y = None
        self.r2_x = self.r2_y = None

        self._lock = threading.Lock()
        self._collecting = False  # toggled by 's' / 'q'

        # Collected samples: (inter_robot_range, detection_error)
        self.r1_detects_r2_samples = []  # r1 sees r2
        self.r2_detects_r1_samples = []  # r2 sees r1

        self.create_subscription(
            PoseWithCovarianceStamped, self.r1_amcl_topic, self._r1_amcl_cb, amcl_qos
        )
        self.create_subscription(
            PoseWithCovarianceStamped, self.r2_amcl_topic, self._r2_amcl_cb, amcl_qos
        )
        self.create_subscription(
            DlAmclCoords, self.r2_amcl_dl_topic, self._r2_dl_cb, 10
        )
        self.create_subscription(
            DlAmclCoords, self.r1_amcl_dl_topic, self._r1_dl_cb, 10
        )

        self.get_logger().info("Ready.  Press 's' to start collecting, 'q' to stop and plot.")

    # ── AMCL callbacks ──────────────────────────────────────────────────────

    def _r1_amcl_cb(self, msg: PoseWithCovarianceStamped):
        with self._lock:
            self.r1_x = msg.pose.pose.position.x
            self.r1_y = msg.pose.pose.position.y

    def _r2_amcl_cb(self, msg: PoseWithCovarianceStamped):
        with self._lock:
            self.r2_x = msg.pose.pose.position.x
            self.r2_y = msg.pose.pose.position.y

    # ── DL (YOLOv8) callbacks ───────────────────────────────────────────────

    def _r2_dl_cb(self, msg: DlAmclCoords):
        """r1 detected r2 — store sample only when collecting."""
        with self._lock:
            if not self._collecting:
                return
            if None in (self.r1_x, self.r1_y, self.r2_x, self.r2_y):
                return
            inter_range = math.hypot(self.r2_x - self.r1_x, self.r2_y - self.r1_y)
            error = math.hypot(msg.x - self.r2_x, msg.y - self.r2_y)
            self.r1_detects_r2_samples.append((inter_range, error))

    def _r1_dl_cb(self, msg: DlAmclCoords):
        """r2 detected r1 — store sample only when collecting."""
        with self._lock:
            if not self._collecting:
                return
            if None in (self.r1_x, self.r1_y, self.r2_x, self.r2_y):
                return
            inter_range = math.hypot(self.r2_x - self.r1_x, self.r2_y - self.r1_y)
            error = math.hypot(msg.x - self.r1_x, msg.y - self.r1_y)
            self.r2_detects_r1_samples.append((inter_range, error))

    # ── Control ──────────────────────────────────────────────────────────────

    def start_collecting(self):
        with self._lock:
            self.r1_detects_r2_samples.clear()
            self.r2_detects_r1_samples.clear()
            self._collecting = True
        self.get_logger().info("▶ Collecting — press 'q' to stop and plot.")

    def stop_collecting(self):
        with self._lock:
            self._collecting = False
            n1 = len(self.r1_detects_r2_samples)
            n2 = len(self.r2_detects_r1_samples)
        self.get_logger().info(f'■ Stopped. {n1} r1→r2 samples, {n2} r2→r1 samples. Plotting...')

    # ── Plotting ─────────────────────────────────────────────────────────────

    def plot(self):
        with self._lock:
            s1 = list(self.r1_detects_r2_samples)
            s2 = list(self.r2_detects_r1_samples)

        fig, axes = plt.subplots(1, 2, figsize=(14, 6))
        fig.suptitle('YOLOv8 Detection Error vs. Inter-Robot Range', fontsize=14)

        datasets = [
            (s1, axes[0], 'r1 detects r2', 'steelblue'),
            (s2, axes[1], 'r2 detects r1', 'tomato'),
        ]

        for samples, ax, title, color in datasets:
            if not samples:
                ax.set_title(f'{title}\n(no data)')
                continue

            ranges = np.array([s[0] for s in samples])
            errors = np.array([s[1] for s in samples])

            ax.scatter(ranges, errors, alpha=0.3, s=10, color=color, label='samples')

            # Binned mean ± std in 0.5 m buckets
            bin_edges = np.arange(0, ranges.max() + 0.5, 0.5)
            bin_centers, means, stds = [], [], []
            for lo, hi in zip(bin_edges[:-1], bin_edges[1:]):
                mask = (ranges >= lo) & (ranges < hi)
                if mask.sum() >= 3:
                    bin_centers.append((lo + hi) / 2)
                    means.append(errors[mask].mean())
                    stds.append(errors[mask].std())

            if bin_centers:
                bc = np.array(bin_centers)
                mn = np.array(means)
                sd = np.array(stds)
                ax.plot(bc, mn, 'k-o', markersize=4, linewidth=1.5, label='mean error')
                ax.fill_between(bc, mn - sd, mn + sd, alpha=0.2, color=color, label='±1 std')

            ax.axhline(0.3, color='orange', linestyle='--', linewidth=1, label='0.3 m threshold')

            ax.set_xlabel('Inter-robot range (m)')
            ax.set_ylabel('Detection error (m)')
            ax.set_title(title)
            ax.legend(fontsize=8)
            ax.grid(True, alpha=0.3)
            ax.set_xlim(left=0)
            ax.set_ylim(bottom=0)

            med_err = np.median(errors)
            best_range = ranges[errors.argmin()]
            ax.text(
                0.98, 0.97,
                f'n={len(samples)}  median err={med_err:.2f}m\nbest range≈{best_range:.1f}m',
                transform=ax.transAxes, ha='right', va='top', fontsize=8,
                bbox=dict(boxstyle='round', facecolor='white', alpha=0.7),
            )

        plt.tight_layout()
        plt.savefig('/tmp/detection_range_analysis.png', dpi=150)
        self.get_logger().info('Plot saved to /tmp/detection_range_analysis.png')
        plt.show()


def _keyboard_loop(node: RangeAnalyzer, stop_event: threading.Event):
    """Blocking loop that reads single keypresses and drives the node."""
    while not stop_event.is_set():
        ch = _read_char()
        if ch == 's':
            node.start_collecting()
        elif ch == 'q':
            node.stop_collecting()
            node.plot()
            stop_event.set()
        elif ch == '\x03':  # Ctrl-C
            stop_event.set()


def main(args=None):
    rclpy.init(args=args)
    node = RangeAnalyzer()

    stop_event = threading.Event()

    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(node)
    spin_thread = threading.Thread(target=executor.spin, daemon=True)
    spin_thread.start()

    try:
        _keyboard_loop(node, stop_event)
    except KeyboardInterrupt:
        pass
    finally:
        executor.shutdown()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
