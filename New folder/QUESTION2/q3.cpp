#include <iostream>
using namespace std;

int main() {
    int grade;
    
    // Ask the user to input a numeric grade
    cout << "Enter your numeric grade: ";
    cin >> grade;

    // Check the grade range and classify it into a letter grade
    if (grade >= 90 && grade <= 100) {
        cout << "Your grade is: A" << endl;
    } else if (grade >= 80 && grade <= 89) {
        cout << "Your grade is: B" << endl;
    } else if (grade >= 70 && grade <= 79) {
        cout << "Your grade is: C" << endl;
    } else if (grade >= 60 && grade <= 69) {
        cout << "Your grade is: D" << endl;
    } else if (grade < 60 && grade >= 0) {
        cout << "Your grade is: F" << endl;
    } else {
        // Handle invalid input (e.g., grades outside the 0-100 range)
        cout << "Invalid grade entered. Please enter a grade between 0 and 100." << endl;
    }

    return 0;
}
