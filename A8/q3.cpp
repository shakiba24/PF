#include <iostream>
using namespace std;
int main() {


    int number;                
    int oddSum = 0;           s
    int evenSum = 0;         

    cout<<"Enter numbers (enter a negative number to stop): " <<endl;
    for (;;) {
        cin>>number;  

       
     if (number < 0) {
            break;}
       
        if (number % 2 == 0) {
            evenSum += number;} 
            else {
            oddSum += number;  
        }
    }

    cout<<"Sum of even numbrrs: " << evenSum <<endl;
    cout<<"Sum of odd numbers: " << oddSum << endl;

 return 0;


}
