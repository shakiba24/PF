
#include <iostream>
using namespace std;

int IsPerfect(int num) {
    int sum = 0;
    int i = 1;

    
    while (i < num) {
        if (num % i == 0) {
            sum += i; }
        i++; }

    
    if (sum == num) {
        return 1;} 
    else {
        return 0;}
}


void DisplayDivisors(int num) {
    cout<<"Divisors of "<< num <<" are: ";
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            cout << i << " ";}
    }
    cout<<endl;
}

int main() {
    int N;

    
    cout<<"Enter a number: ";
    cin>>N;

    for (int i = 1; i <= N; i++) {
        if (IsPerfect(i)) {
            cout<< i <<" is a perfect number"<<endl;
            DisplayDivisors(i);}
    }

return 0;
}