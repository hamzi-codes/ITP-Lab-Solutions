#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long result = 1;
    for (int i = 1; i <= 10; i++) {
        result *= n;
        cout << n << " ^ " << i << " = " << result << endl;
    }
    return 0;
}
