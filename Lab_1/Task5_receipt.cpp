// Task 5: Write a program receipt.cpp that prints a receipt for the three purchased items from Question 4. 
// The receipt should display the three items, their prices, the tax, and the total cost. 
// The entire receipt should be printed in a single output statement, using escape sequences.

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

    std::cout << "Item\tPrice\n"
              << "Item1\t" << item1 << "\n"
              << "Item2\t" << item2 << "\n"
              << "Item3\t" << item3 << "\n"
              << "Tax\t"   << tax   << "\n"
              << "Total\t" << finalPrice;

    return 0;
}
