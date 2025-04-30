#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    // Prompt user for input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    // Perform the calculation based on the chosen operation
    if (operation == '+') {
        result = num1 + num2;
        cout << "Result: " << result << endl;
    }
    else if (operation == '-') {
        result = num1 - num2;
        cout << "Result: " << result << endl;
    }
    else if (operation == '*') {
        result = num1 * num2;
        cout << "Result: " << result << endl;
    }
    else if (operation == '/') {
        // Check for division by zero
        if (num2 == 0) {
            cout << "Error! Division by zero is not allowed." << endl;
        } else {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
    }
    else {
        cout << "Invalid operation! Please enter one of the following: +, -, *, /." << endl;
    }

    return 0;
}






// #include <iostream>

// using namespace std;

// int main() {
//     double num1, num2, result;
//     char operation;

//     // Prompt user for input
//     cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;
//     cout << "Enter the operation (+, -, *, /): ";
//     cin >> operation;

//     // Perform the calculation based on the chosen operation
//     switch (operation) {
//         case '+':
//             result = num1 + num2;
//             cout << "Result: " << result << endl;
//             break;
//         case '-':
//             result = num1 - num2;
//             cout << "Result: " << result << endl;
//             break;
//         case '*':
//             result = num1 * num2;
//             cout << "Result: " << result << endl;
//             break;
//         case '/':
//             if (num2 == 0) {
//                 cout << "Error! Division by zero is not allowed." << endl;
//             } else {
//                 result = num1 / num2;
//                 cout << "Result: " << result << endl;
//             }
//             break;
//         default:
//             cout << "Invalid operation! Please enter one of the following: +, -, *, /." << endl;
//             break;
//     }

//     return 0;
// }
