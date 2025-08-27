// Task 3: Write a program recipe.cpp that helps calculate the ingredients needed for making a sweet dish. 
// One serving requires 2 cups of sugar and 1 cup of oil. 
// Ask the user how many servings they want to make, and output the total amount of sugar and oil required.

#include <iostream>

int main() {
    int servings;
    std::cout << "Enter number of servings: ";
    std::cin >> servings;
    int sugar = 2 * servings;
    int oil = 1 * servings;
    std::cout << "You need " << sugar << " cups of sugar and " << oil << " cups of oil.";
    return 0;
}
