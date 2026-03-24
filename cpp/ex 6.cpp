//check person is eligible for vote or not

#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter your age: ";
	cin>>a;
	
	if(a>=18)
	{
		cout<<"You are ELIGIBLE to vote";
	}
	else
	{
		cout<<"You are NOT ELIGIBLE to vote";
	}
}
