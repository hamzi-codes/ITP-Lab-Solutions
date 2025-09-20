#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int x = abs(a);
    int y = abs(b);

    while (y != 0) {
        int remainder = x % y;
        x = y;
        y = remainder;
    }
    int gcd = x;
    int lcm = abs(a * b) / gcd;

    cout << "GCD of " << a << " and " << b << " = " << gcd << endl;
    cout << "LCM of " << a << " and " << b << " = " << lcm << endl;
    return 0;
}
