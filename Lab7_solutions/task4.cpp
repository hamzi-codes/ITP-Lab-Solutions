#include <iostream>
using namespace std;

int main() {
    const int SIZE = 4;
    int A[SIZE][SIZE], B[SIZE][SIZE];
    int add[SIZE][SIZE], sub[SIZE][SIZE];
    int mul[SIZE][SIZE];
    int result[SIZE][SIZE];

    cout << "Enter elements of Matrix A (4x4):\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix B (4x4):\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> B[i][j];
        }
    }

    // (a) A + B
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            add[i][j] = A[i][j] + B[i][j];
        }
    }

    // (b) A - B
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            sub[i][j] = A[i][j] - B[i][j];
        }
    }

    // (c) (A - B)(A + B)
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            mul[i][j] = 0; // initialize
            for (int k = 0; k < SIZE; k++) {
                mul[i][j] += sub[i][k] * add[k][j];
            }
        }
    }

    // (d) 2A + 3B
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 2 * A[i][j] + 3 * B[i][j];
        }
    }

    // Display results
    cout << "\n(a) A + B:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << add[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n(b) A - B:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << sub[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n(c) (A - B)(A + B):\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << mul[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n(d) 2A + 3B:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << result[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
