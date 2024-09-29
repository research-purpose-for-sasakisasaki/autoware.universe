#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/point_cloud2_iterator.hpp>

class PointCloud2Publisher : public rclcpp::Node
{
public:
  PointCloud2Publisher()
  : Node("pointcloud2_publisher")
  {
    publisher_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("pointcloud", 10);
    timer_ = this->create_wall_timer(
      std::chrono::milliseconds(100), 
      std::bind(&PointCloud2Publisher::publish_pointcloud, this));
  }

private:
  void publish_pointcloud()
  {
    auto message = sensor_msgs::msg::PointCloud2();
    message.header.frame_id = "map";
    message.header.stamp = this->now();
    message.height = 1080;  // Number of rows
    message.width = 1920;   // Number of columns

    // Define the point cloud fields: x, y, z, r, g, b
    sensor_msgs::PointCloud2Modifier modifier(message);
    modifier.setPointCloud2FieldsByString(2, "xyz", "rgb");

    sensor_msgs::PointCloud2Iterator<float> iter_x(message, "x");
    sensor_msgs::PointCloud2Iterator<float> iter_y(message, "y");
    sensor_msgs::PointCloud2Iterator<float> iter_z(message, "z");
    sensor_msgs::PointCloud2Iterator<uint8_t> iter_r(message, "r");
    sensor_msgs::PointCloud2Iterator<uint8_t> iter_g(message, "g");
    sensor_msgs::PointCloud2Iterator<uint8_t> iter_b(message, "b");

    // Populate the point cloud with dummy data
    for (int i = 0; i < message.height * message.width; ++i, ++iter_x, ++iter_y, ++iter_z, ++iter_r, ++iter_g, ++iter_b)
    {
      *iter_x = static_cast<float>(i % message.width) / message.width;
      *iter_y = static_cast<float>(i / message.width) / message.height;
      *iter_z = 0.0f; // Set z to 0 to simulate a flat surface
      *iter_r = 255;  // Red
      *iter_g = 255;  // Green
      *iter_b = 255;  // Blue
    }

    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    printf("Publishing large PointCloud2 message: height=%d, width=%d\n", message.height, message.width);
    RCLCPP_INFO(this->get_logger(), "Publishing large PointCloud2 message: height=%d, width=%d", message.height, message.width);
    publisher_->publish(message);
  }

  rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PointCloud2Publisher>());
  rclcpp::shutdown();
  return 0;
}
