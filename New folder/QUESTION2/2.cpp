#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    // Prime numbers are greater than 1
    if (num <= 1)
        return false;

    // Check divisors up to the square root of the number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false; // Not a prime number
    }
    return true; // Prime number
}

int main() {
    int number;
    
    // Input from user
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is prime
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
