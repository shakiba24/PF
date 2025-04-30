#include <iostream>
#include <string>
using namespace std;

const int NUM_EMPLOYEES = 20;
const int NUM_MONTHS = 12;

// Structure to store employee data
struct Employee {
    int employeeID;
    string name;
    float basicSalary;
    float bonuses[NUM_MONTHS];
    float totalSalary;
};

// Function to calculate the total salary for each employee
void calculateTotalSalary(Employee employees[], int numEmployees) {
    for (int i = 0; i < numEmployees; i++) {
        employees[i].totalSalary = employees[i].basicSalary;
        for (int j = 0; j < NUM_MONTHS; j++) {
            employees[i].totalSalary += employees[i].bonuses[j];
        }
    }
}
// Function to find and display the employee with the highest total salary
void displayHighestSalary(Employee employees[], int numEmployees) {
    int maxIndex = 0;
    for (int i = 1; i < numEmployees; i++) {
        if (employees[i].totalSalary > employees[maxIndex].totalSalary) {
            maxIndex = i;
        }
    }
    cout << "\nEmployee with the highest salary:\n";
    cout << "ID: " << employees[maxIndex].employeeID << ", Name: " << employees[maxIndex].name
         << ", Total Salary: " << employees[maxIndex].totalSalary << endl;
}

// Function to display employees with total salary greater than a threshold
void displayAboveThreshold(Employee employees[], int numEmployees, float threshold) {
    cout << "\nEmployees with salary above " << threshold << ":\n";
    for (int i = 0; i < numEmployees; i++) {
        if (employees[i].totalSalary > threshold) {
            cout << "ID: " << employees[i].employeeID << ", Name: " << employees[i].name
                 << ", Total Salary: " << employees[i].totalSalary << endl;
        }
    }
}
// Function to generate the report of all employees
void generateReport(Employee employees[], int numEmployees) {
    cout << "\nEmployee Report:\n";
    for (int i = 0; i < numEmployees; i++) {
        cout << "ID: " << employees[i].employeeID << ", Name: " << employees[i].name
             << ", Basic Salary: " << employees[i].basicSalary
             << ", Total Salary: " << employees[i].totalSalary << endl;
    }
}

int main() {
    Employee employees[NUM_EMPLOYEES];
    int numEmployees;

    cout << "Enter the number of employees (max 20): ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "Employee ID: ";
        cin >> employees[i].employeeID;
        cin.ignore(); // To handle newline character
        cout << "Name: ";
        getline(cin, employees[i].name);
        cout << "Basic Salary: ";
        cin >> employees[i].basicSalary;

        cout << "Enter bonuses for 12 months:\n";
        for (int j = 0; j < NUM_MONTHS; j++) {
            cout << "Month " << j + 1 << ": ";
            cin >> employees[i].bonuses[j];
        }
    }

    calculateTotalSalary(employees, numEmployees);

    displayHighestSalary(employees, numEmployees);
    float threshold;
    cout << "\nEnter the salary threshold: ";
    cin >> threshold;
    displayAboveThreshold(employees, numEmployees, threshold);
    generateReport(employees, numEmployees);
    return 0;
}
