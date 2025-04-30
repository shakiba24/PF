#include <iostream>
using namespace std;
int main() {

    int number; 

    
    while (true) {
        cout<<"Enter a positive number (negative to exit): ";
        cin>>number; 
       
        if (number < 0) {
            cout << "Negative number entered. Exiting the loop." << endl;
            break; 
        }

       
        cout<<"You entered: " <<number<<endl;
    }

    cout<<"Loop has been exited."<<endl;
    return 0;
}