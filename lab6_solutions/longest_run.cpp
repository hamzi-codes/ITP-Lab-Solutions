#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 1, 5, 7, 7, 7, 7, 2, 2, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int bestElement = arr[0];
    int bestLength = 1;
    int currentElement = arr[0];
    int currentLength = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == currentElement) {
            currentLength++;
        } else {
            if (currentLength > bestLength) {
                bestLength = currentLength;
                bestElement = currentElement;
            }
            currentElement = arr[i];
            currentLength = 1;
        }
    }

    if (currentLength > bestLength) {
        bestLength = currentLength;
        bestElement = currentElement;
    }

    cout << "Longest run: " << bestLength << " consecutive " << bestElement << "s" << endl;

    return 0;
}