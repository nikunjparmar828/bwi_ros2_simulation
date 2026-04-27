#include "my_virtual_obstacle_layer/virtual_obstacle_layer.hpp"
#include <pluginlib/class_list_macros.hpp>
#include <cmath>
#include <mutex>
#include <vector>
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "geometry_msgs/msg/polygon_stamped.hpp"

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

  // add_circle_sub_ = node->create_subscription<geometry_msgs::msg::PolygonStamped>(
  //   "add_circles", rclcpp::QoS(10),
  //   std::bind(&VirtualObstacleLayer::addCircleCallback, this, std::placeholders::_1));

  // matchSize();

  // Gets "/r1/local_costmap/local_costmap" → extract just "/r1"
  std::string full_ns = node->get_namespace();
  // Take everything up to the second '/'
  std::string robot_ns = full_ns.substr(0, full_ns.find('/', 1));
  std::string topic = robot_ns + "/add_circles";  // → "/r1/add_circles"

  RCLCPP_INFO(node->get_logger(), "Subscribing to: %s", topic.c_str());

  add_circle_sub_ = node->create_subscription<geometry_msgs::msg::PolygonStamped>(
    topic, rclcpp::QoS(10),
    std::bind(&VirtualObstacleLayer::addCircleCallback, this, std::placeholders::_1));

  matchSize();  
}

void VirtualObstacleLayer::addCircleCallback(
  const geometry_msgs::msg::PolygonStamped::SharedPtr msg)
{
  std::lock_guard<std::mutex> lock(circle_mutex_);
  for (const auto &p : msg->polygon.points) {

    // Special case: 0,0,0 clears all circles
    if (p.x == 0.0 && p.y == 0.0 && p.z == 0.0) {
      circle_obstacles_.clear();
      RCLCPP_INFO(rclcpp::get_logger("virtual_obstacle_layer"),
                  "Received (0,0,0) → cleared all virtual obstacles");
      return;
    }

    CircleObstacle c;
    c.x = static_cast<double>(p.x);
    c.y = static_cast<double>(p.y);
    c.radius = static_cast<double>(p.z);     // z carries radius
    circle_obstacles_.push_back(c);
  }

  // ensure layer updates even if VirtualObstacle 'active_' is false
}

void VirtualObstacleLayer::updateBounds(
  double /*robot_x*/, double /*robot_y*/, double /*robot_yaw*/,
  double* min_x, double* min_y, double* max_x, double* max_y)
{
  // Obstacles persist until explicitly cleared
  for (const auto& c : circle_obstacles_) {
    *min_x = std::min(*min_x, c.x - c.radius);
    *min_y = std::min(*min_y, c.y - c.radius);
    *max_x = std::max(*max_x, c.x + c.radius);
    *max_y = std::max(*max_y, c.y + c.radius);
  }
}

void VirtualObstacleLayer::updateCosts(
  nav2_costmap_2d::Costmap2D& master,
  int min_i, int min_j, int max_i, int max_j)
{
  std::lock_guard<std::mutex> lock(circle_mutex_);
  if (circle_obstacles_.empty()) {
    return;
  }

  for (const auto& c : circle_obstacles_) {
    unsigned int cx, cy;
    if (!master.worldToMap(c.x, c.y, cx, cy)) continue;

    int rad_cells = static_cast<int>(c.radius / master.getResolution());
    for (int dx = -rad_cells; dx <= rad_cells; ++dx) {
      for (int dy = -rad_cells; dy <= rad_cells; ++dy) {
        if (std::hypot(dx, dy) > rad_cells) continue;

        int mx = cx + dx;
        int my = cy + dy;
        if (mx < min_i || mx >= max_i || my < min_j || my >= max_j) continue;

        master.setCost(mx, my, nav2_costmap_2d::LETHAL_OBSTACLE);
      }
    }
  }

  // prev_active_ = active_;
}



}  // namespace my_virtual_obstacle_layer
