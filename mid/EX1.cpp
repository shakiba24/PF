#include <iostream>
using namespace std;
int main(){

    double calories_consumed, calories_burned, net_calories_burned;

cout<<"Enter the number of calories consumed: ";
cin>> calories_consumed;
cout<<"Enter the number of calories burned: ";
cin>> calories_burned;

net_calories_burned = calories_burned - calories_consumed;

if ( net_calories_burned >= 500){
cout<<"Weight loss\n";
cout<<"Great job! You're on track to meet your weight loss goals!";}

else if (net_calories_burned > 200 &&  net_calories_burned < 499){
cout<<"Weight maintained\n";
cout<<"Good work! You are maintaining your current weight\n";}

else  (){
cout<<"Weight gain\n";
cout<<"lets focus on your goals. Consider adjustingyour calorie intake or increasing your exercise"; }

return 0;
}