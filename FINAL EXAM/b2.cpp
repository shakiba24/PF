#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    int marks[3];
    int totalMarks;};

void calculateTotalMarks(Student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].totalMarks = 0;
        for (int j = 0; j < 3; j++) {
            students[i].totalMarks += students[i].marks[j]; }}
}
void findTopStudent(Student students[], int numStudents) {
    int maxMarks = -1;
    int topIndex = -1;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].totalMarks > maxMarks) {
            maxMarks = students[i].totalMarks;
            topIndex = i;
        }
    }
    cout<<"\nTop Student:\n";
    cout<<"Roll Number: " << students[topIndex].rollNumber <<"\n";
    cout<<"Name: " << students[topIndex].name << "\n";
    cout<<"Total Marks: " << students[topIndex].totalMarks <<"\n";
}

void listStudentsAbovePercentage(Student students[], int numStudents, float percentage) {
    float threshold = (percentage / 100) * 300; 
    cout<<"\nStudents scoring above " << percentage << "%:\n";
    for (int i = 0; i < numStudents; i++) {
        if (students[i].totalMarks > threshold) {
            cout << "Roll Number: " << students[i].rollNumber << ", Name: " << students[i].name << ", Total Marks: " << students[i].totalMarks << "\n";
        }
    }   
}

int main() {
    const int numStudents = 10;
    Student students[numStudents];

    cout<<"Enter details for "<< numStudents <<" students:\n";
    for (int i = 0; i < numStudents; i++) {
        cout<<"\nStudent " << i + 1 << ":\n";
        cout<<"Roll Number: ";
        cin>> students[i].rollNumber;
        cin.ignore(); 
        cout<<"Name: ";
        getline(cin, students[i].name);
        cout<<"Enter marks in 3 subjects:\n";
        for(int j = 0; j < 3; j++) {
            cout<<"Subject " << j + 1 << ": ";
            cin>> students[i].marks[j];}}

    calculateTotalMarks(students, numStudents);
    findTopStudent(students, numStudents);

    float percentage;
    cout<<"\nEnter the percentage threshold to list students: ";
    cin>>percentage;
    listStudentsAbovePercentage(students, numStudents, percentage);

    return 0;
}