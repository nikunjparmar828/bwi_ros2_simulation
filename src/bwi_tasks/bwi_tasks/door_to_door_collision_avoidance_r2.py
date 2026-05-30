#!/usr/bin/env python3
"""
BWIbot Navigation Script for ROS2 Humble with Nav2

This script provides autonomous navigation with collision avoidance
using virtual obstacles (hallucination) for multi-robot scenarios.
"""

import argparse
import fcntl
import math
import os
import random
import threading
import time
import json
from typing import Optional

import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy

from action_msgs.msg import GoalStatus
from std_srvs.srv import Empty
from nav2_msgs.action import NavigateToPose, ComputePathToPose
from geometry_msgs.msg import PoseStamped, PoseWithCovarianceStamped, Point32, PolygonStamped
from sensor_msgs.msg import LaserScan
from std_msgs.msg import Bool
from bwi_perception_interface.msg import DlAmclCoords


class BWIbot(Node):
    """Main BWIbot navigation node for ROS2/Nav2."""

    def __init__(self,
                 detection_range: float = 8.0,
                 phhp_radius: float = 0.5122,
                 phhp_dr: float = 0.5661,
                 phhp_k_begin: float = 0.4842,
                 phhp_k_end: float = 0.5001):
        super().__init__('r2_bwibot_navigator')
        
        # Separate callback groups to avoid deadlocks
        self.nav_callback_group = ReentrantCallbackGroup()
        self.plan_callback_group = ReentrantCallbackGroup()
        self.service_callback_group = ReentrantCallbackGroup()

        # PHHP (Predictive Human-aware Path Planning) parameters
        self.phhp = False
        self.detection_range = detection_range
        self.phhp_radius = phhp_radius
        self.phhp_dr = phhp_dr
        self.phhp_k_begin = phhp_k_begin
        self.phhp_k_end = phhp_k_end
        
        self.distance_threshold = 0.8 # Need 0.5 + DL error in x-y axis

        self.opponent_location = np.zeros(2)  # (x, y)
        self.current_goal = PoseStamped()
        self.current_goal.header.frame_id = 'r2/map'

        # Lock for thread safety
        self._lock = threading.Lock()
        self._planning_in_progress = False
        self._pending_plan_request: Optional[PoseStamped] = None
        self._navigation_start_time: Optional[float] = None
        self._current_goal_handle = None
        self._proximity_reached = False

        # Nav2 NavigateToPose action client
        self._nav_client = ActionClient(
            self, NavigateToPose, 'r2/navigate_to_pose',
            callback_group=self.nav_callback_group
        )
        
        if not self._nav_client.wait_for_server(timeout_sec=60.0):
            raise TimeoutError("Nav2 NavigateToPose does not respond! Please check navigation stack.")
        
        self.get_logger().info("Connected to Nav2 NavigateToPose action server")

        # Nav2 ComputePathToPose action client (replaces GetPlan service)
        self._compute_path_client = ActionClient(
            self, ComputePathToPose, 'r2/compute_path_to_pose',
            callback_group=self.plan_callback_group
        )
        
        if not self._compute_path_client.wait_for_server(timeout_sec=10.0):
            self.get_logger().warn("ComputePathToPose action not available - path planning disabled")
            self._path_planning_available = False
        else:
            self.get_logger().info("Connected to Nav2 ComputePathToPose action server")
            self._path_planning_available = True

        # Service clients
        self.clear_costmaps_client = self.create_client(
            Empty, '/r2/global_costmap/clear_entirely_global_costmap',
            callback_group=self.service_callback_group
        )
        self.clear_local_costmap_client = self.create_client(
            Empty, '/r2/local_costmap/clear_entirely_local_costmap',
            callback_group=self.service_callback_group
        )
        self.clear_hallucination_client = self.create_client(
            Empty, '/r2/clear_virtual_circles',
            callback_group=self.service_callback_group
        )

        # Subscriber for opponent's position
        self.sub_opponent_amcl = self.create_subscription(
            DlAmclCoords,
            '/r1/amcl_pose_dl',
            self.amcl_cb_dl,
            10,
            callback_group=self.nav_callback_group
        )

        # Publisher for virtual obstacles
        self.pub_hallucination = self.create_publisher(
            PolygonStamped, '/r2/add_circles', 10
        )

        # Current robot pose (updated from feedback)
        self.current_pose: Optional[PoseStamped] = None
        self.is_navigating = False

        # Collision state
        self.is_collision = False
        self._collision_consecutive = 0

        self.create_subscription(Bool, '/v2collision', self._v2collision_cb, 10,
                                 callback_group=self.nav_callback_group)

        # Timer for periodic path checking (instead of blocking in feedback callback)
        self._path_check_timer = self.create_timer(
            0.5,  # Check every 500ms
            self._check_path_callback,
            callback_group=self.plan_callback_group
        )

    def _v2collision_cb(self, msg: Bool):
        with self._lock:
            if msg.data:
                self._collision_consecutive += 1
                if self._collision_consecutive >= 3:
                    self.is_collision = True
            else:
                self._collision_consecutive = 0

    def amcl_cb_dl(self, msg: PoseWithCovarianceStamped):
        """Subscribe to other robot's location."""
        with self._lock:
            self.opponent_location[0] = msg.x
            self.opponent_location[1] = msg.y

    def clear_costmaps(self):
        """Clear both global and local costmaps."""
        # Clear global costmap
        if self.clear_costmaps_client.service_is_ready():
            future = self.clear_costmaps_client.call_async(Empty.Request())
            # Don't block, just fire and forget
        else:
            self.get_logger().warn("Clear global costmap service not available")

        # Clear local costmap
        if self.clear_local_costmap_client.service_is_ready():
            future = self.clear_local_costmap_client.call_async(Empty.Request())
        else:
            self.get_logger().warn("Clear local costmap service not available")

    def clear_hallucination(self):
        """Clear virtual obstacles."""
        if self.clear_hallucination_client.service_is_ready():
            future = self.clear_hallucination_client.call_async(Empty.Request())
        else:
            self.get_logger().warn("Clear hallucination service not available")

    _GOAL_STATUS_NAMES = {
        GoalStatus.STATUS_UNKNOWN:   'UNKNOWN',
        GoalStatus.STATUS_ACCEPTED:  'ACCEPTED',
        GoalStatus.STATUS_EXECUTING: 'EXECUTING',
        GoalStatus.STATUS_CANCELING: 'CANCELING',
        GoalStatus.STATUS_SUCCEEDED: 'SUCCEEDED',
        GoalStatus.STATUS_CANCELED:  'CANCELED',
        GoalStatus.STATUS_ABORTED:   'ABORTED',
    }

    def send_goal_and_wait(self, x: float, y: float, yaw: float):
        """
        Send navigation goal and wait for completion.

        Returns:
            Tuple of (time_to_destination_seconds, status_string).
        """
        # Prepare goal
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.header.frame_id = 'r2/map'
        goal_msg.pose.header.stamp = self.get_clock().now().to_msg()
        goal_msg.pose.pose.position.x = x
        goal_msg.pose.pose.position.y = y
        goal_msg.pose.pose.orientation.z = math.sin(yaw / 2.0)
        goal_msg.pose.pose.orientation.w = math.cos(yaw / 2.0)

        # Store current goal for planning
        with self._lock:
            self.current_goal.pose = goal_msg.pose.pose
            self.current_goal.header = goal_msg.pose.header
            self.phhp = False
            self.is_navigating = True
            self.current_pose = None  # Reset stale pose so timer doesn't fire immediately
            self._navigation_start_time = self.get_clock().now().nanoseconds / 1e9

        start_time = self.get_clock().now()

        # Use threading events so we don't conflict with the MultiThreadedExecutor
        # that is already spinning this node in the background thread.
        goal_accepted_event = threading.Event()
        result_event = threading.Event()
        goal_handle_holder = [None]
        result_holder = [None]

        def _goal_response_cb(future):
            goal_handle_holder[0] = future.result()
            goal_accepted_event.set()

        send_goal_future = self._nav_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_cb
        )
        send_goal_future.add_done_callback(_goal_response_cb)

        # Block the main thread until the executor delivers the goal-acceptance callback
        goal_accepted_event.wait()
        goal_handle = goal_handle_holder[0]
        if not goal_handle.accepted:
            self.get_logger().error("Goal was rejected!")
            with self._lock:
                self.is_navigating = False
            return 0.0, 'REJECTED'

        self.get_logger().info("Goal accepted")

        with self._lock:
            self._current_goal_handle = goal_handle
            self._proximity_reached = False

        def _result_cb(future):
            result_holder[0] = future.result()
            result_event.set()

        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(_result_cb)

        timed_out = not result_event.wait(timeout=60.0)

        if timed_out:
            self.get_logger().warn("Goal timed out after 60s — cancelling")
            goal_handle.cancel_goal_async()
            result_event.wait(timeout=10.0)  # wait for cancel acknowledgement

        with self._lock:
            self.is_navigating = False
            proximity_done = self._proximity_reached
            self._current_goal_handle = None

        if timed_out:
            ttd = (self.get_clock().now() - start_time).nanoseconds / 1e9
            return ttd, 'TIMEOUT'

        ttd = (self.get_clock().now() - start_time).nanoseconds / 1e9
        status_code = result_holder[0].status if result_holder[0] is not None else GoalStatus.STATUS_UNKNOWN
        if proximity_done and status_code == GoalStatus.STATUS_CANCELED:
            status_code = GoalStatus.STATUS_SUCCEEDED
        status_str = self._GOAL_STATUS_NAMES.get(status_code, f'STATUS_{status_code}')

        # Clear virtual obstacles only if navigation completed successfully
        if status_code == GoalStatus.STATUS_SUCCEEDED:
            msg = PolygonStamped()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = 'r2/map'
            msg.polygon.points = [Point32(x=0.0, y=0.0, z=0.0)]
            self.pub_hallucination.publish(msg)
            # self.clear_hallucination()
            self.clear_costmaps()

        return ttd, status_str

    def feedback_cb(self, feedback_msg):
        """
        Process navigation feedback.
        
        NOTE: This callback should NOT block or call spin functions.
        We just store the current pose and let a timer handle path planning.
        """
        feedback = feedback_msg.feedback
        with self._lock:
            self.current_pose = feedback.current_pose

    def _check_path_callback(self):
        """
        Timer callback to periodically check path for conflicts.
        This runs in a separate callback group to avoid blocking.
        """
        handle_to_cancel = None
        current_pose = None
        opponent_loc = None

        with self._lock:
            if not self.is_navigating or self.current_pose is None:
                return

            # Proximity check: within 0.2m of goal position (orientation-agnostic)
            dx = self.current_pose.pose.position.x - self.current_goal.pose.position.x
            dy = self.current_pose.pose.position.y - self.current_goal.pose.position.y
            if (math.hypot(dx, dy) < 0.2
                    and self._current_goal_handle is not None
                    and not self._proximity_reached):
                self._proximity_reached = True
                handle_to_cancel = self._current_goal_handle
                self._current_goal_handle = None

            if handle_to_cancel is None:
                if self.phhp or not self._path_planning_available:
                    return

                # Give Nav2 2 seconds of uncontested planner access for the initial global
                # path. Without this, our ComputePathToPose requests preempt Nav2's internal
                # planning request on the planner server, causing retries and freezes.
                if self._navigation_start_time is not None:
                    now = self.get_clock().now().nanoseconds / 1e9
                    if now - self._navigation_start_time < 2.0:
                        return

                # Set flag to avoid duplicate requests
                if self._planning_in_progress:
                    return

                current_pose = self.current_pose
                opponent_loc = self.opponent_location.copy()
                self._planning_in_progress = True

        if handle_to_cancel is not None:
            self.get_logger().info("Within 0.2m of goal — cancelling Nav2 goal (position reached)")
            handle_to_cancel.cancel_goal_async()
            return

        # Request path plan (non-blocking)
        self._request_path_plan(current_pose, opponent_loc)

    def _request_path_plan(self, start_pose: PoseStamped, opponent_loc: np.ndarray):
        """
        Request a path plan asynchronously.
        """
        goal_msg = ComputePathToPose.Goal()
        goal_msg.start = start_pose
        goal_msg.goal = self.current_goal
        goal_msg.planner_id = ''
        goal_msg.use_start = True

        # Send goal asynchronously with a callback for the result
        future = self._compute_path_client.send_goal_async(goal_msg)
        future.add_done_callback(
            lambda f: self._on_path_goal_response(f, opponent_loc)
        )

    def _on_path_goal_response(self, future, opponent_loc: np.ndarray):
        """Handle response from ComputePathToPose goal request."""
        try:
            goal_handle = future.result()
            if not goal_handle.accepted:
                self.get_logger().debug("Path planning goal rejected")
                with self._lock:
                    self._planning_in_progress = False
                return

            # Get the result asynchronously
            result_future = goal_handle.get_result_async()
            result_future.add_done_callback(
                lambda f: self._on_path_result(f, opponent_loc)
            )
        except Exception as e:
            self.get_logger().debug(f"Path goal response error: {e}")
            with self._lock:
                self._planning_in_progress = False

    def _on_path_result(self, future, opponent_loc: np.ndarray):
        """Handle the path planning result."""
        try:
            result = future.result()
            if result is None:
                with self._lock:
                    self._planning_in_progress = False
                return

            path = result.result.path
            if len(path.poses) == 0:
                with self._lock:
                    self._planning_in_progress = False
                return

            # Convert to numpy array
            plan = np.array([
                [p.pose.position.x, p.pose.position.y]
                for p in path.poses
            ])

            # Process the plan for conflicts
            self._process_plan_for_conflicts(plan, opponent_loc)

        except Exception as e:
            self.get_logger().debug(f"Path result error: {e}")
        finally:
            with self._lock:
                self._planning_in_progress = False

    def _process_plan_for_conflicts(self, plan: np.ndarray, opponent_loc: np.ndarray):
        """Check if plan conflicts with opponent and generate virtual obstacles if needed."""
        with self._lock:
            if self.phhp:
                return  # Already generated obstacles

        try:
            # Check if plan overlaps with other robot
            distances = np.linalg.norm(plan - opponent_loc, axis=1)
            overlap_indices = np.argwhere(distances < self.distance_threshold)

            if len(overlap_indices) > 0:
                idx = overlap_indices[0][0]
                if idx > 0:
                    dist = np.linalg.norm(plan[1:idx+1] - plan[0:idx], axis=1).sum()
                else:
                    dist = 0.0

                with self._lock:
                    if not self.phhp and dist < self.detection_range:
                        self.generate_vo(
                            center=plan[:idx+1],
                            radius=self.phhp_radius,
                            dr=self.phhp_dr - self.phhp_radius,
                            k_begin=self.phhp_k_begin,
                            k_end=self.phhp_k_end
                        )
        except (IndexError, ValueError) as e:
            self.get_logger().debug(f"Plan processing error: {e}")

    def generate_vo(self, center: np.ndarray, radius: float, dr: float,
                    k_begin: float, k_end: float):
        """Generate virtual obstacles along the path."""
        if len(center) < 3:
            return

        dist = np.cumsum(np.linalg.norm(center[1:] - center[:-1], axis=1))
        if len(dist) == 0:
            return
            
        d_begin = dist[-1] * k_begin
        d_end = dist[-1] * k_end
        idx_begin, idx_end = np.searchsorted(dist, [d_begin, d_end])

        # Calculate center of virtual circles
        # if len(center) < 3:
        #     return
            
        dx, dy = (center[2:] - center[:-2]).T
        theta = np.arctan2(dy, dx) + np.pi / 2.0

        idx = slice(idx_begin, min(idx_end, len(theta)), 4)
        center_subset = center[1:-1][idx]  # Adjust for derivative offset
        theta_subset = theta[idx]

        if len(center_subset) == 0:
            return

        vos = center_subset + (radius + dr) * np.array([
            np.cos(theta_subset),
            np.sin(theta_subset)
        ]).T

        msg = PolygonStamped()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = 'r2/map'
        msg.polygon.points = [Point32(x=float(x), y=float(y), z=float(radius)) for (x, y) in vos]
        self.pub_hallucination.publish(msg)
        self.phhp = True
        self.get_logger().info(f"Generated {len(vos)} virtual obstacles for r2")

    def wait_for_r1_pose(self, timeout_sec: float = 30.0):
        """
        Block until one message arrives on /r1/amcl_pose and return (x, y, yaw).
        Uses TRANSIENT_LOCAL QoS to catch the last-known pose even if published
        before this node started.
        """
        event = threading.Event()
        result = [None]

        amcl_qos = QoSProfile(
            depth=1,
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
        )

        def _cb(msg: PoseWithCovarianceStamped):
            q = msg.pose.pose.orientation
            yaw = math.atan2(
                2.0 * (q.w * q.z + q.x * q.y),
                1.0 - 2.0 * (q.y * q.y + q.z * q.z)
            )
            result[0] = (msg.pose.pose.position.x, msg.pose.pose.position.y, yaw)
            event.set()

        sub = self.create_subscription(
            PoseWithCovarianceStamped, '/r1/amcl_pose', _cb, amcl_qos,
            callback_group=self.nav_callback_group,
        )

        self.get_logger().info("Waiting for /r1/amcl_pose to set goal...")
        if not event.wait(timeout=timeout_sec):
            self.get_logger().error("Timed out waiting for /r1/amcl_pose — using fallback pose")
            self.destroy_subscription(sub)
            return None

        self.destroy_subscription(sub)
        x, y, yaw = result[0]
        self.get_logger().info(f"r1 initial pose captured: x={x:.3f}, y={y:.3f}, yaw={yaw:.4f}")
        return x, y, yaw

    def shutdown(self):
        """Clean shutdown."""
        if self._path_check_timer:
            self._path_check_timer.cancel()


