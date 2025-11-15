// Q7 - dynamic array
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int maxVal = arr[0], minVal = arr[0], sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
        sum += arr[i];
    }

    double avg = double(sum) / n;

    cout << "Max = " << maxVal << ", Min = " << minVal << ", Average = " << int(avg) << endl;

    delete[] arr;

    return 0;
}