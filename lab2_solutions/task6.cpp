#include <iostream>
using namespace std;

int main() {
    int m, d, y;
    cout << "Enter month (1-12): ";
    cin >> m;
    cout << "Enter day: ";
    cin >> d;
    cout << "Enter year: ";
    cin >> y;

    // formulas given
    int y0 = y - (14 - m) / 12;
    int x  = y0 + y0 / 4 - y0 / 100 + y0 / 400;
    int m0 = m + 12 * ((14 - m) / 12) - 2;
    int d0 = (d + x + (31 * m0) / 12) % 7;

    cout << "Day of the week: " << d0 << endl;
    // 0 = Sunday, 1 = Monday, ..., 6 = Saturday

    return 0;
}
