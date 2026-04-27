#ifndef MY_VIRTUAL_OBSTACLE_LAYER__VIRTUAL_OBSTACLE_LAYER_HPP_
#define MY_VIRTUAL_OBSTACLE_LAYER__VIRTUAL_OBSTACLE_LAYER_HPP_

#include <nav2_costmap_2d/layer.hpp>
#include <rclcpp/rclcpp.hpp>
#include "bwi_tasks_interface/msg/virtual_obstacle.hpp"
#include <vector>
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "geometry_msgs/msg/polygon_stamped.hpp"

namespace my_virtual_obstacle_layer
{

class VirtualObstacleLayer : public nav2_costmap_2d::Layer
{
public:
  VirtualObstacleLayer();

  void onInitialize() override;

  void updateBounds(
    double robot_x, double robot_y, double robot_yaw,
    double* min_x, double* min_y, double* max_x, double* max_y) override;

  void updateCosts(
    nav2_costmap_2d::Costmap2D& master,
    int min_i, int min_j, int max_i, int max_j) override;

  void reset() override {}
  bool isClearable() override { return false; }

private:
  // void obstacleCallback(const bwi_tasks_interface::msg::VirtualObstacle::SharedPtr msg);

  // void amclCallback(const geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr msg);
  void addCircleCallback(const geometry_msgs::msg::PolygonStamped::SharedPtr msg);

  struct Obstacle {
    double x;
    double y;
  };

  std::vector<Obstacle> obstacles_;
  // double radius_{0.25};
  // bool active_{false};
  // bool prev_active_{false};

  rclcpp::Subscription<bwi_tasks_interface::msg::VirtualObstacle>::SharedPtr sub_;
  
  rclcpp::Subscription<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr amcl_sub_;

  rclcpp::Subscription<geometry_msgs::msg::PolygonStamped>::SharedPtr add_circle_sub_;

  geometry_msgs::msg::Pose amcl_pose_;
  std::mutex amcl_mutex_;
  std::mutex circle_mutex_;
  double amcl_circle_radius_ = 0.25;  // For 0.5 meter diameter
  bool amcl_pose_received_ = false;
  
  geometry_msgs::msg::Pose prev_amcl_pose_;
  bool prev_amcl_pose_valid_ = false;
  
  struct CircleObstacle {
    double x;
    double y;
    double radius;
    rclcpp::Time expire_time;   // from header.stamp
  };  
  std::vector<CircleObstacle> circle_obstacles_;
  // double prev_obstacle_x_ = std::numeric_limits<double>::quiet_NaN();
  // double prev_obstacle_y_ = std::numeric_limits<double>::quiet_NaN();
  // double prev_obstacle_radius_ = std::numeric_limits<double>::quiet_NaN();
};

}  // namespace my_virtual_obstacle_layer

#endif  // MY_VIRTUAL_OBSTACLE_LAYER__VIRTUAL_OBSTACLE_LAYER_HPP_
