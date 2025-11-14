#include <iostream>
#include <string>
using namespace std;

string longestCommonEnding(const string& s1, const string& s2) {
    int i = s1.size() - 1;
    int j = s2.size() - 1;
    string result = "";

    while (i >= 0 && j >= 0 && s1[i] == s2[j]) {
        result = s1[i] + result;
        i--;
        j--;
    }
    return result;
}

int main() {
    cout << longestCommonEnding("multiplication", "ration") << endl;  // Output: ation
    cout << longestCommonEnding("potent", "tent") << endl;            // Output: tent
    cout << longestCommonEnding("skyscraper", "carnivore") << endl;    // Output: 
}