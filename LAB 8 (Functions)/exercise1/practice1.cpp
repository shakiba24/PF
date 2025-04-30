#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;}

int subtract(int a, int b) {
    return a - b;}

int product(int a, int b){
    return a * b;}

int divide(int a, int b){
    return a/b;}

int main (){
    string operation;
    int num1, num2;

    cout<<"Enter the first number: ";
    cin>> num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    cout<<"Operation you want to perform "<<endl;
    cout<<"(Enter A for addition, S for subtraction, M for multiplication, D for division) :";
    cin>>operation;


    if(operation == "A" || operation == "a"){
        int result = sum(num1, num2); 
        cout <<"The sum of " << num1 << " and " << num2 << " is: " << result << endl;}
        
    else if(operation == "S" || operation == "s"){
        int result = subtract(num1, num2);
        cout <<"The difference of " << num1 << " and " << num2 << " is: " << result << endl;}

    else if(operation == "M" || operation == "m"){
        int result = product(num1, num2);
        cout <<"The product of " << num1 << " and " << num2 << " is: " << result << endl;}

     else if(operation == "D" || operation == "d"){
        int result = divide(num1, num2);
        cout <<"The  of " << num1 << " and " << num2 << " is: " << result << endl;}

      else{
        cout<<"Error: INvalid operation";}
    return 0;
}