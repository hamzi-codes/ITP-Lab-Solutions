// Task 6: Write a program currency.cpp that asks the user for an amount of money in rupees. 
// The program should calculate how many 100-rupee notes, 50-rupee notes, and 10-rupee notes 
// are needed to make that amount, using the largest notes first.

#include <iostream>

int main() {
    int amount;
    std::cout << "Enter amount in rupees: ";
    std::cin >> amount;

    int hundreds = amount / 100;
    amount = amount % 100;

    int fifties = amount / 50;
    amount = amount % 50;

    int tens = amount / 10;
    amount = amount % 10;

    std::cout << "Currency Breakdown:\n"
              << "100-rupee notes\t" << hundreds << "\n"
              << "50-rupee notes\t"  << fifties  << "\n"
              << "10-rupee notes\t"  << tens     << "\n"
              << "Remaining\t"       << amount;

    return 0;
}
