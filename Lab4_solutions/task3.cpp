#include <iostream>
#include <cmath> // for pow
using namespace std;

int main() {
    int r, n;
    cout << "Enter r and n: ";
    cin >> r >> n;

    long long sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += pow(r, i);
    }

    cout << "Geometric sum: " << sum << endl;
    return 0;
}
