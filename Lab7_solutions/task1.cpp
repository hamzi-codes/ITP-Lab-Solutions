#include <iostream>
#include <cstdlib>   // for rand()
#include <ctime>     // for time()

using namespace std;

int main() {
    const int ROWS = 15;
    const int COLS = 10;
    char seats[ROWS][COLS];
    int totalIncome = 0;

    // Initialize all seats as free ('O')
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = 'O';
        }
    }

    srand(time(0)); // seed random number generator
    int choice;

    while (true) {
        cout << "\n===== CINEMA TICKET SYSTEM =====\n";
        cout << "1. Buy a ticket\n";
        cout << "2. Cancel a ticket\n";
        cout << "3. Display current status\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            char pick;
            cout << "Do you want to choose a specific seat? (y/n): ";
            cin >> pick;

            int row, seat;

            if (pick == 'y' || pick == 'Y') {
                cout << "Enter row (1-15): ";
                cin >> row;
                cout << "Enter seat (1-10): ";
                cin >> seat;

                // input validation
                if (row < 1 || row > 15 || seat < 1 || seat > 10) {
                    cout << "Invalid row or seat number!\n";
                    continue;
                }

                if (seats[row - 1][seat - 1] == 'X') {
                    cout << "Seat already reserved!\n";
                } else {
                    seats[row - 1][seat - 1] = 'X';
                    totalIncome += 6;
                    cout << "Seat booked successfully! Price: $6\n";
                }
            } else {
                // Random seat selection
                bool found = false;
                for (int tries = 0; tries < 100; tries++) {
                    int r = rand() % ROWS;
                    int c = rand() % COLS;
                    if (seats[r][c] == 'O') {
                        seats[r][c] = 'X';
                        totalIncome += 6;
                        cout << "Random seat assigned at Row " << (r + 1)
                             << ", Seat " << (c + 1) << ". Price: $6\n";
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "No free seats available!\n";
            }

        } else if (choice == 2) {
            int row, seat;
            cout << "Enter row (1-15): ";
            cin >> row;
            cout << "Enter seat (1-10): ";
            cin >> seat;

            if (row < 1 || row > 15 || seat < 1 || seat > 10) {
                cout << "Invalid row or seat number!\n";
                continue;
            }

            if (seats[row - 1][seat - 1] == 'X') {
                seats[row - 1][seat - 1] = 'O';
                totalIncome -= 5;
                cout << "Ticket cancelled. Refund: $5\n";
            } else {
                cout << "Seat was not reserved!\n";
            }

        } else if (choice == 3) {
            cout << "Total income so far: $" << totalIncome << "\n";
            cout << "Seat layout (X = reserved, O = free)\n";
            for (int i = 0; i < ROWS; i++) {
                cout << "Row " << (i + 1);
                if (i + 1 < 10) cout << " ";
                cout << ": ";
                for (int j = 0; j < COLS; j++) {
                    cout << seats[i][j] << " ";
                }
                cout << "\n";
            }

        } else if (choice == 4) {
            cout << "Exiting program... Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
