#include <iostream>
#include <string>
#include <limits>  // For numeric_limits
using namespace std;

int main() {
    string name, address, serviceMode;
    float weight;
    double shippingCost = 0;

    // Input user details
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your address: ";
    getline(cin, address);

    // Input service mode (N for Normal, U for Urgent)
    while (true) {
        cout << "Enter service mode (N for Normal, U for Urgent): ";
        cin >> serviceMode;

        if (serviceMode == "N" || serviceMode == "U") {
            break;  // Valid input, break the loop
        } else {
            cout << "Invalid input! Please enter N for Normal or U for Urgent.\n";
        }
    }

    // Input weight of the package
    while (true) {
        cout << "Enter the weight of the package in kilograms: ";
        cin >> weight;

        // Check if input is a valid number and greater than 0
        if (cin.fail() || weight <= 0) {
            cout << "Invalid input! Weight must be a number greater than zero.\n";
            cin.clear();  // Clear error flag on cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
        } else {
            break;  // Valid weight, break the loop
        }
    }

    // Calculate shipping cost based on normal service mode
    if (serviceMode == "N") {
        if (weight <= 5) {
            shippingCost = 500;
        } else if (weight > 5 && weight < 20) {
            shippingCost = 1500;
        } else if (weight >= 20) {
            shippingCost = 2500;
        }
    } 
    // Urgent service mode is 3 times more expensive
    else if (serviceMode == "U") {
        if (weight <= 5) {
            shippingCost = 500 * 3;
        } else if (weight > 5 && weight < 20) {
            shippingCost = 1500 * 3;
        } else if (weight >= 20) {
            shippingCost = 2500 * 3;
        }
    }

    // Display the shipping details
    cout << "\nShipping Details:\n";
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Service Mode: " << (serviceMode == "N" ? "Normal" : "Urgent") << endl;
    cout << "Package Weight: " << weight << " kg" << endl;
    cout << "Shipping Charges: " << shippingCost << " rupees\n";

    return 0;
}
