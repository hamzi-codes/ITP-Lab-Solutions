#include <iostream>
#include <string>
using namespace std;

string moveX(string s) { 
if (s.empty()) return ""; 
char ch = s[0]; 
if (ch == 'x') return moveX(s.substr(1)) + ch; 
else return ch + moveX(s.substr(1)); 
}


int main() {
    string str = "axbxcxdx";
    cout << moveX(str); // Output: abcdxxxx
}