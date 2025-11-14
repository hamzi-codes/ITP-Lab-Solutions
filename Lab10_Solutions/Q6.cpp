// Q6 - dwarfs attack diagonally
#include <vector>
using namespace std;

bool canAttack(const vector<vector<int>>& grid) {
    int n = grid.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                // top-left diagonal
                if (i > 0 && j > 0 && grid[i-1][j-1] == 1) return true;
                // top-right diagonal
                if (i > 0 && j < n-1 && grid[i-1][j+1] == 1) return true;
                // bottom-left diagonal
                if (i < n-1 && j > 0 && grid[i+1][j-1] == 1) return true;
                // bottom-right diagonal
                if (i < n-1 && j < n-1 && grid[i+1][j+1] == 1) return true;
            }
        }
    }

    return false;
}