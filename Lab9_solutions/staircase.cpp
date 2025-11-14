#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n <= 2) return n;
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    cout << climbStairs(4); // Output: 8
}