//check whether the year is leap or not

#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter a year:";
	cin>>a;
	
	if(a%4==0)
	{
		cout<<a<<" is leap year";	
	}	
	else
	{
		cout<<a<<" is not a leap year";
	}
} 
