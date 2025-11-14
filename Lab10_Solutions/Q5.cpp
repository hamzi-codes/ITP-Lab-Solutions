// Q5 - random 0/1 matrix
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// generate random m x n 0/1 matrix
vector<vector<int>> genRandomMatrix(int m, int n) {
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 2;
        }
    }
    return a;
}

// print matrix
void printMatrix(const vector<vector<int>>& a) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

// find row with max ones
int findMaxOnesRow(const vector<vector<int>>& a) {
    int maxCount = -1, idx = 0;
    for (int i = 0; i < a.size(); i++) {
        int count = 0;
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] == 1) count++;
        }
        if (count > maxCount) {
            maxCount = count;
            idx = i;
        }
    }
    return idx;
}

// find column with max ones
int findMaxOnesCol(const vector<vector<int>>& a) {
    int n = a[0].size();
    int maxCount = -1, idx = 0;
    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i][j] == 1) count++;
        }
        if (count > maxCount) {
            maxCount = count;
            idx = j;
        }
    }
    return idx;
}

int main() {
    srand(time(0));
    vector<vector<int>> a = genRandomMatrix(4,4);

    printMatrix(a);

    cout << "\nThe largest row index: " << findMaxOnesRow(a) << endl;
    cout << "The largest column index: " << findMaxOnesCol(a) << endl;

    return 0;
}