#include <iostream>
#include <iomanip>  
using namespace std;
int main() {
    
    cout << setw(15) << "Price" << setw(12) << "Quantity" << endl;


    cout << setw(15) << fixed << setprecision(2) << 1.95
         << setw(12) << 8 << endl;
    

    cout << setw(15) << fixed << setprecision(2) << 10.89
         << setw(12) << 9 << endl;
    return 0;
}
