#include <iostream>
using namespace std;


void printAsterrisks() {
    for (int i = 0; i < 14; i++) {
        cout << "* ";}
    cout<<endl;}


void printTable(int number) {
    for (int i = 1; i <= 10; i++) {
        cout << number * i << " ";}
    cout<<endl;}


int main() {
    int N;

    cout<<"Enter the value of N: ";
    cin>>N;
    cout<<"The tables from 1 to " <<N<<" are:"<<endl;

   
    for (int i = 1; i <= N; i++) {
        printTable(i);        
        printAsterrisks();}
return 0;
}