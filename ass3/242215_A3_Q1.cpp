
#include <iostream>
using namespace std;

int main() {
    int feet, inches;
    double centimeters;

    cout << "Enter the length in feet: ";
    cin >> feet;

    cout << "Enter the length in inches: ";
    cin >> inches;

    centimeters = (feet * 30.48) + (inches * 2.54);
    cout << "The equivalent length in centimeters is: " << centimeters << " cm" << endl;

    char character;
    cout << "\nEnter a character: ";
    cin >> character;

    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
        cout << "The character '" << character << "' is an alphabet." << endl;
    }
    else {
        cout << "The character '" << character << "' is not an alphabet." << endl;
    }

    return 0;
}