#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int A[SIZE][SIZE];
    int R90[SIZE][SIZE];
    int R180[SIZE][SIZE];
    int R270[SIZE][SIZE];

    cout << "Enter 3x3 image matrix (values 0-255):\n";
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

    // 90° Clockwise Rotation
    // Formula: new[i][j] = old[SIZE - 1 - j][i]
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R90[i][j] = A[SIZE - 1 - j][i];
        }
    }

    // 180° Rotation
    // Formula: new[i][j] = old[SIZE - 1 - i][SIZE - 1 - j]
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R180[i][j] = A[SIZE - 1 - i][SIZE - 1 - j];
        }
    }

    // 270° Clockwise Rotation
    // Formula: new[i][j] = old[j][SIZE - 1 - i]
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R270[i][j] = A[j][SIZE - 1 - i];
        }
    }

    // Display 90°
    cout << "\n90° Clockwise Rotation:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << R90[i][j] << "\t";
        }
        cout << "\n";
    }

    // Display 180°
    cout << "\n180° Rotation:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << R180[i][j] << "\t";
        }
        cout << "\n";
    }

    // Display 270°
    cout << "\n270° Clockwise Rotation:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << R270[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
