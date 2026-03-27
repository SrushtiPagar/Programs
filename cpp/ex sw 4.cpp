#include<iostream>
using namespace std;

int main()
{
	int no1,no2;
	char a;
	cout<<"Enter no1 and no2 :";
	cin>>no1>>no2;
	cout<<"A:addition\nB.subtraction\nC.Multiplication\nD.Division\n";
	cout<<"enter your choice:";
	cin>>a;
	
	switch('a')
	{
		case A:
			cout<<"addition is "<<no1+no2;
		case B:
			cout<<"subtraction is "<<no1-no2;
		case C:
			cout<<"multiplication is "<<no1*no2;
		case D:
			cout<<"division is "<<no1/no2;	
		default:
			cout<<"wrong input";			
	}
	
}
