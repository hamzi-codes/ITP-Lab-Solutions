#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int A[SIZE][SIZE];

    cout << "Enter " << SIZE << "x" << SIZE << " image matrix (values 0–255):\n";
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

    // ------------------- 1. 90° CLOCKWISE ROTATION -------------------
    int R90[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R90[j][SIZE - 1 - i] = A[i][j];
        }
    }

    cout << "\n90° Clockwise Rotation:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << R90[i][j] << "\t";
        }
        cout << "\n";
    }

    // ------------------- 2. 180° ROTATION -------------------
    int R180[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R180[SIZE - 1 - i][SIZE - 1 - j] = A[i][j];
        }
    }

    cout << "\n180° Rotation:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << R180[i][j] << "\t";
        }
        cout << "\n";
    }

    // ------------------- 3. 270° CLOCKWISE ROTATION -------------------
    int R270[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R270[SIZE - 1 - j][i] = A[i][j];
        }
    }

    cout << "\n270° Clockwise Rotation:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << R270[i][j] << "\t";
        }
        cout << "\n";
    }

    // ------------------- 4. HORIZONTAL FLIP -------------------
    int H[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            H[i][j] = A[i][SIZE - 1 - j];
        }
    }

    cout << "\nHorizontal Flip (Left ↔ Right):\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << H[i][j] << "\t";
        }
        cout << "\n";
    }

    // ------------------- 5. VERTICAL FLIP -------------------
    int V[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            V[i][j] = A[SIZE - 1 - i][j];
        }
    }

    cout << "\nVertical Flip (Top ↔ Bottom):\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << V[i][j] << "\t";
        }
        cout << "\n";
    }

    // ------------------- 6. GENERIC BLUR -------------------
    int B[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // Keep border pixels unchanged
            if (i == 0 || j == 0 || i == SIZE - 1 || j == SIZE - 1) {
                B[i][j] = A[i][j];
            } else {
                // Average of center + 4 neighbors
                int sum = A[i][j] + A[i - 1][j] + A[i + 1][j] + A[i][j - 1] + A[i][j + 1];
                B[i][j] = sum / 5;
            }
        }
    }

    cout << "\nAfter Applying Blur (center + 4 neighbors):\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << B[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
