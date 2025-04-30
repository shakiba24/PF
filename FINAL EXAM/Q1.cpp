#include <iostream>
#include <string>
using namespace std;

// Function to input student details and marks
void inputDetails(string &name, int marks[], int numSubjects) {
    cout << "Enter student's name: ";
    getline(cin, name);

    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}
// Function to calculate the total marks
int calculateTotal(int marks[], int numSubjects) {
    int total = 0;
    for (int i = 0; i < numSubjects; i++) {
        total += marks[i];
    }
    return total;
}
// Function to calculate the average marks
double calculateAverage(int total, int numSubjects) {
    return static_cast<double>(total) / numSubjects;
}
// Function to determine the grade based on the average marks
char calculateGrade(double average) {
    if (average >= 90) return 'A';
    if (average >= 80) return 'B';
    if (average >= 70) return 'C';
    if (average >= 60) return 'D';
    return 'F';
}
// Function to display the report card
void displayReport(const string &name, int marks[], int numSubjects, int total, double average, char grade) {
    cout << "\n----- Report Card -----\n";
    cout << "Student Name: " << name << endl;

    for (int i = 0; i < numSubjects; i++) {
        cout << "Subject " << i + 1 << " Marks: " << marks[i] << endl;
    }

    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Grade: " << grade << endl;
}
int main() {
    const int numSubjects = 5; // Number of subjects
    string name;
    int marks[numSubjects];

    cin.ignore(); 
    inputDetails(name, marks, numSubjects);
    // Calculate total, average, and grade
    int total = calculateTotal(marks, numSubjects);
    double average = calculateAverage(total, numSubjects);
    char grade = calculateGrade(average);
    // Display the report card
    displayReport(name, marks, numSubjects, total, average, grade);

    return 0;
}
