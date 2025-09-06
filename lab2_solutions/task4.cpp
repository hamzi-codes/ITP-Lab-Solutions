#include <iostream>
#include <cmath>

int main() {
    double t, v;
    std::cout << "Enter temperature (F): ";
    std::cin >> t;
    std::cout << "Enter wind speed (mph): ";
    std::cin >> v;
    
    double wind_chill = 35.74 + 0.6215 * t - 35.75 * std::pow(v, 0.16) + 0.4275 * t * std::pow(v, 0.16);
    
    std::cout << "Wind chill: " << wind_chill << std::endl;
    
    return 0;
}