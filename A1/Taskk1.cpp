#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
    double american_colonial_price = 85.00;
    double modern_style_price = 57.50;
    double french_classical_price = 127.75;
    
    int american_colonial_sold, modern_style_sold, french_classical_sold;
    
    cout << "Enter number of American Colonial chairs sold: ";
    cin >> american_colonial_sold;
    cout << "Enter number of modern Style chairs sold: ";
    cin >> modern_style_sold;
    cout << "Enter number of french Classical chairs sold: ";
    cin >> french_classical_sold;
    

    double total_colonial = american_colonial_sold * american_colonial_price;
    double total_modern = modern_style_sold * modern_style_price;
    double total_french = french_classical_sold * french_classical_price;


    double total_sales = total_colonial + total_modern + total_french;


    cout << fixed << setprecision(2);
    cout << "Total sales for American colonial: $" << total_colonial << endl;
    cout << "Total sales for Modern style: $" << total_modern << endl;
    cout << "Total sales for French classical: $" << total_french << endl;
    cout << "Total sales for alll chairs: $" << total_sales << endl;
    
    return 0;
}
