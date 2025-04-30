#include <iostream>
#include <string>

using namespace std;

// Function to reverse the string
string reverseString(const string& str) {
    string reversed = "";
    
    // Loop through the string backwards and construct the reversed string
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    return reversed;
}

int main() {
    string input;

    // Get input string from user
    cout << "Enter a string: ";
    getline(cin, input);

    // Call the reverseString function and display the results
    string reversed = reverseString(input);
    cout << "Original string: " << input << endl;
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
