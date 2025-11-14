#include <iostream>
#include <string>
using namespace std;

string toPigLatin(string text) {
    string result = "";
    string word = "";
    
    for (size_t i = 0; i <= text.length(); i++) {
        if (i == text.length() || text[i] == ' ') {
            if (word!="") {
                char first = word[0];
                word = word.substr(1) + first + "ay";
                result += word + " ";
                word = "";
            }
        } else {
            word += text[i];
        }
    }
    return result;
}

int main() {
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);
    cout << "Pig Latin: " << toPigLatin(text) << endl;
    return 0;
}
