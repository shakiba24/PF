#include <iostream>
#include <string>
using namespace std;

// Define the Employee structure
struct Employee {
    string name;
    int id;
    float salary;
};

// Function to create a new Employee
Employee* createEmployee() {
    return new Employee; // Allocate memory for an Employee
}

// Function to input employee data
void inputEmployeeData(Employee* emp) {
    cout << "Enter Employee Name: ";
    cin >> emp->name;
    cout << "Enter Employee ID: ";
    cin >> emp->id;
    cout << "Enter Employee Salary: ";
    cin >> emp->salary;
}

// Function to display employee data
void displayEmployee(Employee* emp) {
    cout << "Name: " << emp->name << ", ID: " << emp->id << ", Salary: $" << emp->salary << endl;
}

// Function to delete an Employee
void deleteEmployee(Employee* emp) {
    delete emp; // Free memory
}

int main() {
    const int numEmployees = 5;
    Employee* employees[numEmployees];

    // Input data for employees
    for (int i = 0; i < numEmployees; ++i) {
        employees[i] = createEmployee();
        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        inputEmployeeData(employees[i]);
    }

    // Display data for employees
    cout << "\nEmployee Details:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        displayEmployee(employees[i]);
    }

    // Delete employee data
    for (int i = 0; i < numEmployees; ++i) {
        deleteEmployee(employees[i]);
    }

    return 0;
}
