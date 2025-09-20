#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a = 0, b = 1, count = 0;

    cout << "Fibonacci sequence: ";
    while (count < n) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
        count++;
    }
    cout << endl;
    return 0;
}
