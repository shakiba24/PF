#include <iostream>
using namespace std;
int main() {

    double caloriesConsumed, caloriesBurned, netCalories;

    // Input from user
    cout<<"Enter calories consumed: ";
    cin>> caloriesConsumed;
    cout<< "Enter calories burned: ";
    cin>>caloriesBurned;
    


// the if-else ladder help in giving multiple answers and options for the user , in gerneral it provide selection of different conditions
// we can enhance the program using different loops and functions for displaying differe


    // Calculating net calories
    netCalories = caloriesBurned - caloriesConsumed;


    // Categorizing and feedback
    if (netCalories >= 500) {
    cout << "Category: Weight Loss\nFeedback: Great job! You're on track to meet your weight loss goals!" <<endl;} 
    else if (netCalories >= 200 && netCalories < 500) {
        cout << "Category: Maintenance\nFeedback: Good work! You're maintaining your current weight." << endl;} 
        else {
        cout << "Category: Weight Gain\nFeedback: Let's focus on adjusting your calorie intake or increasing exercise." << endl; }

return 0;
}

