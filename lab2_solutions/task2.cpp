#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
    std::srand(std::time(0));
    int num1 = std::rand();
    int num2 = std::rand();
    int num3 = std::rand();
    int num4 = std::rand();

    std::cout << "Numbers: " << num1 << " " << num2 << " " << num3 << " " << num4 << std::endl;
    
    long long sum = static_cast<long long>(num1) + num2 + num3 + num4;
    double average = static_cast<double>(sum) / 4.0;
    
    int min1 = std::min(num1, num2);
    int min2 = std::min(num3, num4);
    int min_val = std::min(min1, min2);
    
    int max1 = std::max(num1, num2);
    int max2 = std::max(num3, num4);
    int max_val = std::max(max1, max2);
    
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Minimum: " << min_val << std::endl;
    std::cout << "Maximum: " << max_val << std::endl;
    
    return 0;
}