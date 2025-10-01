#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\n===== Calculator Menu =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
            case 1: cout << "Result: " << num1 + num2 << endl; break;
            case 2: cout << "Result: " << num1 - num2 << endl; break;
            case 3: cout << "Result: " << num1 * num2 << endl; break;
            case 4:
                if (num2 != 0) cout << "Result: " << num1 / num2 << endl;
                else cout << "Error: Division by zero!\n";
                break;
            case 5:
                if ((int)num2 != 0) cout << "Result: " << (int)num1 % (int)num2 << endl;
                else cout << "Error: Division by zero!\n";
                break;
            case 6: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
