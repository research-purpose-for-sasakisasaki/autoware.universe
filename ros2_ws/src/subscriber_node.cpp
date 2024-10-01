#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>

class PointCloud2Subscriber : public rclcpp::Node
{
public:
  PointCloud2Subscriber()
  : Node("pointcloud2_subscriber")
  {
    subscription_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
      "pointcloud", 10, std::bind(&PointCloud2Subscriber::topic_callback, this, std::placeholders::_1));
  }

private:
  void topic_callback(const sensor_msgs::msg::PointCloud2::SharedPtr msg) const
  {
    RCLCPP_INFO(this->get_logger(), "Received PointCloud2 message with width %d, height %d", msg->width, msg->height);
  }

  rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PointCloud2Subscriber>());
  rclcpp::shutdown();
  return 0;
}

