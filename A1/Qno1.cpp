#include <iostream>
#include <string> 
using namespace std;
int main(){
   
   string name, address, Modeofservice;
   double weight;
   int shippingCharges;


   cout << "Enter your name: ";
   getline (cin, name);
   cout << "Enter your address: ";
   getline(cin, address);
   cout << "Enter Modeo f service (N for Normal, U for Urgent): ";
   cin >> Modeofservice;

   cout << "Enter weight of your package (in kgs): ";
   cin >> weight;
   while (weight <=0) {
   cout << "Error: Weight must be more than 0 kg. Please enter a valid weight: ";
   cin >> weight;
   }
   


   if (Modeofservice == "n" || Modeofservice == "N") {
   if (weight <= 5)
      shippingCharges = 500;
   else if (weight > 5 && weight < 20)
      shippingCharges = 1500;
   else
      shippingCharges = 2500; }


   else if (Modeofservice == "u" || Modeofservice == "U") {
   if (weight <=5 && weight)
      shippingCharges = 500*3;
   else if (weight > 5 && weight < 20)
      shippingCharges = 1500*3;
   else
      shippingCharges = 2500*3; }


   else {
      cout << "Invalid service mode entered." << endl;
      return 1; }
    

    cout << "\nShipping Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Modeofservive: " << (Modeofservice == "n" || Modeofservice == "N" ? "normal" : "urgent") << endl;
    cout << "Weight of package: " << weight << " kgs " << endl;
    cout << "Shipping Charges: " << shippingCharges << " rupees" << endl;

    return 0;
}
