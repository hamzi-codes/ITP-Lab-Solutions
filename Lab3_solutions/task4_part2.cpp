#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "BMI = " << bmi << endl;

    // Nested ternary operators to classify BMI
    string category = (bmi < 18.5) ? "Underweight" :
                      (bmi < 25.0) ? "Normal" :
                      (bmi < 30.0) ? "Overweight" :
                                     "Obese";

    cout << "Category: " << category << endl;

    return 0;
}
