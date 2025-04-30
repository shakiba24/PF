#include <iostream>
using namespace std;

int main() {
    int numbers[10]; 
    int count = 0;  


    cout<<"Enter 10 integers:"<<endl;

    for (int i = 0; i < 10; i++) {
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> numbers[i];

      
        if (numbers[i] >= 10) {
            count++;}
    }


    cout<<"The number of integers greater than or equal to 10 is: "<< count <<endl;
    return 0;
}

  