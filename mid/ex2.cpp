#include <iostream>
using namespace std;

int main() {
    const int correctPIN = 1234;
    const double initialBalance = 1000.0;
    double balance = initialBalance;
    int pin, attempts = 0;
    double withdrawalAmount;

    // Check PIN with a limit of 3 attempts
    while (attempts < 3) {
        cout << "Enter your PIN: ";
        cin >> pin;
        if (pin == correctPIN) {
            break;
        } else {
            cout << "Incorrect PIN. Try again.\n";
            attempts++;
        }
    }

    if (attempts == 3) {
        cout << "Account locked due to too many incorrect attempts.\n";
        return 1;
        }

    // Withdraw funds
    cout << "Enter withdrawal amount: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount > balance) {
        cout << "Insufficient balance. Cannot withdraw.\n";
    } else {
        balance -= withdrawalAmount;
        cout << "Withdrawal successful! Remaining balance: $" << balance << endl;
    }

return 0;
}
