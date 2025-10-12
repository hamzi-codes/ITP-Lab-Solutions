#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int A[SIZE][SIZE];
    int T[SIZE][SIZE]; // transpose matrix

    cout << "Enter elements of 5x5 matrix:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> A[i][j];
        }
    }

    // Calculate transpose
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            T[j][i] = A[i][j];
        }
    }

    // Print original matrix
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    // Print transpose matrix
    cout << "\nTranspose Matrix:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << T[i][j] << "\t";
        }
        cout << "\n";
    }

    // Check if symmetric
    bool symmetric = true;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (A[i][j] != T[i][j]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric)
        cout << "\nThe given matrix is symmetric.\n";
    else
        cout << "\nThe given matrix is not symmetric.\n";

    return 0;
}
