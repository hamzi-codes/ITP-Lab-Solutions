#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int A[SIZE][SIZE];
    int R90[SIZE][SIZE];
    int R180[SIZE][SIZE];
    int R270[SIZE][SIZE];

    cout << "Enter 3x3 image matrix (values 0–255):\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    // ✅ 90° Clockwise
    // Formula: new[j][SIZE - 1 - i] = old[i][j]
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R90[j][SIZE - 1 - i] = A[i][j];
        }
    }

    // ✅ 180° Rotation
    // Corrected Formula: new[SIZE - 1 - i][SIZE - 1 - j] = old[i][j]
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R180[SIZE - 1 - i][SIZE - 1 - j] = A[i][j];
        }
    }

    // ✅ 270° Clockwise
    // Formula: new[SIZE - 1 - j][i] = old[i][j]
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R270[SIZE - 1 - j][i] = A[i][j];
        }
    }

    // Display 90° rotation
    cout << "\n90° Clockwise Rotation:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << R90[i][j] << "\t";
        }
        cout << "\n";
    }

    // Display 180° rotation
    cout << "\n180° Rotation:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << R180[i][j] << "\t";
        }
        cout << "\n";
    }

    // Display 270° rotation
    cout << "\n270° Clockwise Rotation:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << R270[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
