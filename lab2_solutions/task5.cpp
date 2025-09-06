#include <iostream>
using namespace std;

int main() {
    long long x;   // 11-digit number (fits in long long)
    cout << "Enter 11-digit number: ";
    cin >> x;

    // extract digits (rightmost = d11, leftmost = d1)
    int d11 = x % 10;
    int d10 = (x / 10) % 10;
    int d9  = (x / 100) % 10;
    int d8  = (x / 1000) % 10;
    int d7  = (x / 10000) % 10;
    int d6  = (x / 100000) % 10;
    int d5  = (x / 1000000) % 10;
    int d4  = (x / 10000000) % 10;
    int d3  = (x / 100000000) % 10;
    int d2  = (x / 1000000000) % 10;
    int d1  = (x / 10000000000) % 10; // leftmost

    // step 1: add odd-positioned digits (d1, d3, d5, d7, d9, d11)
    int oddSum = d1 + d3 + d5 + d7 + d9 + d11;

    // step 2: add even-positioned digits (d2, d4, d6, d8, d10)
    int evenSum = d2 + d4 + d6 + d8 + d10;

    // step 3: compute check digit
    int total = oddSum * 3 + evenSum;
    int checkDigit = (10 - (total % 10)) % 10;

    // print final 12-digit UPC
    cout << "UPC: "
         << d1 << d2 << d3 << d4 << d5 << d6
         << d7 << d8 << d9 << d10 << d11
         << checkDigit << endl;

    return 0;
}
