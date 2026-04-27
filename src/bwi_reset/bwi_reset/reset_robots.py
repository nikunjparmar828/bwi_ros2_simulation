#!/usr/bin/env python3
"""
Standalone BWIbot Reset Node
============================
Resets both robots to their initial positions without touching the nav script.

What it does (in order):
  1. Cancels any active Nav2 goal on r1 and r2
  2. Calls /reset_world to respawn both robots in Gazebo
  3. Calls /r1/set_initial_pose and /r2/set_initial_pose to re-localise AMCL
  4. Clears all costmaps for both robots
  5. Exits — both robots are now ready to receive new goals

Usage:
    ros2 run bwi_reset reset_robots [hallway_type]

    hallway_type: SH1 SH2 SH3 LH1 LH2 LH3  (default: SH1)
"""

import argparse
import math
import threading
import time

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from geometry_msgs.msg import PolygonStamped, Point32

from std_srvs.srv import Empty
from nav2_msgs.srv import SetInitialPose


# ---------------------------------------------------------------------------
# Spawn positions per hallway type — keep in sync with segbot_v2.launch.py
#   Each entry: (x, y, z, yaw_rad) for r1 and r2
# ---------------------------------------------------------------------------
HALLWAY_SPAWN_POSES = {
    #              r1                              r2
    'SH1': (('-25.0', '-1.0', '0.0', '3.14159'), ('-35.0', '-1.0', '0.0', '0.0')),
    'SH2': (('-5.0',  '3.0',  '0.0', '1.57079'), ('-5.0',  '13.0', '0.0', '-1.57079')),
    'SH3': (('17.8',  '-5.0', '0.0', '-1.57079'), ('17.8', '-15.0', '0.0', '1.57079')),
    'LH1': (('-15.0', '-1.0', '0.0', '3.14159'),  ('-20.0', '4.0',  '0.0', '-1.57079')),
    'LH2': (('-10.0', '-1.0', '0.0', '0.0'),       ('-5.0',  '4.0',  '0.0', '-1.57079')),
    'LH3': (('22.7',  '-1.0', '0.0', '3.14159'),  ('17.7',  '4.0',  '0.0', '-1.57079')),
}


def _apply_spawn_distance(pose_r1, pose_r2, spawn_distance: float):
    """
    Place each robot spawn_distance/2 from the hallway junction along its
    own corridor axis.

    spawn_distance is the PATH distance between the robots (sum of each
    robot's distance to the junction corner), not Euclidean.  This matches
    how the table was designed — all hallway types have a 10 m default
    (5 m per robot from the junction).

    For straight hallways (SH): junction = midpoint, both robots on same axis.
    For L-shaped hallways (LH): junction = corner where the two corridors meet;
        one robot moves in x only, the other in y only.
    """
    x1, y1, z1, Y1 = (float(v) for v in pose_r1)
    x2, y2, z2, Y2 = (float(v) for v in pose_r2)

    # Facing directions — round() snaps cos/sin of axis-aligned yaw to -1/0/+1
    fx1, fy1 = round(math.cos(Y1)), round(math.sin(Y1))
    fx2, fy2 = round(math.cos(Y2)), round(math.sin(Y2))

    # Path distance = Manhattan distance (correct for both SH and LH)
    default_dist = abs(x1 - x2) + abs(y1 - y2)

    # Find the junction/centre that each robot faces toward
    if fx1 * fx2 + fy1 * fy2 < 0:
        # Anti-parallel yaws → straight hallway: junction is the midpoint
        cx, cy = (x1 + x2) / 2.0, (y1 + y2) / 2.0
    else:
        # Perpendicular yaws → L-shaped hallway: corner where corridors cross
        if fy1 == 0:    # r1 in x-corridor, r2 in y-corridor
            cx, cy = x2, y1
        else:           # r1 in y-corridor, r2 in x-corridor
            cx, cy = x1, y2

    # Each robot sits spawn_distance/2 from the junction, backward along its corridor
    half = spawn_distance / 2.0
    new_x1 = cx - fx1 * half   # away = opposite of facing direction
    new_y1 = cy - fy1 * half
    new_x2 = cx - fx2 * half
    new_y2 = cy - fy2 * half

    return (
        (new_x1, new_y1, z1, Y1),
        (new_x2, new_y2, z2, Y2),
    ), default_dist


