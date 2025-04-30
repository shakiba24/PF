#include <iostream>

using namespace std;

int main() {
    double temperature, convertedTemperature;
    int choice;

    cout << "Temperature Converter" << endl;
    cout << "Select the conversion type:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        // Celsius to Fahrenheit
        cout << "Enter the temperature in Celsius: ";
        cin >> temperature;
        convertedTemperature = (temperature * 9/5) + 32;
        cout << temperature << " Celsius is equal to " << convertedTemperature << " Fahrenheit." << endl;
    } 
    else if (choice == 2) {
        // Fahrenheit to Celsius
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemperature = (temperature - 32) * 5/9;
        cout << temperature << " Fahrenheit is equal to " << convertedTemperature << " Celsius." << endl;
    } 
    else {
        cout << "Invalid choice! Please select 1 or 2." << endl;
    }

    return 0;
}