def _get_results_dir() -> str:
    results_dir = os.environ.get('BWI_RESULTS_DIR')
    if not results_dir:
        results_dir = os.path.expanduser('~/bwi_results')
    if not results_dir:
        raise RuntimeError('BWI_RESULTS_DIR is not set and no fallback results directory is available')
    os.makedirs(results_dir, exist_ok=True)
    return results_dir


def _get_result_path(generation: int, episode_no: int, sample_id: int, robot: str) -> str:
    directory = os.path.join(_get_results_dir(), f'gen_{generation}')
    os.makedirs(directory, exist_ok=True)
    return os.path.join(directory, f'ep_{episode_no}_sample_{sample_id}_{robot}.jsonl')


def _normalize_status(status: str, collision_state: bool, exception_obj: Optional[Exception] = None) -> str:
    normalized = status.strip().upper() if status else 'UNKNOWN'
    if normalized in ('UNKNOWN', 'EXECUTING', 'ACCEPTED'):
        if exception_obj is not None:
            return 'unknown_error'
        if collision_state:
            return 'collision'
        return 'unknown_error'
    if normalized == 'TIMEOUT':
        return 'timeout'
    if normalized in ('CANCELED', 'CANCELING'):
        return 'canceled'
    if normalized == 'ABORTED':
        return 'aborted'
    if normalized == 'SUCCEEDED':
        return 'succeed'
    return 'unknown_error'


