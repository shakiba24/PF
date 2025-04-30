#include <iostream>
using namespace std;
int main() {

    int grade; 
    do {
        cout<<"Enter a grade (0-100) or -1 to stop: ";
        cin >> grade; 

    if (grade == -1) {
            cout<<"Program ended." <<endl;
            break;}
        if (grade >= 0 && grade <= 100) {
        
            if (grade >= 50) {
                cout << "Pass" << endl;}
                 else {
                cout << "Fail" << endl;}
        } else {
            
            cout<<"Invalid grade. Please enter a grade between 0 and 100." <<endl;}

    } while (grade != -1); 

    return 0;
}