#include <iostream>
#include <string>

int main() {
    int speed;
    std::cout << "Enter wind speed (mph): ";
    std::cin >> speed;

    std::string result =
        (speed < 74) ? "Not a hurricane" :
        (speed <= 95) ? "Category 1" :
        (speed <= 110) ? "Category 2" :
        (speed <= 130) ? "Category 3" :
        (speed <= 155) ? "Category 4" :
                        "Category 5";

    std::cout << result << "\n";
    return 0;
}