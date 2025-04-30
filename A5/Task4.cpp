#include <iostream>
using namespace std;

void displayMultiplicationTable(int number, int size) {
    cout << "Multiplication Table for " << number << " (Size: " << size << "x" << size << "):" << endl;
    
   
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << number * (i * j) << "\t";  
        }
        cout << endl;  
    }
}

int main() {
    int number = 5; 
    int size = 5;   

    displayMultiplicationTable(number, size);  

    return 0;
}
