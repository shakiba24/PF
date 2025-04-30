#include <iostream>
using namespace std;

// Function to find the larger number
int findLarger(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    // Call the function and display the larger number
    cout << "The larger number is: " << findLarger(number1, number2) << endl;

    return 0;
}
