// bmi.cpp
#include <iostream>
using namespace std;

int main() {
    double weight, height;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;

    if (height <= 0) {
        cout << "Invalid height" << endl;
        return 0;
    }

    double bmi = weight / (height * height);
    cout << "BMI = " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi < 25.0) {
        cout << "Normal" << endl;
    } else if (bmi < 30.0) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }

    return 0;
}
