// Task 4: Create a program shopping.cpp that asks the user to enter the prices of three items they have purchased. 
// The program should calculate the total price including tax. 
// Assume the sales tax is 10% of the total cost of the three items. 
// Finally, display the total price to the user.

#include <iostream>

int main() {
    double item1, item2, item3, total, tax, finalPrice;
    std::cout << "Enter price of item 1: ";
    std::cin >> item1;
    std::cout << "Enter price of item 2: ";
    std::cin >> item2;
    std::cout << "Enter price of item 3: ";
    std::cin >> item3;
    total = item1 + item2 + item3;
    tax = total * 0.10;
    finalPrice = total + tax;
    std::cout << "Total price including tax: " << finalPrice;
    return 0;
}
