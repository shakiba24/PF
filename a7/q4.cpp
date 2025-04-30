#include <iostream>
using namespace std;

int main() {
    int grade;  // Variable to store the user's grade input

    // Start the loop
    do {
        cout << "Enter a grade (0-100) or -1 to stop: ";
        cin >> grade;  // Get grade from the user

        // Check if the user wants to exit
        if (grade == -1) {
            cout << "Program ended." << endl;
            break;  // Stop the loop if -1 is entered
        }

        // Check if the grade is within the valid range
        if (grade >= 0 && grade <= 100) {
            // Check if the grade is a pass or fail
            if (grade >= 50) {
                cout << "Pass" << endl;
            } else {
                cout << "Fail" << endl;
            }
        } else {}
    }
}
