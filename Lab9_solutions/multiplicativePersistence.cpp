#include <iostream>
using namespace std;

int multiplicativePersistence(long long n) {
    if (n < 10) return 0;

    long long prod = 1, temp = n;
    while (temp > 0) {
        prod *= (temp % 10);
        temp /= 10;
    }
    return 1 + multiplicativePersistence(prod);
}

int main() {
    cout << multiplicativePersistence(39); // Output: 4
}