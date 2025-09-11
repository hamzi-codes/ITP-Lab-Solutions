#include <iostream>
using namespace std;

int main() {
    int floor;
    char direction;

    cout << "Enter current floor (0-10): ";
    cin >> floor;

    if (floor < 0 || floor > 10) {
        cout << "Invalid floor! Building has floors 0 to 10 only." << endl;
        return 0;
    }

    cout << "Enter direction (U for Up / D for Down): ";
    cin >> direction;

    if (direction == 'U' || direction == 'u') {
        if (floor == 10) {
            cout << "Error: Cannot go above 10th floor." << endl;
        } else {
            ++floor; // increment floor
            cout << "Elevator moved to floor: " << floor << endl;
        }
    }
    else if (direction == 'D' || direction == 'd') {
        if (floor == 0) {
            cout << "Error: Cannot go below ground floor." << endl;
        } else {
            --floor; // decrement floor
            cout << "Elevator moved to floor: " << floor << endl;
        }
    }
    else {
        cout << "Invalid Input" << endl;
    }

    return 0;
}
