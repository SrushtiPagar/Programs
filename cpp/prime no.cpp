#include<iostream>
using namespace std;

int main()
{
	bool flag=true;
	int a;
	cout<<"Enter a number:";
	cin>>a;
	int i=2;
	int half=a/2;
	for(i=2;i<=50;i++)
	{
	while(i<=half)
	{
		if(a%i==0)
		{
			flag=false;
		}
		else
		{
			flag=true;
		}
		i++;
	}
	if(flag==false)
	{
		cout<<"number is not prime";
	}
	else
	{
		cout<<"number is prime";
	}
	}
}
