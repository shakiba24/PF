#include <iostream>
using namespace std;
int main() {
    int first[2][2], second[2][2], result[2][2];

   
    cout<<"Enter 4 numbers for the first matrix (2x2): ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> first[i][j];}}

  
    cout<<"Enter 4 numbers for the second matrix (2x2): ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> second[i][j];}}


    result[0][0] = first[0][0] * second[0][0] + first[0][1] * second[1][0];
    result[0][1] = first[0][0] * second[0][1] + first[0][1] * second[1][1];
    result[1][0] = first[1][0] * second[0][0] + first[1][1] * second[1][0];
    result[1][1] = first[1][0] * second[0][1] + first[1][1] * second[1][1];

   
    cout<<"Resulting matrix:" <<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout<<result[i][j] << " ";}
        cout<<endl;}
    return 0;
}
