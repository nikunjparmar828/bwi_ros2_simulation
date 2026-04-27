#include "my_virtual_obstacle_layer/virtual_obstacle_layer.hpp"
#include <pluginlib/class_list_macros.hpp>
#include <cmath>

PLUGINLIB_EXPORT_CLASS(my_virtual_obstacle_layer::VirtualObstacleLayer,
                       nav2_costmap_2d::Layer)

namespace my_virtual_obstacle_layer
{

VirtualObstacleLayer::VirtualObstacleLayer() = default;

void VirtualObstacleLayer::onInitialize()
{
  auto node = node_.lock();
  if (!node) {
    RCLCPP_ERROR(rclcpp::get_logger("virtual_obstacle_layer"), "Failed to lock node");
    return;
  }

  sub_ = node->create_subscription<bwi_tasks_interface::msg::VirtualObstacle>(
    "/bender/virtual_obstacle", rclcpp::QoS(10),
    std::bind(&VirtualObstacleLayer::obstacleCallback, this, std::placeholders::_1));
  
  rclcpp::QoS qos(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_sensor_data));
  qos.best_effort();
  qos.history(RMW_QOS_POLICY_HISTORY_KEEP_LAST);
  qos.keep_last(10);
  
  amcl_sub_ = node->create_subscription<geometry_msgs::msg::PoseWithCovarianceStamped>(
      "/flexo/amcl_pose", qos,
      std::bind(&VirtualObstacleLayer::amclCallback, this, std::placeholders::_1));

  matchSize();
}

void VirtualObstacleLayer::amclCallback(const geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr msg)
{
  std::lock_guard<std::mutex> lock(amcl_mutex_);
  if (amcl_pose_received_) {
    prev_amcl_pose_ = amcl_pose_;
    prev_amcl_pose_valid_ = true;
  }
  amcl_pose_ = msg->pose.pose;
  amcl_pose_received_ = true;
}


void VirtualObstacleLayer::obstacleCallback(
  const bwi_tasks_interface::msg::VirtualObstacle::SharedPtr msg)
{
  active_ = msg->active;
  radius_ = msg->radius;
  // obstacle_offset_lst = msg->pose;
  // Clear previous data
  obstacles_.clear();

  // Generate 8 left-offset obstacles from this point along x-axis (for now)
  // double bx = msg->pose.position.x;
  // double by = msg->pose.position.y;

  // const double spacing = 0.5;
  // const double offset = 0.5;
  // const int count = 8;

  for (int i = 0; i < msg->poses.size(); ++i) {
    double px = msg->poses[i].position.x;
    double py = msg->poses[i].position.y;
    obstacles_.push_back({px, py});
  }
  // obstacles_.push_back({bx, by});
}

void VirtualObstacleLayer::updateBounds(
  double /*robot_x*/, double /*robot_y*/, double /*robot_yaw*/,
  double* min_x, double* min_y, double* max_x, double* max_y)
{
  if (active_ || prev_active_) {
    for (const auto& obs : obstacles_) {
      *min_x = std::min(*min_x, obs.x - radius_);
      *min_y = std::min(*min_y, obs.y - radius_);
      *max_x = std::max(*max_x, obs.x + radius_);
      *max_y = std::max(*max_y, obs.y + radius_);
    }
  }

  if (amcl_pose_received_) {
    std::lock_guard<std::mutex> lock(amcl_mutex_);
    *min_x = std::min(*min_x, amcl_pose_.position.x - amcl_circle_radius_);
    *min_y = std::min(*min_y, amcl_pose_.position.y - amcl_circle_radius_);
    *max_x = std::max(*max_x, amcl_pose_.position.x + amcl_circle_radius_);
    *max_y = std::max(*max_y, amcl_pose_.position.y + amcl_circle_radius_);
  }  
}

void VirtualObstacleLayer::updateCosts(
  nav2_costmap_2d::Costmap2D& master,
  int min_i, int min_j, int max_i, int max_j)
{

    if (amcl_pose_received_) {
    std::lock_guard<std::mutex> lock(amcl_mutex_);
    int rad_cells = static_cast<int>(amcl_circle_radius_ / master.getResolution());
  
    auto clear_or_draw_circle = [&](const geometry_msgs::msg::Pose& pose, uint8_t cost) {
      
      // std::cout << "************************************" << std::endl; 
      unsigned int cx, cy;

      if (!master.worldToMap(pose.position.x, pose.position.y, cx, cy)) return;
  
      for (int dx = -rad_cells; dx <= rad_cells; ++dx) {
        for (int dy = -rad_cells; dy <= rad_cells; ++dy) {
          if (std::hypot(dx, dy) > rad_cells) continue;
  
          int mx = cx + dx;
          int my = cy + dy;
          if (mx < min_i || mx >= max_i || my < min_j || my >= max_j) continue;
  
          master.setCost(mx, my, cost);
        }
      }
    };
  
    // Step 1: Clear previous pose (if valid)
    if (prev_amcl_pose_valid_) {
      clear_or_draw_circle(prev_amcl_pose_, nav2_costmap_2d::FREE_SPACE);
    }
  
    // Step 2: Draw new circle
    clear_or_draw_circle(amcl_pose_, nav2_costmap_2d::LETHAL_OBSTACLE);

  }

  if (!active_ && !prev_active_) return;

  for (const auto& obs : obstacles_) {
    unsigned int cx, cy;
    if (!master.worldToMap(obs.x, obs.y, cx, cy)) continue;

    int rad_cells = static_cast<int>(radius_ / master.getResolution());

    for (int dx = -rad_cells; dx <= rad_cells; ++dx) {
      for (int dy = -rad_cells; dy <= rad_cells; ++dy) {
        if (std::hypot(dx, dy) > rad_cells) continue;

        int mx = cx + dx;
        int my = cy + dy;
        if (mx < min_i || mx >= max_i || my < min_j || my >= max_j) continue;

        uint8_t cost = active_
          ? nav2_costmap_2d::LETHAL_OBSTACLE
          : nav2_costmap_2d::FREE_SPACE;
        master.setCost(mx, my, cost);
      }
    }
  }

  prev_active_ = active_;
}



}  // namespace my_virtual_obstacle_layer
