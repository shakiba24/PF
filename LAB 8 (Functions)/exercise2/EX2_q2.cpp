#include <iostream>
using namespace std;

int largest_num(int num1, int num2, int num3, int num4) {
    int largest = num1;  
        if (num2 > largest) {
            largest = num2;}
        if (num3 > largest) {
            largest = num3;}
        if (num4 > largest) {
            largest = num4;}

  return largest;}
  

int main(){
    int num1, num2, num3, num4;
    
    cout<<"Enter four numbers :";
    cin>>num1>>num2>>num3>>num4;
    cout<<"The largest number is "<< largest_num(num1, num2, num3, num4);

    return 0;
}