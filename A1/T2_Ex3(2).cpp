#include <iostream>
using namespace std;
int main() {

    int N; 
    int sum = 0; 
    int count = 0;
    int currentOdd = 1; 

    cout<<"Enter the num of odd numbers to sum: ";
    cin>>N;
    
    if (N <= 0) {
        cout << "Please enter a positive integer." <<endl;
        return 1;}
    
    do {
        sum += currentOdd; 
        currentOdd += 2; 
        count++;
    } while (count < N); 

   
    cout<<"The sum of the first "<< N <<" odd numbers is: "<< sum <<endl;

    return 0;
}
