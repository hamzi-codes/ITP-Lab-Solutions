// Q4 - borderSum functions
#include <vector>
using namespace std;

// sum all border elements for given width
int borderSum(const vector<vector<int>>& mat, int borderWidth = 1) {
    int n = mat.size();
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < borderWidth || i >= n - borderWidth || j < borderWidth || j >= n - borderWidth) {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

// sum border elements greater than threshold
int borderSum(const vector<vector<int>>& mat, int borderWidth, int threshold) {
    int n = mat.size();
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i < borderWidth || i >= n - borderWidth || j < borderWidth || j >= n - borderWidth) && mat[i][j] > threshold) {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}