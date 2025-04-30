#include <iostream>
using namespace std;
int main(){

int hours[6];
for ( int i = 0; i < 6; i++){
    cout<<"Enter the no.of hours worked by "<< i+1 <<" employee = ";
    cin>> hours[i];
}

return 0;
}