def _build_robots(hallway_type: str, spawn_distance: float = None) -> dict:
    pose_r1, pose_r2 = HALLWAY_SPAWN_POSES[hallway_type]

    if spawn_distance is not None:
        (pose_r1, pose_r2), _ = _apply_spawn_distance(pose_r1, pose_r2, spawn_distance)

    x1, y1, z1, Y1 = pose_r1
    x2, y2, z2, Y2 = pose_r2
    return {
        'r1': {'gazebo_model': 'segbot_v2_r1',
               'x': float(x1), 'y': float(y1), 'z': float(z1), 'yaw': float(Y1)},
        'r2': {'gazebo_model': 'segbot_v2_r2',
               'x': float(x2), 'y': float(y2), 'z': float(z2), 'yaw': float(Y2)},
    }


def yaw_to_quat(yaw: float):
    """Convert yaw to quaternion (x, y, z, w)."""
    return 0.0, 0.0, math.sin(yaw / 2.0), math.cos(yaw / 2.0)


def wait_for_future(future, timeout: float = 5.0) -> bool:
    """Block until a ROS2 future completes. Returns True if completed in time."""
    event = threading.Event()
    future.add_done_callback(lambda _: event.set())
    return event.wait(timeout=timeout)


class BWIbotResetter(Node):

    def __init__(self, robots: dict):
        super().__init__('bwibot_resetter')
        self._robots = robots
        self._cb_group = ReentrantCallbackGroup()

        # ── Nav2 SetInitialPose for each robot ────────────────────────────────
        self._initial_pose_clients = {
            robot: self.create_client(
                SetInitialPose,
                f'/{robot}/set_initial_pose',
                callback_group=self._cb_group,
            )
            for robot in self._robots
        }

        # ── Costmap clear clients for each robot ──────────────────────────────
        self._costmap_clients = {}
        for robot in self._robots:
            self._costmap_clients[f'{robot}_global'] = self.create_client(
                Empty,
                f'/{robot}/global_costmap/clear_entirely_global_costmap',
                callback_group=self._cb_group,
            )
            self._costmap_clients[f'{robot}_local'] = self.create_client(
                Empty,
                f'/{robot}/local_costmap/clear_entirely_local_costmap',
                callback_group=self._cb_group,
            )

        self.pub_hallucination_r1 = self.create_publisher(
            PolygonStamped, '/r1/add_circles', 10
        )
        self.pub_hallucination_r2 = self.create_publisher(
            PolygonStamped, '/r2/add_circles', 10
        )

    # =========================================================================
    # Step 1 — Cancel active Nav2 goals
    # =========================================================================

    def _cancel_goals(self):
        """
        Cancel all active NavigateToPose goals for each robot.
        If the cancel service is not available (e.g. no nav script is running),
        we skip gracefully — there is nothing to cancel.
        """
        from action_msgs.srv import CancelGoal
        from builtin_interfaces.msg import Time

        self.get_logger().info("Step 1: Cancelling active navigation goals...")

        any_cancelled = False
        for robot in self._robots:
            cancel_service = f'/{robot}/navigate_to_pose/_action/cancel_goal'
            cancel_client = self.create_client(
                CancelGoal, cancel_service,
                callback_group=self._cb_group,
            )

            # If the service isn't up, there's no active goal — skip silently
            if not cancel_client.wait_for_service(timeout_sec=2.0):
                self.get_logger().info(
                    f"[{robot}] No active navigation found — nothing to cancel"
                )
                continue

            # Zero UUID + zero stamp = cancel ALL goals on this action server
            req = CancelGoal.Request()
            req.goal_info.goal_id.uuid = [0] * 16
            req.goal_info.stamp = Time()

            future = cancel_client.call_async(req)
            completed = wait_for_future(future, timeout=5.0)

            if completed:
                self.get_logger().info(f"[{robot}] Goals cancelled ✓")
                any_cancelled = True
            else:
                self.get_logger().warn(f"[{robot}] Cancel timed out — continuing anyway")

        if any_cancelled:
            # Give Nav2 time to stop sending cmd_vel before Gazebo teleports
            self.get_logger().info("Waiting 2s for Nav2 to process cancellations...")
            time.sleep(2.0)
        else:
            self.get_logger().info("No active goals — skipping cancellation wait")

    # =========================================================================
    # Step 2 — Reset Gazebo world
    # =========================================================================

    def _reset_gazebo(self) -> bool:
        """
        Teleport only r1 and r2 back to their starting positions using
        /set_entity_state from the gazebo_ros_state plugin.
        This does NOT touch walls, objects, or anything else in the world.
        """
        from gazebo_msgs.srv import SetEntityState
        from gazebo_msgs.msg import EntityState

        self.get_logger().info("Step 2: Teleporting robots in Gazebo...")

        set_entity_client = self.create_client(
            SetEntityState, '/set_entity_state',
            callback_group=self._cb_group,
        )

        if not set_entity_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().error(
                "/set_entity_state not available!\n"
                "Add this plugin to your .world file inside <world>:\n"
                "  <plugin name='gazebo_ros_state' filename='libgazebo_ros_state.so'>\n"
                "    <ros><namespace>/</namespace></ros>\n"
                "    <update_rate>1.0</update_rate>\n"
                "  </plugin>"
            )
            return False

        all_ok = True
        for robot, cfg in self._robots.items():
            qx, qy, qz, qw = yaw_to_quat(cfg['yaw'])

            req = SetEntityState.Request()
            req.state.name                  = cfg['gazebo_model']
            req.state.pose.position.x       = cfg['x']
            req.state.pose.position.y       = cfg['y']
            req.state.pose.position.z       = cfg['z']
            req.state.pose.orientation.x    = qx
            req.state.pose.orientation.y    = qy
            req.state.pose.orientation.z    = qz
            req.state.pose.orientation.w    = qw
            # Zero velocities so the robot doesn't drift after teleport
            req.state.twist.linear.x        = 0.0
            req.state.twist.linear.y        = 0.0
            req.state.twist.linear.z        = 0.0
            req.state.twist.angular.x       = 0.0
            req.state.twist.angular.y       = 0.0
            req.state.twist.angular.z       = 0.0
            req.state.reference_frame       = 'world'

            future = set_entity_client.call_async(req)
            if wait_for_future(future, timeout=5.0):
                self.get_logger().info(f"[{robot}] Gazebo teleport ✓")
            else:
                self.get_logger().error(f"[{robot}] Gazebo teleport timed out!")
                all_ok = False

        return all_ok

    # =========================================================================
    # Step 3 — Re-localise AMCL
    # =========================================================================

    def _set_initial_poses(self):
        """
        Call /rN/set_initial_pose for each robot so AMCL knows where the
        robot is after the Gazebo reset. We wait 1 second after the Gazebo
        reset so the physics has settled and the laser scans are fresh.
        """
        self.get_logger().info("Step 3: Setting initial poses for AMCL...")
        time.sleep(1.0)   # let Gazebo settle

        for robot, cfg in self._robots.items():
            client = self._initial_pose_clients[robot]

            if not client.wait_for_service(timeout_sec=5.0):
                self.get_logger().error(
                    f"[{robot}] set_initial_pose service not available!"
                )
                continue

            qx, qy, qz, qw = yaw_to_quat(cfg['yaw'])

            req = SetInitialPose.Request()
            req.pose.header.frame_id         = f'{robot}/map'
            req.pose.header.stamp            = self.get_clock().now().to_msg()
            req.pose.pose.pose.position.x    = cfg['x']
            req.pose.pose.pose.position.y    = cfg['y']
            req.pose.pose.pose.position.z    = cfg['z']
            req.pose.pose.pose.orientation.x = qx
            req.pose.pose.pose.orientation.y = qy
            req.pose.pose.pose.orientation.z = qz
            req.pose.pose.pose.orientation.w = qw

            # Small covariance — we know exactly where the robot is
            cov     = [0.0] * 36
            cov[0]  = 0.25   # x
            cov[7]  = 0.25   # y
            cov[35] = 0.06   # yaw
            req.pose.pose.covariance = cov

            future = client.call_async(req)
            if wait_for_future(future, timeout=5.0):
                self.get_logger().info(f"[{robot}] Initial pose set ✓")
            else:
                self.get_logger().error(f"[{robot}] set_initial_pose timed out!")

    # =========================================================================
    # Step 4 — Clear costmaps
    # =========================================================================

    def _clear_costmaps(self):
        """Clear global and local costmaps for both robots."""
        self.get_logger().info("Step 4: Clearing costmaps...")

        for key, client in self._costmap_clients.items():
            if client.wait_for_service(timeout_sec=3.0):
                future = client.call_async(Empty.Request())
                wait_for_future(future, timeout=3.0)
                self.get_logger().info(f"  {key} costmap cleared ✓")
            else:
                self.get_logger().warn(f"  {key} costmap service not ready — skipping")

    def clear_virtual_circles(self):
        msg_r1 = PolygonStamped()
        msg_r1.header.stamp = self.get_clock().now().to_msg()
        msg_r1.header.frame_id = 'r1/map'
        msg_r1.polygon.points = [Point32(x=0.0, y=0.0, z=0.0)]
        self.pub_hallucination_r1.publish(msg_r1)

        msg_r2 = PolygonStamped()
        msg_r2.header.stamp = self.get_clock().now().to_msg()
        msg_r2.header.frame_id = 'r2/map'
        msg_r2.polygon.points = [Point32(x=0.0, y=0.0, z=0.0)]
        self.pub_hallucination_r2.publish(msg_r2)

    # =========================================================================
    # Entry point
    # =========================================================================

    def run_reset(self) -> bool:
        self.get_logger().info("=" * 50)
        self.get_logger().info("  BWIbot Reset Starting")
        self.get_logger().info("=" * 50)

        self._cancel_goals()
        ok = self._reset_gazebo()
        self._set_initial_poses()
        self._clear_costmaps()
        self.clear_virtual_circles()

        self.get_logger().info("=" * 50)
        self.get_logger().info("  Reset complete — robots ready for new goals")
        self.get_logger().info("=" * 50)
        return ok


