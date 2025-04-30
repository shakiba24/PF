#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Check divisibility by both 3 and 5
    if (number % 3 == 0 && number % 5 == 0) {
        cout << number << " is divisible by both 3 and 5." << endl;
    } else {
        cout << number << " is not divisible by both 3 and 5." << endl;
    }

    return 0;
}
