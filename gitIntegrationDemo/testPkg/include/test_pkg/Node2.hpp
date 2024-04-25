
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int8.hpp"
#include "test_pkg/srv/service1.hpp"
#include "test_pkg/srv/goal_service.hpp"

// add custom imports below
// end custom imports
namespace test_pkg {
class Node2 : public rclcpp::Node
{
    public:
        Node2();
        // add custom public methods below

        // end custom public methods 
    private:
        rclcpp::Publisher<std_msgs::msg::Int8>::SharedPtr topic1_pub;
        rclcpp::Service<test_pkg::srv::GoalService>::SharedPtr goal_service_server;
        rclcpp::Client<test_pkg::srv::Service1>::SharedPtr service1_client;
        void goal_service_srv_callback(const std::shared_ptr<test_pkg::srv::GoalService::Request> request,
            std::shared_ptr<test_pkg::srv::GoalService::Response> response);

        // add custom private methods below

        // end custom private methods
};
}
