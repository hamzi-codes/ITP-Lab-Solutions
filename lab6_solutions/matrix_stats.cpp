#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[3][4] = {
        {2, 5, 7, 1},
        {1, 3, 6, 1},
        {5, 4, 1, 3}
    };

    const int R = 3, C = 4;

    cout << "Row sums: ";
    for (int i = 0; i < R; i++) {
        int sum = 0;
        for (int j = 0; j < C; j++) {
            sum += a[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;

    cout << "Column sums: ";
    for (int j = 0; j < C; j++) {
        int sum = 0;
        for (int i = 0; i < R; i++) {
            sum += a[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;

    int maxi = INT_MIN, mini = INT_MAX;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (a[i][j] > maxi) maxi = a[i][j];
            if (a[i][j] < mini) mini = a[i][j];
        }
    }

    cout << "Maximum element: " << maxi << endl;
    cout << "Minimum element: " << mini << endl;

    return 0;
}