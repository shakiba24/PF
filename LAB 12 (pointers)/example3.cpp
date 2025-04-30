#include<iostream>
int main()
{
	using namespace std;
	
	unsigned short int myInt = 99;
	
	unsigned short int* pMark = 0;
	
	cout<<myInt<<endl;
	
	pMark = &myInt;

    *pMark = 11;
	
	cout<<*pMark:/t<<*pMark<<"\nmyInt:\t"<<myInt<<endl;
	return 0;
}