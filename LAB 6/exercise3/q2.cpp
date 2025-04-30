#include <iostream>
using namespace std;

int main() {
    char ch;
    

    cout << "Enter a character: ";
    cin >> ch;
    
    
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout<< ch <<" is a vowel\n"; 
            break;
        default:
            
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                cout << ch << " is a consonant." << endl;} 
                else {
                cout << "Invalid input! Please enter an alphabet character." << endl;}
    }

    return 0;
}