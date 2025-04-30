#include <iostream>
using namespace std;
int main() {

string weather, condition;
cout<<"How is ther weather?(good or bad)"<<endl;
cin>>weather;

if (weather == "good"){
    cout<<"We should go for a walk"<<endl;
    cout<<"What is the weather condition"<<endl;
    cin>>condition;

    if(condition == "windy"){
     cout<<"We could go the beach"<<endl;}
     else{
     cout<<"No, we can watch a movie";}
}
else{
    cout<<"We should stay inside, the weather is not good"<<endl;
    cout<<"Watching a movie is always an option"<<endl;
}
return 0;
}