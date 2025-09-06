#include <iostream>
#include <algorithm>

int main() {
    int a, b, c;
    std::cout << "Enter three values: ";
    std::cin >> a >> b >> c;
    
    int min_val = std::min(std::min(a, b), c);
    int max_val = std::max(std::max(a, b), c);
    int middle_val = (a + b + c) - min_val - max_val;
    
    std::cout << "In descending order: " << max_val << " " << middle_val << " " << min_val << std::endl;
    
    return 0;
}