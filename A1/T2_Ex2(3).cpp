#include <iostream>
using namespace std;
int main() {

    
    int sum = 0;      
    int number = 50;  

    while (number <= 250) {
     if (number % 2 == 0) {  
            sum += number;}
        number++;
 }

    cout<<"The sum of all even numbers from 50 to 250 is: "<<sum<<endl;
    return 0;
}
