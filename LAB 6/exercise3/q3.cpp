#include <iostream>
using namespace std;
int main() {
    int start, end;

    cout<<"Enter the starting number: ";
    cin>>start;
    cout<<"Enter the ending number: ";
    cin>>end;
    cout<< "\nSequence from " << start << " to " << end << ":\n";



    for (int i = start; i <= end; i++3) {    
    cout << i << " ";}
    
return 0;
}