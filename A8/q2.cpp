#include <iostream>
#include <string>
using namespace std;
int main() {

  string password;                     
  const string correctPassword = "12345";  

    do {
        cout<<"Enter password: ";
        cin>> password; 

    
    if (password == correctPassword) {
            cout << "Access Granted" << endl;} 
            else {
            cout << "Incorrect Password. Try again." << endl;}

    } while (password != correctPassword);

    return 0;

}