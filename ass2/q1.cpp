#include <iostream>
using namespace std;

float feetInchesToCm(int feet, int inches) {
    int totalInches = feet * 12 + inches;
    float cm = totalInches * 2.54;
    return cm;
}

int main() {
    int feet, inches;

    cout << "Enter length in feet: ";
    cin >> feet;

    cout << "Enter additional length in inches: ";
    cin >> inches;

    float cm = feetInchesToCm(feet, inches);
    cout << "The equivalent length in centimetres is: " << cm << " cm" << endl;

    return 0;
}