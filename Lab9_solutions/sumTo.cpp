#include <iostream>
using namespace std;

double sumTo(int n) {
    if (n == 0) return 0.0;
    return 1.0 / n + sumTo(n - 1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Harmonic sum Hn = " << sumTo(n) << endl;
    return 0;
}