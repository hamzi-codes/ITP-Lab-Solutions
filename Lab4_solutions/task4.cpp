#include <iostream>
using namespace std;

int main() {
    double height, ratio;
    cout << "Enter initial height: ";
    cin >> height;
    cout << "Enter decrease ratio: ";
    cin >> ratio;

    double currentHeight = height;
    int bounces = 0;

    while (currentHeight >= height / 4.0) {
        currentHeight = currentHeight * (1 - ratio);
        bounces++;
    }

    cout << "Number of bounces: " << bounces << endl;
    return 0;
}
