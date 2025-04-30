#include <iostream>
#include <string>
using namespace std;
int main() {


  string name, position;
  int age;
  char savingPlan;
  double monthlyPay,savedAmount = 0;


  cout << "Enter employee's name: ";
  getline(cin, name);
  cout << "Enter employee's age: ";
  cin >> age;
  cin.ignore();
  cout << "Enter employee position (Assisstant Manager/Manager/General Manager): ";
  getline(cin, position);
  cout << "Enter Saving plan (A/B/C): ";
  cin >> savingPlan;

  cout << "Enter Monthly Pay: ";
  cin >> monthlyPay;
  while (monthlyPay <= 0)
  { cout << "Error: Please enter a valid Monthly pay: ";
    cin >> monthlyPay;
  }


  if (savingPlan == 'C' && position != "General Manager") {
    cout << "ERROR: Only General Managers are elligilble for plan C" <<endl;
    return 0; }
  

  if (savingPlan == 'A') {
    savedAmount = monthlyPay * 0.15; }
  else if(savingPlan == 'B') {
    savedAmount = monthlyPay * 0.30; }
  else if(savingPlan == 'C') {
    savedAmount = monthlyPay * 0.40; }
  else {
    cout << "Invalid saving plan selected! " <<endl;
    return 0; }

    cout << "\nEmployee Details: " << endl;
    cout << "Employee's Name: " << name << endl;
    cout << "Employee's Age: " << age << endl;
    cout << "Employee's Position: " << position << endl;
    cout << "Employee's Monthly Pay: " << monthlyPay << endl;
    cout << "Employee's Saving Plan: " << savingPlan << endl;
    cout << "Amount saved in the saving plan: " << savedAmount <<endl;

    return 0;
 }