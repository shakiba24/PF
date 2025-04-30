#include <iostream>
using namespace std;

int product(int a, int b){
    return a * b;
}

int main(){
    int num1, num2;

    cout<<"Enter a number: ";
    cin>> num1;
    cout<<"enter another number";
    cin>> num2;

    int result = product(num1, num2);
    cout<<"The prodDuct of "<< num1 <<" and "<< num2 <<" is "<< result;



    return 0;
}