#include <iostream>
#include <string>

using namespace std;

int main() {
    double amount, exchangeRate, convertedAmount;
    string fromCurrency, toCurrency;

    // Prompt user for the amount
    cout << "Enter the amount to convert: ";
    cin >> amount;
    if (amount <= 0) {
        cout << "Please enter a valid positive amount!" << endl;
        return 1; // Exit if amount is invalid
    }

    // Prompt user for the currency type
    cout << "Enter the currency you are converting from (e.g., USD): ";
    cin >> fromCurrency;
    cout << "Enter the currency you are converting to (e.g., EUR): ";
    cin >> toCurrency;

    // Prompt user for the exchange rate
    cout << "Enter the exchange rate from " << fromCurrency << " to " << toCurrency << ": ";
    cin >> exchangeRate;
    if (exchangeRate <= 0) {
        cout << "Please enter a valid positive exchange rate!" << endl;
        return 1; // Exit if exchange rate is invalid
    }

    // Perform the conversion
    convertedAmount = amount * exchangeRate;

    // Display the result
    cout << amount << " " << fromCurrency << " is equal to " 
         << convertedAmount << " " << toCurrency << "." << endl;

    return 0;
}
