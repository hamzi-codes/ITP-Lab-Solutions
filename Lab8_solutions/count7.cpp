#include <iostream>
using namespace std;

// Function to count how many times digit 7 appears in a number
int count7(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 10 == 7)   // check last digit
            count++;
        n = n / 10;        // remove last digit
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of 7s: " << count7(n) << endl;
    return 0;
}
