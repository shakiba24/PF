#include <iostream>

using namespace std;

int main() {
    int choice;
    double radius,length, width, base, height, area;

    cout << "Welcome to the Area Calculator!" << endl;
    cout << "Select a shape to calculate its area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        if (radius > 0) {
            area = 3.14 * radius * radius;
            cout << "The area of the circle is: " << area << endl;
        } else {
            cout << "Invalid radius! Please enter a positive number." << endl;
        }
    } else if (choice == 2) {
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        if (length > 0 && width > 0) {
            area = length * width;
            cout << "The area of the rectangle is: " << area << endl;
        } else {
            cout << "Invalid dimensions! Please enter positive numbers." << endl;
        }
    } else if (choice == 3) {

        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        if (base > 0 && height > 0) {
            area = 0.5 * base * height;
            cout << "The area of the triangle is: " << area << endl;
        } else {
            cout << "Invalid dimensions! Please enter positive numbers." << endl;
        }
    } else {
        cout << "Invalid choice! Please select 1, 2, or 3." << endl;
    }

    return 0;
}
