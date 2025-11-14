#include <iostream>
#include <vector>
using namespace std;

void fillPattern(vector<vector<char>> &grid, int x, int y, int size) {
    // Base case: smallest block — just fill a single '*'
    if (size == 1) {
        grid[x][y] = '*';
        return;
    }

    int block = size / 3;

    // Loop through the 3x3 grid of sub-blocks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Skip the middle block (leave blank)
            if (i == 1 && j == 1) continue;

            // Recursively fill sub-blocks
            fillPattern(grid, x + i * block, y + j * block, block);
        }
    }
}

int main() {
    int n;
    cout << "Enter size (power of 3, e.g., 3, 9, 27): ";
    cin >> n;

    // Initialize grid with spaces
    vector<vector<char>> grid(n, vector<char>(n, ' '));

    // Fill the grid recursively
    fillPattern(grid, 0, 0, n);

    // Print the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
