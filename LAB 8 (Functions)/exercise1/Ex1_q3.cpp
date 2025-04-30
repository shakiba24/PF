#include <iostream>
using namespace std;

double calculate_circle_area(double radius){
    return 3.14 * radius * radius;}
double calculate_rectangle_area(double width, double length){
    return  width*length;}
double calculate_triangle_area(double base, double height){
    return 0.5 * base * height;}

int main(){
    string shape;
    double radius, width, length, base, height;

    cout<<"Shape u want to calculate area of "<<endl;
    cout<<"(Enter C for circle, T for triangle, and R for rectangle) :";
    cin>>shape;

    if(shape == "C" || shape == "c"){
        cout<<"Enter radius ";
        cin>>radius;
        cout<<"Area of circle is "<< calculate_circle_area(radius)<<endl;}

    else if(shape == "T" || shape == "t"){
        cout<<"Enter base and height ";
        cin>> base >> height;
        cout<<"Area of trraiangle is "<< calculate_triangle_area(base, height)<<endl;}

    else if(shape == "R "|| shape == "r"){
        cout<<"ENter width and lenght : ";
        cin>> width >> length;
        cout<<"Area of reactangle is " << calculate_rectangle_area(width, length)<<endl;}

    else{
        cout<<"Error: INvalid shape";}
    return 0;
}