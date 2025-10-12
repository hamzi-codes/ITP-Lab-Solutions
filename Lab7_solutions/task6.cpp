#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int grid[SIZE][SIZE] = {
        {34, 21, 32, 41, 25},
        {14, 42, 43, 14, 31},
        {54, 45, 52, 42, 23},
        {33, 15, 51, 31, 35},
        {21, 52, 33, 13, 23}
    };

    cout << "Treasure Hunt Path:\n";

    int row = 1, col = 1; // starting at (1,1)
    bool found = false;

    // Loop to follow clues
    while (true) {
        cout << "Visiting cell (" << row << "," << col << ") -> value: " << grid[row - 1][col - 1] << endl;

        int value = grid[row - 1][col - 1];
        int nextRow = value / 10;
        int nextCol = value % 10;

        // Check if current cell is treasure
        if (nextRow == row && nextCol == col) {
            cout << "\n Treasure found at (" << row << "," << col << ") with value: " << value << "!\n";
            found = true;
            break;
        }

        // Safety check: if goes out of bounds
        if (nextRow < 1 || nextRow > SIZE || nextCol < 1 || nextCol > SIZE) {
            cout << "\n Invalid clue (" << nextRow << "," << nextCol << ") — out of bounds. Stopping.\n";
            break;
        }

        // Move to next clue
        row = nextRow;
        col = nextCol;
    }

    if (!found) {
        cout << "\n Treasure not found.\n";
    }

    return 0;
}
