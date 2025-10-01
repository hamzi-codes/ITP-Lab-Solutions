#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    bool allOdd = true;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            allOdd = false;
            break;
        }
        n /= 10;
    }

    if (allOdd) cout << "true\n";
    else cout << "false\n";

    return 0;
}
