#include <iostream>
using namespace std;

int findMissing(int arr[], int size) {
    int n = size + 1;       //size+1 because one number is missing
    int expectedSum = 0;
    // could have used this maths formula: expectedSum = n * (n + 1) / 2;
    // OR run a for loop like this:
    for(int i = 1; i<=n; i++) {     
        expectedSum+=i;
    }
    int actualSum = 0;
    for (int i = 0; i < size; i++)
        actualSum += arr[i];
    return expectedSum - actualSum;
}
int main() {
    int arr[] = {1, 2, 4, 5, 6};
    cout << "Missing number: " << findMissing(arr, 5);
}