def main(args=None):
    parser = argparse.ArgumentParser(description='Reset BWIbot robots to a hallway spawn pose')
    parser.add_argument(
        '--hallway_type', nargs='?', default='SH1',
        choices=list(HALLWAY_SPAWN_POSES.keys()),
        help='Hallway scenario (default: SH1)',
    )
    parser.add_argument(
        '--spawn_distance', type=float, default=None, metavar='METERS',
        help='Distance between robots in metres. Defaults to the hallway-specific table value.',
    )
    parsed, ros_args = parser.parse_known_args(args)

    # Log distance info before building robots so user can verify
    if parsed.spawn_distance is not None:
        raw_r1, raw_r2 = HALLWAY_SPAWN_POSES[parsed.hallway_type]
        _, default_dist = _apply_spawn_distance(raw_r1, raw_r2, parsed.spawn_distance)
        print(f"[reset_robots] hallway={parsed.hallway_type}  "
              f"default_dist={default_dist:.2f}m  spawn_distance={parsed.spawn_distance:.2f}m  "
              f"each robot offset={(parsed.spawn_distance - default_dist) / 2.0:+.2f}m")

    robots = _build_robots(parsed.hallway_type, parsed.spawn_distance)

    rclpy.init(args=ros_args if ros_args else None)

    node = BWIbotResetter(robots)

    # Spin in background so service/action callbacks resolve while
    # run_reset() blocks the main thread using threading.Event.
    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(node)
    spin_thread = threading.Thread(target=executor.spin, daemon=True)
    spin_thread.start()

    # Brief pause so all clients finish discovering their servers
    time.sleep(1.0)

    node.get_logger().info(f"Hallway type: {parsed.hallway_type}")
    node.get_logger().info(f"r1 pose: {robots['r1']}")
    node.get_logger().info(f"r2 pose: {robots['r2']}")

    node.run_reset()

    # Keep node alive briefly so any latched messages are received
    time.sleep(1.0)

    executor.shutdown()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
