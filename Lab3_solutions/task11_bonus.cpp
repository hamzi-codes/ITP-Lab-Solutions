// lottery_simple.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 900 + 100; // 100–999

    int guess;
    cout << "Enter your 3-digit guess (100-999): ";
    cin >> guess;

    if (guess < 100 || guess > 999) {
        cout << "Invalid guess.\n";
        return 0;
    }

    // extract digits
    int s1 = secret / 100;         // hundreds
    int s2 = (secret / 10) % 10;   // tens
    int s3 = secret % 10;          // ones

    int g1 = guess / 100;
    int g2 = (guess / 10) % 10;
    int g3 = guess % 10;

    cout << "Secret number: " << secret << endl;

    if (guess == secret) {
        cout << "Exact match → 1,000,000 rupees\n";
    }
    else if (
        (g1 == s1 || g1 == s2 || g1 == s3) &&
        (g2 == s1 || g2 == s2 || g2 == s3) &&
        (g3 == s1 || g3 == s2 || g3 == s3)
    ) {
        cout << "All digits match (different order) → 500,000 rupees\n";
    }
    else if (
        g1 == s1 || g1 == s2 || g1 == s3 ||
        g2 == s1 || g2 == s2 || g2 == s3 ||
        g3 == s1 || g3 == s2 || g3 == s3
    ) {
        cout << "One digit matches → 100,000 rupees\n";
    }
    else {
        cout << "Better luck next time!\n";
    }

    return 0;
}
