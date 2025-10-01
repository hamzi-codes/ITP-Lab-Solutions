#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int target = rand() % 100 + 1;
    int guess;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < target) cout << "Low\n";
        else if (guess > target) cout << "High\n";
        else cout << "Correct\n";
    } while (guess != target);

    return 0;
}
