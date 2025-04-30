#include <iostream>
using namespace std;
int main() {

 double total = 0.0;
 char choice;

do {
  double price;
  cout<<"Enter item price: ";
  cin>>price;
  total += price;
 
  cout<<"Do you want to add another item? (y/n): ";
  cin>>choice;}

 while (choice == 'y' || choice == 'Y');

cout<<"Total amount: Rs " << total <<endl;
return 0;
}