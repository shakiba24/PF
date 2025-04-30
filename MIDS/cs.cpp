#include <iostream>
using namespace std;

int main() {
    int choice;  // Variable to hold user's selection

    // Display the menu
    cout << "Welcome to the Restaurant Menu!" << endl;
    cout << "Please select an item from the menu (1-5):" << endl;
    cout << "1. Burger - $5.99" << endl;
    cout << "2. Pizza - $8.99" << endl;
    cout << "3. Pasta - $7.49" << endl;
    cout << "4. Salad - $4.99" << endl;
    cout << "5. Soda - $1.99" << endl;

    // Take user's input for item selection
    cout << "Enter the number of your choice: ";
    cin >> choice;

    // Handle the selection using a switch statement
    switch (choice) {
        case 1:
            cout << "You selected Burger - $5.99" << endl;
            break;
        case 2:
            cout << "You selected Pizza - $8.99" << endl;
            break;
        case 3:
            cout << "You selected Pasta - $7.49" << endl;
            break;
        case 4:
            cout << "You selected Salad - $4.99" << endl;
            break;
        case 5:
            cout << "You selected Soda - $1.99" << endl;
            break;
        default:
            cout << "Invalid selection. Please choose a number between 1 and 5." << endl;
            break;
    }

    return 0;  // End of the program
}














#include <iostream>
using namespace std;

int main() {
    // Declare variables to hold the marks for each subject
    double math, science, english;

    // Input the marks for each subject
    cout << "Enter the marks for Mathematics: ";
    cin >> math;
    cout << "Enter the marks for Science: ";
    cin >> science;
    cout << "Enter the marks for English: ";
    cin >> english;

    // Check if the student meets the eligibility criteria
    if (math > 80 && science > 75 && english > 70) {
        // If all conditions are met, the student is eligible
        cout << "The student is eligible for the scholarship." << endl;
    } else {
        // If any condition is not met, the student is not eligible
        cout << "The student is not eligible for the scholarship." << endl;
    }

    return 0;  // End of the program
}












#include <iostream>
#include <string>
using namespace std;

int main() {
    // Predefined username and password
    string correct_username = "user";
    string correct_password = "password";

    string entered_username, entered_password;
    int attempts = 0; // Counter for login attempts

    // Loop to allow the user to try 3 times
    while (attempts < 3) {
        // Ask user to enter username and password
        cout << "Enter username: ";
        cin >> entered_username;
        cout << "Enter password: ";
        cin >> entered_password;

        // Check if entered username and password are correct
        if (entered_username == correct_username && entered_password == correct_password) {
            cout << "Login successful!" << endl;
            return 0; // Exit the program if login is successful
        } else {
            // If login fails, increment attempts and show message
            attempts++;
            cout << "Incorrect username or password. You have " << (3 - attempts) << " attempt(s) left." << endl;
        }
    }

    // If the user fails to login 3 times
    cout << "Account locked due to 3 incorrect login attempts." << endl;
    return 0; // End the program
}












#include <iostream>
using namespace std;

// Function for addition
float add(float a, float b) { return a + b; }
// Function for subtraction
float subtract(float a, float b) { return a - b; }
// Function for multiplication
float multiply(float a, float b) { return a * b; }
// Function for division
float divide(float a, float b) { return (b != 0) ? a / b : 0; }

int main() {
    float num1, num2;
    int choice;

    // Display the menu
    cout << "Select operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;

    // Get two numbers from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call the corresponding function based on user choice
    if (choice == 1) cout << "Result: " << add(num1, num2) << endl;
    else if (choice == 2) cout << "Result: " << subtract(num1, num2) << endl;
    else if (choice == 3) cout << "Result: " << multiply(num1, num2) << endl;
    else if (choice == 4) {
        if (num2 == 0) cout << "Error! Division by zero.\n";
        else cout << "Result: " << divide(num1, num2) << endl;
    } else cout << "Invalid choice.\n";

    return 0;
}