def _write_episode_result(generation: int,
                          episode_no: int,
                          sample_id: int,
                          robot: str,
                          ttd: Optional[float],
                          status: str,
                          collision: bool,
                          r: float,
                          dr: float,
                          k_begin: float,
                          k_end: float,
                          start_delay: float,
                          detection_range: float,
                          hallway_type: str,
                          spawn_distance: int,
                          domain_id: str,
                          wall_time_s: float) -> None:
    result = {
        'generation': generation,
        'episode_no': episode_no,
        'sample_id': sample_id,
        'robot': robot,
        'domain_id': domain_id,
        'ttd': None if ttd is None else float(ttd),
        'status': status,
        'collision': bool(collision),
        'theta': {
            'r': float(r),
            'dr': float(dr),
            'k_begin': float(k_begin),
            'k_end': float(k_end),
        },
        'dr_params': {
            'start_delay': float(start_delay),
            'detection_range': float(detection_range),
            'hallway_type': str(hallway_type),
            'spawn_distance': int(spawn_distance),
        },
        'wall_time_s': float(wall_time_s),
    }
    result_path = _get_result_path(generation, episode_no, sample_id, robot)
    tmp_path = f'{result_path}.tmp'
    with open(tmp_path, 'w', encoding='utf-8') as f:
        json.dump(result, f, separators=(',', ':'))
        f.write('\n')
        f.flush()
        os.fsync(f.fileno())
    os.replace(tmp_path, result_path)


