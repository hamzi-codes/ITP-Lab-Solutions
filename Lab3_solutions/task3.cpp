// xor_char.cpp
#include <iostream>
using namespace std;

int main() {
    char ch;
    int key;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter key: ";
    cin >> key;

    char encrypted = ch ^ key;
    cout << "Encrypted value: " << encrypted << endl;

    char decrypted = encrypted ^ key;
    cout << "Decrypted value: " << decrypted << endl;

    return 0;
}
