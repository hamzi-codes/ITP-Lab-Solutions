#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to count vowels in a string
int count_vowels(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    return count;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Number of vowels: " << count_vowels(s) << endl;
    return 0;
}
