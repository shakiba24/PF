#include <iostream>
#include <ctime> // For getting the current year

using namespace std;

int main() {
    int birthYear, currentYear, age;

    // Get the current year using the time library
    currentYear = 2025; // For example, set this manually or use: currentYear = 1900 + localtime(&now)->tm_year;

    // Input the birth year
    cout << "Enter your birth year: ";
    cin >> birthYear;

    // Calculate the age
    if (birthYear > currentYear) {
        cout << "Invalid birth year! Please enter a valid year." << endl;
    } else {
        age = currentYear - birthYear;

        // Display the age
        cout << "You are " << age << " years old." << endl;
        if (age >= 18) {
            cout << "You are an adult!" << endl;
        } else {
            cout << "You are a minor!" << endl;
        }
    }

    return 0;
}
