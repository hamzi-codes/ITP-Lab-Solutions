// quadratic.cpp
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Coefficient a cannot be zero for a quadratic equation." << endl;
        return 0;
    }

    double disc = b*b - 4*a*c;
    cout << fixed << setprecision(6);

    if (disc > 0) {
        double r1 = (-b + sqrt(disc)) / (2*a);
        double r2 = (-b - sqrt(disc)) / (2*a);
        cout << "Two real roots: " << r1 << " and " << r2 << endl;
    } else if (disc == 0) {
        double r = -b / (2*a);
        cout << "One real root: " << r << endl;
    } else {
        cout << "The equation has no real roots." << endl;
    }

    return 0;
}
