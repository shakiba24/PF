#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Course {
    string courseID;
    string title;
    int creditHours;
};

struct Student {
    string studentID;
    string name;
    vector<Course> courses;
};

Student* addStudent() {
    Student* newStudent = new Student;
    cout << "Enter Student ID: ";
    cin >> newStudent->studentID;
    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, newStudent->name);
    return newStudent;
}

void registerCourse(Student* student) {
    Course course;
    cout << "Enter Course ID: ";
    cin >> course.courseID;
    cin.ignore();
    cout << "Enter Course Title: ";
    getline(cin, course.title);
    cout << "Enter Credit Hours: ";
    cin >> course.creditHours;
    student->courses.push_back(course);
    cout << "Course registered successfully.\n";
}

void updateCourse(Student* student) {
    string courseID;
    cout << "Enter the Course ID to update: ";
    cin >> courseID;
    bool found = false;

    for (auto& course : student->courses) {
        if (course.courseID == courseID) {
            found = true;
            cout << "Enter new Course Title: ";
            cin.ignore();
            getline(cin, course.title);
            cout << "Enter new Credit Hours: ";
            cin >> course.creditHours;
            cout << "Course updated successfully.\n";
            break;
        }
    }

    if (!found) {
        cout << "Course with ID " << courseID << " not found.\n";
    }
}

void displayCourses(const Student* student) {
    cout << "Student ID: " << student->studentID << "\n";
    cout << "Student Name: " << student->name << "\n";
    cout << "Enrolled Courses:\n";
    int totalCreditHours = 0;

    if (student->courses.empty()) {
        cout << "No courses enrolled.\n";
    }
    else {
        for (const auto& course : student->courses) {
            cout << "  Course ID: " << course.courseID << ", Title: " << course.title
                << ", Credit Hours: " << course.creditHours << "\n";
            totalCreditHours += course.creditHours;
        }
        cout << "Total Credit Hours: " << totalCreditHours << "\n";
    }
}

int main() {
    vector<Student*> students;
    int choice;

    do {
        cout << "\nUniversity Course Enrollment System\n";
        cout << "1. Add Student\n";
        cout << "2. Register Course for a Student\n";
        cout << "3. Update Course Details\n";
        cout << "4. View Student Enrollment\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            Student* student = addStudent();
            students.push_back(student);
            cout << "Student added successfully.\n";
            break;
        }
        case 2: {
            string studentID;
            cout << "Enter Student ID: ";
            cin >> studentID;
            bool found = false;

            for (auto student : students) {
                if (student->studentID == studentID) {
                    registerCourse(student);
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student with ID " << studentID << " not found.\n";
            }
            break;
        }
        case 3: {
            string studentID;
            cout << "Enter Student ID: ";
            cin >> studentID;
            bool found = false;

            for (auto student : students) {
                if (student->studentID == studentID) {
                    updateCourse(student);
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student with ID " << studentID << " not found.\n";
            }
            break;
        }
        case 4: {
            string studentID;
            cout << "Enter Student ID: ";
            cin >> studentID;
            bool found = false;

            for (auto student : students) {
                if (student->studentID == studentID) {
                    displayCourses(student);
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student with ID " << studentID << " not found.\n";
            }
            break;
        }
        case 5:
            cout << "Exiting the system. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    for (auto student : students) {
        delete student;
    }

    return 0;
}