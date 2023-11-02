#include <iostream>
#include <functional>
#include <string>

class MyClass {
public:
    // Define the static std::function
    static std::function<void(const std::string&)> myFunction;

    // Assign a lambda function to the static std::function
    static void setLambdaFunction() {
        myFunction = [](const std::string& str) {
            std::cout << "Lambda Function: " << str << std::endl;
            };
    }
};

// Define the static member outside the class
std::function<void(const std::string&)> MyClass::myFunction = nullptr; // Initialize as nullptr

int main1() {
    // Setting the lambda function to the static std::function
    MyClass::setLambdaFunction();

    // Using the static std::function through the class scope
    MyClass::myFunction("Hello, world!");

    return 0;
}