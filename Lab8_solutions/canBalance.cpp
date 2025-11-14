#include <iostream>
using namespace std;

// Function to rotate the array by k elements
void rotateArray(int arr[], int size, int k) {
    k = k % size; // handle case when k > size

    // Rotate left by k using simple loop
    for (int i = 0; i < k; i++) {
        int first = arr[0];
        for (int j = 0; j < size - 1; j++)
            arr[j] = arr[j + 1];
        arr[size - 1] = first;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6, k = 2;

    rotateArray(arr, size, k);

    cout << "Rotated Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
