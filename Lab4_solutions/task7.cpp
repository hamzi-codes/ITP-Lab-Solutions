#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    const int FAMILIES = 1000;
    long long totalChildren = 0;

    for (int f = 0; f < FAMILIES; f++) {
        bool hasBoy = false, hasGirl = false;
        int children = 0;

        while (!(hasBoy && hasGirl)) {
            int child = rand() % 2; // 0 = boy, 1 = girl
            children++;
            if (child == 0) hasBoy = true;
            else hasGirl = true;
        }
        totalChildren += children;
    }

    double average = (double)totalChildren / FAMILIES;
    cout << "Average number of children = " << average << endl;
    return 0;
}
