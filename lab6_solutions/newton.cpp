#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double N;
    cout << "Enter Number: ";
    cin >> N;

    double x = N / 3.0;
    if (x == 0) x = 1;

    double fx = pow(x, 3) - N;

    while (fabs(fx) >= 0.001) {
        x = x - (pow(x, 3) - N) / (3 * x * x);
        fx = pow(x, 3) - N;
    }

    cout << "Cube root: " << x << endl;

    return 0;
}