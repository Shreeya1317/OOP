Write a program to input thr radius of a circle and calculate its area and circumference. 
#include <iostream>
#include <cmath>
#define PI 3.14159

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    std::cout << "Area = " << area << std::endl;
    std::cout << "Circumference = " << circumference << std::endl;

    return 0;
}