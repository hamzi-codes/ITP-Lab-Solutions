#include <iostream>
using namespace std;

int count7(int n) {
    if (n == 0) return 0;
    int lastDigit = n % 10;
    return (lastDigit == 7) + count7(n / 10);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Count of 7s: " << count7(n) << endl;
    return 0;
}