# Door locations - use corridor-side door locations
# DOOR_LIST = {
#     # 'd2_124a': [19.30291419521769, -32.70447247145192, 0.6296055895210749],
#     # 'd2_124b': [-5.059958055494525, 20.378526062378103, -0.7356600083201567],
    
#     # 'd2_202y': [-18.878875359340327, 12.275528078382258, -0.7685878605231046],
#     # 'd2_202z': [20.090579969461402, 11.495413368607087, -0.7284376556491271],
#     # Straight line tests
#     'd2_304a': [-20.0, -1.0,0.0],
#     'd2_202x': [-30.0, -1.0, 3.14159],
#     # 'd2_304a': [0.0,-1.0,0.0],
# }


def main(args=None):
    parser = argparse.ArgumentParser(description='BWIbot r2 navigation with PHHP collision avoidance')
    parser.add_argument('--detection_range', type=float, default=8.0,    metavar='M',    help='Distance at which PHHP activates (default: 8.0 m)')
    parser.add_argument('--phhp_radius',     type=float, default=0.5122, metavar='M',    help='Virtual obstacle radius (default: 0.5122)')
    parser.add_argument('--phhp_dr',         type=float, default=0.5661, metavar='M',    help='Virtual obstacle radial offset (default: 0.5661)')
    parser.add_argument('--phhp_k_begin',    type=float, default=0.4842, metavar='FRAC', help='Path fraction where obstacles begin (default: 0.4842)')
    parser.add_argument('--phhp_k_end',      type=float, default=0.5001, metavar='FRAC', help='Path fraction where obstacles end (default: 0.5001)')
    parser.add_argument('--start_delay',     type=float, default=0.0,    metavar='SEC',  help='Seconds to wait after capturing goal before navigating (default: 0.0)')
    parser.add_argument('--hallway_type',    type=str,   default='SH1', metavar='STR',  help='Hallway type for result metadata (default: SH1)')
    parser.add_argument('--spawn_distance', type=int,   default=10,   metavar='M',    help='Spawn distance for result metadata (default: 10)')
    parser.add_argument('--sample_id',      type=int,   required=True,  metavar='N',    help='Sample id for this CMA-ES evaluation')
    parser.add_argument('--max_episode_seconds', type=float, default=180.0, metavar='SEC', help='Maximum wall time for this episode (default: 180)')
    parser.add_argument('--generation',      type=int,   required=True,  metavar='N',    help='Training generation number')
    parser.add_argument('--episode_no',      type=int,   required=True,  metavar='N',    help='Episode number within the generation')
    parsed, ros_args = parser.parse_known_args(args)

    rclpy.init(args=ros_args if ros_args else None)

    robot = BWIbot(
        detection_range=parsed.detection_range,
        phhp_radius=parsed.phhp_radius,
        phhp_dr=parsed.phhp_dr,
        phhp_k_begin=parsed.phhp_k_begin,
        phhp_k_end=parsed.phhp_k_end,
    )
    
    # Use MultiThreadedExecutor to handle multiple callback groups
    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(robot)

    # Spin in a separate thread so main loop can run
    spin_thread = threading.Thread(target=executor.spin, daemon=True)
    spin_thread.start()
    
    try:
        episode_start = time.time()
        remaining = parsed.max_episode_seconds - (time.time() - episode_start)
        goal = robot.wait_for_r1_pose(timeout_sec=max(0.1, remaining)) if hasattr(robot, 'wait_for_r1_pose') else robot.wait_for_r1_pose()
        if goal is None:
            robot.get_logger().error("Cannot determine goal — exiting")
            status = 'unknown_error'
            wall_time_s = time.time() - episode_start
            _write_episode_result(
                parsed.generation,
                parsed.episode_no,
                parsed.sample_id,
                'r2',
                ttd,
                _normalize_status(status, False, None),
                False,
                parsed.phhp_radius,
                parsed.phhp_dr,
                parsed.phhp_k_begin,
                parsed.phhp_k_end,
                parsed.start_delay,
                parsed.detection_range,
                parsed.hallway_type,
                parsed.spawn_distance,
                os.environ.get('ROS_DOMAIN_ID', '0'),
                wall_time_s,
            )
            raise SystemExit(1)
        x, y, yaw = goal

        if parsed.start_delay > 0.0:
            robot.get_logger().info(f"Waiting {parsed.start_delay:.1f}s before starting navigation...")
            time.sleep(parsed.start_delay)

        ttd = 0.0
        status = 'UNKNOWN'
        while rclpy.ok():
            robot.get_logger().info(f"Heading to --> x:{x:.3f}, y:{y:.3f}, yaw:{yaw:.4f}")

            remaining = parsed.max_episode_seconds - (time.time() - episode_start)
            if remaining <= 0.0:
                ttd = time.time() - episode_start
                status = 'TIMEOUT'
                break
            ttd, status = robot.send_goal_and_wait(x, y, yaw, timeout_sec=max(0.1, remaining))

            collision_state = robot.is_collision
            robot.get_logger().info(f"COLLISION: {collision_state}")

            robot.get_logger().info(f"Navigation finished: status={status}, time={ttd:.2f}s")

            if status == 'SUCCEEDED':
                robot.get_logger().info(f"Reached the goal in {ttd:.2f} seconds")
                break
            elif status == 'TIMEOUT':
                robot.get_logger().warn(f"Goal cancelled after 60s timeout ({ttd:.2f}s elapsed)")
                break
            else:
                robot.get_logger().warn(f"Goal not reached (status={status}), retrying...")
                break

        wall_time_s = time.time() - episode_start
        _write_episode_result(
            parsed.generation,
            parsed.episode_no,
            parsed.sample_id,
            'r2',
            ttd,
            _normalize_status(status, robot.is_collision, None),
            robot.is_collision,
            parsed.phhp_radius,
            parsed.phhp_dr,
            parsed.phhp_k_begin,
            parsed.phhp_k_end,
            parsed.start_delay,
            parsed.detection_range,
            parsed.hallway_type,
            parsed.spawn_distance,
            os.environ.get('ROS_DOMAIN_ID', '0'),
            wall_time_s,
        )

    except KeyboardInterrupt:
        robot.get_logger().info("Shutting down...")
        wall_time_s = time.time() - episode_start
        _write_episode_result(
            parsed.generation,
            parsed.episode_no,
            parsed.sample_id,
            'r2',
            ttd,
            _normalize_status('ABORTED', robot.is_collision, None),
            robot.is_collision,
            parsed.phhp_radius,
            parsed.phhp_dr,
            parsed.phhp_k_begin,
            parsed.phhp_k_end,
            parsed.start_delay,
            parsed.detection_range,
            parsed.hallway_type,
            parsed.spawn_distance,
            os.environ.get('ROS_DOMAIN_ID', '0'),
            wall_time_s,
        )
    except Exception as exc:
        robot.get_logger().error(f'Unhandled exception: {exc}')
        wall_time_s = time.time() - episode_start
        _write_episode_result(
            parsed.generation,
            parsed.episode_no,
            parsed.sample_id,
            'r2',
            ttd,
            _normalize_status('UNKNOWN', robot.is_collision if hasattr(robot, 'is_collision') else False, exc),
            robot.is_collision if hasattr(robot, 'is_collision') else False,
            parsed.phhp_radius,
            parsed.phhp_dr,
            parsed.phhp_k_begin,
            parsed.phhp_k_end,
            parsed.start_delay,
            parsed.detection_range,
            parsed.hallway_type,
            parsed.spawn_distance,
            os.environ.get('ROS_DOMAIN_ID', '0'),
            wall_time_s,
        )
        raise
    finally:
        robot.shutdown()
        executor.shutdown()
        robot.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()