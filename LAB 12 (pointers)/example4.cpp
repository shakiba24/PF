#include <iostream>
#include <iomanip>
using namespace std;

void sortIt (float *grades, int numOfGrades);
void displayGrades (float* grades, int numOfGrades );
int main()
{
    float*grades;
    float average;
    int numOfGrades;
    int count;
    
    cout<<fixed<<showpoint<<setprecision(2);

    cout<<"How many grades will be processed"<<endl;
    cin>> numOfGrades; 

    while(numOfGrades <= 0){
    cout<<"There must be at least one grade. Please Re enter.\n";
    cout<<"How many grades will be processed"<<endl;
    cin>> numOfGrades; 
    }

    grades = new float(numOfGrades);

    if(grades == NULL)
    {
       cout<<"Error alllocating memory!\n";
       return -1; 
    }
cout<<"Enter the grades below\n";

for (count = 0; count < numOfGrades; count++)
{
    cout<<"Grade "<< (count +1)<<":"<<endl;
    cin>>grades[count];
    total = total + grades[grades];
}

average = total / numOfGrades;
cout<< "Average Grade is "<< average << "%"<< endl;
delete [] grades;
return 0;
}