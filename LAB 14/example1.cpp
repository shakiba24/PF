#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct PayRoll {
    int empNumber;
    string name;
    double hours;
    double payRate;
    double grossPay;
};

int main() {
    PayRoll employee;
    cout << "Enter the employee's number: ";
    cin >> employee.empNumber;
    cout << "Enter the employee's name: ";
    cin.ignore();
    getline(cin, employee.name);
    cout << "How many hours did the employee work? ";
    cin >> employee.hours;
    cout << "What is the employee's hourly payRate? ";
    cin >> employee.payRate;
    employee.grossPay = employee.hours * employee.payRate;
    cout << "Here is the employee's payroll data:\n";
    cout <<  "Name: " << employee.name << "\n";
    cout << "Number: " << employee.empNumber << "\n";
    cout << "Hours Worked: " << employee.hours << "\n";
    cout << "Hourly PayRate: $" << fixed << setprecision(2) << employee.payRate << "\n";
    cout << "Gross Pay: $" << employee.grossPay << "\n";

    return 0;
}