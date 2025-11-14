#include <iostream>
#include <string>
using namespace std;

int closingInSum(string num) {
    if (num.length() == 0) return 0;
    if (num.length() == 1) return num[0] - '0';
    int pairNum = (num[0] - '0') * 10 + (num.back() - '0');
    return pairNum + closingInSum(num.substr(1, num.length() - 2));
}

int main() {
    string s;
    cout << "Enter numeric string: ";
    cin >> s;
    cout << "Closing-in sum: " << closingInSum(s) << endl;
    return 0;
}