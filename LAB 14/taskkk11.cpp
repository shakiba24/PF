 #include <iostream>
using namespace std;
struct student{
 int roll;
string name;
struct stu_mark{
string sub;
int m;
 }mark;
}stu;
int main() {
cout<<"Enter Roll Number: "<<endl;
cin>>stu.roll;
cout<<"Enter Name: "<<endl;
cin>>stu.name;
 
cout<<"Enter Subject Code: "<<endl;
cin>>stu.mark.sub;
cout<<"Enter Marks: "<<endl;
cin>>stu.mark.m;
 
cout<<"Studdent Details: "<<endl;
cout<<"Roll Number: "<<stu.roll<<endl;
cout<<"Name: "<<stu.name<<endl;
cout<<"Subject Code: "<<stu.mark.sub<<endl;
cout<<"Marks: "<<stu.mark.m<<endl;
}