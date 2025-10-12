#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int TRIALS = 10000;
    double totalPeople = 0;

    for (int t = 0; t < TRIALS; t++) {
        bool visited[365] = {false};
        int people = 0;

        while (true) {
            int birthday = rand() % 365;
            people++;
            if (visited[birthday]) break;
            visited[birthday] = true;
        }
        totalPeople += people;
    }

    cout << "Average people before duplicate birthday: " 
         << (totalPeople / TRIALS) << endl;

    return 0;
}