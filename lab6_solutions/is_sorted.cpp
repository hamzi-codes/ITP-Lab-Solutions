#include <iostream>
using namespace std;

int main() {
    double arr1[] = {16.1, 12.3, 22.2, 14.4};
    double arr2[] = {1.5, 4.3, 7.0, 19.5, 25.1, 46.2};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    bool sorted1 = true;
    for (int i = 1; i < size1; i++) {
        if (arr1[i] < arr1[i-1]) {
            sorted1 = false;
            break;
        }
    }

    bool sorted2 = true;
    for (int i = 1; i < size2; i++) {
        if (arr2[i] < arr2[i-1]) {
            sorted2 = false;
            break;
        }
    }

    cout << (sorted1 ? "true" : "false") << endl;
    cout << (sorted2 ? "true" : "false") << endl;

    return 0;
}