// Q2 - addWord function
#include <iostream>
#include <string>
using namespace std;

void addWord(const string& word, int minLen = 5) {
    static int count = 0;

    int len = word.length();

    cout << "Word: " << word << " (" << len << ")";
    if (len >= minLen) {
        count++;
        cout << " meets length (Count: " << count << ")";
    } else {
        cout << " too short";
    }
    cout << endl;
}