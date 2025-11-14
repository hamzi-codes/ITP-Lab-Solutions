#include <iostream>
#include <string>
using namespace std;

// Function to print strings in a rectangular frame
void printBoxed(string words[], int size) {
    int maxLen = 0;

    // Find longest word
    for (int i = 0; i < size; i++) {
        if (words[i].length() > maxLen)
            maxLen = words[i].length();
    }

    // Print top border
    for (int i = 0; i < maxLen + 4; i++)
        cout << "*";
    cout << endl;

    // Print each word in a box
    for (int i = 0; i < size; i++) {
        cout << "* " << words[i];
        for (int j = words[i].length(); j < maxLen; j++)
            cout << " ";
        cout << " *" << endl;
    }

    // Print bottom border
    for (int i = 0; i < maxLen + 4; i++)
        cout << "*";
    cout << endl;
}

int main() {
    string words[] = {"Hello", "World", "in", "a", "frame"};
    int size = 5;

    printBoxed(words, size);
    return 0;
}
