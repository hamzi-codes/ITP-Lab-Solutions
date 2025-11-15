// Q3 - smoothing 2D grid
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    cin >> n;

    srand(time(0));

    vector<vector<int>> grid(n, vector<int>(n));
    vector<vector<int>> transformed(n, vector<int>(n));

    // fill grid with random numbers
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            grid[i][j] = rand() % 31 + 10; // 10 to 40
        }
    }

    // smooth grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = grid[i][j];
            int count = 1;
            if (i > 0) { sum += grid[i-1][j]; count++; }
            if (i < n-1) { sum += grid[i+1][j]; count++; }
            if (j > 0) { sum += grid[i][j-1]; count++; }
            if (j < n-1) { sum += grid[i][j+1]; count++; }

            transformed[i][j] = sum / count;
        }
    }

    // print original grid
    cout << "Original Grid:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Transformed Grid:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transformed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}