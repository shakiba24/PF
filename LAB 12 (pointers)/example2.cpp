#include<iostream>
int main()
{
	using namespace std;
	
	unsigned short int myInt = 99;
	
	unsigned short int* pMark = 0;
	
	cout<<myInt<<endl;
	
	pMark = &myInt;
	
	cout<<*pMark<<endl;
	return 0;
}