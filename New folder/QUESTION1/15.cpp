#include <iostream>
using namespace std;

void printMultiplicationTable(int number) {
    cout << "Multiplication table of " << number << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    // Call the function to print the table
    printMultiplicationTable(num);

    return 0;
}
