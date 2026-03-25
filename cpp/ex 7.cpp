//read value of an integer m and display the value  
//n is 1 when m is larger than 0;
//0 when m is 0;
// -1 when m is less than 0;

#include <iostream>
using namespace std;

int main()
{
	int m;
	cout<<"Enter number m:";
	cin>>m;
	
	if(m>0)
	{
		cout<<"value of n is 1";
	}
	else if(m==0)
	{
		cout<<"value of n is 0";
	}
	else
	{
		cout<<"value of n is -1";
	}
}
