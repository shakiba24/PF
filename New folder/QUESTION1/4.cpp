#include <iostream>
using namespace std;

// Function to check if the number is Even or Odd
string checkEvenOdd(int num) {
    if (num % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Call the function and print the result
    cout << "The number is " << checkEvenOdd(number) << "." << endl;

    return 0;
}
