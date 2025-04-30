#include <iostream>
#include <string>
using namespace std;
struct BankAccount {
    int accountNumber;
    string accountHolderName;
    double balance;
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited $" << amount << ". New balance: $" << balance << "\n";
        }
        else {
            cout << "Invalid deposit amount!\n";
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Successfully withdrew $" << amount << ". Remaining balance: $" << balance << "\n";
        }
        else if (amount > balance) {
            cout << "Insufficient balance!\n";
        }
        else {
            cout << "Invalid withdrawal amount!\n";
        }
    }
};

int main() {
    BankAccount account = { 123456, "John Doe", 1000.00 };
    cout << "Account Details:\n";
    cout << "Account Number: " << account.accountNumber << "\n";
    cout << "Account Holder Name: " << account.accountHolderName << "\n";
    cout << "Balance: $" << account.balance << "\n\n";
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    account.deposit(amount);

    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    account.withdraw(amount);
    cout << "\nFinal Account Balance: $" << account.balance << "\n";

    return 0;
}

