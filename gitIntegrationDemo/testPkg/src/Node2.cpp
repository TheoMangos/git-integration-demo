
#include "test_pkg/Node2.h"

namespace test_pkg {

Node2::Node2() : Node("node2") {
    topic1_pub = this->create_publisher<std_msgs::msg::Int8>("Topic1", 10);
    goal_service_server = this->create_service<test_pkg::srv::GoalService>(
        "goal_service", 
        std::bind(&Node2::goal_service_srv_callback, this, std::placeholders::_1, std::placeholders::_2)
    );    service1_client = this->create_client<test_pkg::srv::Service1>("service1");
    // add additional constructor functionality below

    // end additional constructor functionality
}

void Node2::goal_service_srv_callback(
    const std::shared_ptr<test_pkg::srv::GoalService::Request> request,
    std::shared_ptr<test_pkg::srv::GoalService::Response> response
) {
    // customize goal_service_srv_callback below

    // end goal_service_srv_callback customization
}

// add custom method implementations below

// end custom method implementations
}
int main(int argc, char * argv[])
{
    // customize main function below
    // Note: editing any of the generated code here could break the node.
    // take precaution when editing
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<test_pkg::Node2>());
    rclcpp::shutdown();
    return 0;
    // end main customization
}
