#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    const int TRIALS = 1000;
    long long totalFlips = 0;

    for (int t = 0; t < TRIALS; t++) {
        int flips = 0;
        int headsInRow = 0;

        while (headsInRow < 2) {
            int coin = rand() % 2; // 0 = tails, 1 = heads
            flips++;
            if (coin == 1) {
                headsInRow++;
            } else {
                headsInRow = 0;
            }
        }
        totalFlips += flips;
    }

    double average = (double)totalFlips / TRIALS;
    cout << "Average flips to get two heads in a row = " << average << endl;
    return 0;
}
