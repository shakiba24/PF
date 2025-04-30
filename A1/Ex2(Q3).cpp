#include <iostream>
using namespace std;
int main() {
    
    int a, b, c, d;
    cout<<"Enter four integers: ";
    cin>> a >> b >> c >> d;

    int largest;

    if (a >= b && a >= c && a >= d) {
        largest = a;}
        else if (b >= c && b >= d) {
        largest = b;} 
        else if (c >= d) {
        largest = c;} 
        else {
        largest = d;}

    cout<<"The largest numbe is: " <<largest<<endl;
    return 0;
}

