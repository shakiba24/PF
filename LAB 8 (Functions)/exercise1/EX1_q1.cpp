#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;}

int main() {
    int num1, num2;

    cout<<"Enter the first number: ";
    cin>> num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    int result = sum(num1, num2); 
    cout <<"The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}