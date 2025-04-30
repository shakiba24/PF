#include <iostream>
using namespace std;

int main() {
    double number; // Use double to allow input of decimals
    cout << "Enter a number: ";
    cin >> number;

    // Check whether the number is positive, negative, or zero
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
