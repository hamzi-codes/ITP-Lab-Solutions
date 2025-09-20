// hurricane_if.cpp
#include <iostream>

int main() {
    int speed;
    std::cout << "Enter wind speed (mph): ";
    std::cin >> speed;

    if (speed < 74) {
        std::cout << "Not a hurricane\n";
    } else if (speed <= 95) {
        std::cout << "Category 1\n";
    } else if (speed <= 110) {
        std::cout << "Category 2\n";
    } else if (speed <= 130) {
        std::cout << "Category 3\n";
    } else if (speed <= 155) {
        std::cout << "Category 4\n";
    } else {
        std::cout << "Category 5\n";
    }
    return 0;
}
