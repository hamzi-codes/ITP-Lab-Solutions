#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    if (s.length() <= 1) return true;
    if (tolower(s.front()) != tolower(s.back())) return false;
    return isPalindrome(s.substr(1, s.length() - 2));
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    cout << (isPalindrome(word) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}