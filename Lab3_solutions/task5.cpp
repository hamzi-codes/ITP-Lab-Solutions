// conversion_passfail.cpp
#include <iostream>
using namespace std;

int main() {
    int totalMarks, obtainedMarks;
    cout << "Enter total marks: ";
    cin >> totalMarks;
    cout << "Enter obtained marks: ";
    cin >> obtainedMarks;

    if (totalMarks == 0) {
        cout << "Total marks cannot be zero." << endl;
        return 0;
    }

    // Implicit conversion: integer division happens first, then converted to double
    double percentageImplicit = (obtainedMarks / totalMarks) * 100;

    cout << "\nUsing implicit conversion:" << endl;
    cout << "Percentage = " << percentageImplicit << endl;
    if (percentageImplicit >= 50.0)
        cout << "Result = Pass" << endl;
    else
        cout << "Result = Fail" << endl;

    // Explicit conversion: force floating point division
    double percentageExplicit = (static_cast<double>(obtainedMarks) / totalMarks) * 100.0;

    cout << "\nUsing explicit conversion:" << endl;
    cout << "Percentage = " << percentageExplicit << endl;
    if (percentageExplicit >= 50.0)
        cout << "Result = Pass" << endl;
    else
        cout << "Result = Fail" << endl;

    return 0;
}
