#include <iostream>

using namespace std;

int main() {
    double principal, rate, time, interest, totalAmount;

    // Input values
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest (in %): ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;

    // Validate inputs
    if (principal <= 0 || rate <= 0 || time <= 0) {
        cout << "Please enter valid positive numbers for all fields." << endl;
        return 1; // Exit the program if invalid input
    }

    // Calculate simple interest
    interest = (principal * rate * time) / 100;
    totalAmount = principal + interest;

    // Output results
    cout << "Simple Interest: " << interest << endl;
    cout << "Total Amount after interest: " << totalAmount << endl;

    return 0;
}
