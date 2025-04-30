#include <iostream>
#include <iomanip>  // For setting the output width

using namespace std;

int main() {
    int number, limit;

    // Prompt user for the number and limit
    cout << "Enter the number for the multiplication table: ";
    cin >> number;
    cout << "Enter the limit for the multiplication table: ";
    cin >> limit;

    // Display the multiplication table
    cout << "\nMultiplication table for " << number << " up to " << limit << ":\n";
    
    // Loop to print the multiplication table
    for (int i = 1; i <= limit; i++) {
        cout << setw(2) << number << " x " << setw(2) << i << " = " << setw(3) << number * i << endl;
    }

    return 0;
}
