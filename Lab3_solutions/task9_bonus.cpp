// roll_dice.cpp
#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime>   // time

int main() {
    std::srand(std::time(0));
    int roll = std::rand() % 6 + 1; // 1..6
    std::cout << "You rolled: " << roll << "\n";
    return 0;
}
