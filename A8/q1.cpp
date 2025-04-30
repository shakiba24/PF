#include <iostream>
using namespace std;
int main() {

        int number;            
    int positiveCount = 0; 
    int negativeCount = 0; 

    cout<<"Enter numbers (enter 0 to stop): " << endl;
    do {
        cin >> number;  

        if (number > 0) {
            positiveCount = positiveCount + 1;} 
            else if (number < 0) {
            negativeCount = negativeCount + 1; 
        }

    } while (number != 0);  
    cout<<"Positive numbers entred: "<< positiveCount <<endl;
    cout<<"Negative numbers entered: "<< negativeCount <<endl;

    return 0;
}
