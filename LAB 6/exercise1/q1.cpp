#include <iostream>
using namespace std;
int main() {

int num1, num2, choice;
    
    cout<< "Enter first integer: ";
    cin>> num1;
    cout<<"Enter second integer: ";
    cin >>num2;
    

    cout<<"Choosee an operation to perform:\n";
    cout<<"1. Bitwise AND\n";
    cout<<"2. Bitwise OR\n";
    cout<<"3. Bitwise XOR\n";
    cout<<"4. Shift left (<<)\n";
    cout<<"5. Shift right (>>)\n";
    cout<<"6. Addition (+)\n";
    cout<<"7. Subtraction (-)\n";
    cout<<"8. Multiplication (*)\n";
    cout<<"9. Division (/)\n";
    

    cout<< "Enter your choice: ";
    cin>> choice;

    
    switch(choice) {
        case 1:
            cout<<"Bitwise AND: "<<(num1 & num2)<<endl;
            break;
        case 2:
            cout<<"Bitwise OR: "<<(num1 | num2)<<endl;
            break;
        case 3:
            cout<<"Bitwise XOR: " <<(num1 ^ num2)<<endl;
            break;
        case 4:
            cout << "Shift left: " <<(num1 << num2)<<endl;
            break;
        case 5:
            cout << "Shift right: " <<(num1 >> num2)<<endl;
            break;
        case 6:
            cout << "Addition: " <<(num1 + num2) << endl;
            break;
        case 7:
            cout << "Subtraction: " << (num1 - num2)<< endl;
            break;
        case 8:
            cout << "Multipllication: " << (num1 * num2) <<endl;
            break;
        case 9:


            if(num2 != 0) {
                cout << "Division: " << (num1 / num2) <<endl;} 
                else {
                cout << "Error: Division by zero is not allowed." << endl;}
            break;
            default:
            cout << "Invalid choive!" << endl;
            break;
    }

 return 0;


}