#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int len = s.size();
    cout << "+";
    for (int i = 0; i < len + 2; i++) cout << "-";
    cout << "+\n";

    cout << "| " << s << " |\n";

    cout << "+";
    for (int i = 0; i < len + 2; i++) cout << "-";
    cout << "+\n";

    return 0;
}
