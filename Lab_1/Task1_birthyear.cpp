// Task 1: Create a program birthyear.cpp that asks the user for their name and their year of birth. 
// The program should calculate their age and display a message such as: 
// David, you will be 20 years old this year.

#include <iostream>
#include <string>

int main() {
    std::string name;
    int birthYear, currentYear;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your birth year: ";
    std::cin >> birthYear;

    currentYear = 2025;
    int age = currentYear - birthYear;
    std::cout << name << ", you will be " << age << " years old this year.";
    return 0;
}
