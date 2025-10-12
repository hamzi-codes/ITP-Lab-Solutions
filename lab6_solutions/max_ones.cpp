#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0, currentCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
        } else {
            currentCount = 0;
        }
    }

    cout << "Maximum consecutive 1's: " << maxCount << endl;

    return 0;
}