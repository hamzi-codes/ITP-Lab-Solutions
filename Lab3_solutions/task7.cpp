// guess.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 90 + 10; // random number between 10 and 99
    int guess;
    cout << "Enter your two-digit guess (10-99): ";
    cin >> guess;

    
        // break digits
        int s1 = secret / 10, s2 = secret % 10;
        int g1 = guess / 10, g2 = guess % 10;

    if (guess < 10 || guess > 99) {
        cout << "Invalid guess. Enter a two-digit number." << endl;
    }

    else if (guess == secret) {
        cout << "Exact match → 50,000 rupees" << endl;
    } 
    
    else if (g1 == s2 && g2 == s1) {
            cout << "All digits match, but in different order → 10,000 rupees" << endl;
        } 
        
    else if (g1 == s1 || g1 == s2 || g2 == s1 || g2 == s2) {
            cout << "One digit matches → 1,000 rupees" << endl;
        } 
        
    else {
            cout << "Better luck next time!" << endl;
        }

    cout << "Secret number was: " << secret << endl;
    return 0;
}
