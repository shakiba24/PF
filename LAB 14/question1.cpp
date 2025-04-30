#include <iostream>
#include <string>
using namespace std;
struct Student {
    int rollNumber;
    string name;
    float marks;
};

int main() {
   
    const int numStudents = 3; 
    Student students[numStudents] = {
        {101, "Shakiba", 85.5},
        {102, "Hafsa", 78.0},
        {103, "Fatima", 92.3}
    };
    cout << "Student Details:\n";
    cout << "--------------------------------\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Roll Number: " << students[i].rollNumber << "\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Marks: " << students[i].marks << "\n";
        cout << "--------------------------------\n";
    }

    return 0;
}
