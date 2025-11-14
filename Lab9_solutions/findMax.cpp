#include <iostream>
#include <vector>
using namespace std;

int findMax(const vector<int>& a, int n) {
    if (n == 1) return a[0];
    int m = findMax(a, n - 1);
    return (m > a[n - 1]) ? m : a[n - 1];
}

int findMax(const vector<int>& a) {
    return findMax(a, a.size());
}

int main() {
    vector<int> arr = {3, 9, 2, 5, 7};
    cout << "Maximum element: " << findMax(arr) << endl;
    return 0;
}