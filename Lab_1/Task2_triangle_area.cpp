// Task 2: Develop a program triangle_area.cpp that takes the length of one side of an equilateral triangle as input and calculates its area. 
// Use the formula: Area = (√3 / 4) × side × side. 
// Hint: Use a double type variable for both the side length and the area. Use the constant value 1.732 instead of √3.

#include <iostream>

int main() {
    double side, area;
    std::cout << "Enter the side length of the equilateral triangle: ";
    std::cin >> side;
    area = (1.732 / 4) * side * side;
    std::cout << "Area of the triangle is: " << area;
    return 0;
}
