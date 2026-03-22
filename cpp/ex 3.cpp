// if the number is even print its square otherwise print cube

#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"enter a number:";
	cin>>a;
	b=a*a;
	c=a*a*a;
	
	if(a%2==0)
	{
		cout<<a<<" is even number\n";
		cout<<"Square of "<<a<<" is "<<b;
	}
	else
	{
		cout<<a<<" is odd number\n";
		cout<<"Cube of "<<a<<" is "<<c;
	}
}
