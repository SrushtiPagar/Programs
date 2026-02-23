#include <iostream>
using namespace std;

int main()
{
	int N;
	cout<<"enter number:";
	cin>>N;
	
	if(N>5)
	{
		cout<<N<<" is greater than 5";
	}
	else if(N<5)
	{
		cout<<N<<" is less than 5";
	}
	else if(N==5)
	{
		cout<<N<<" is equal to 5";
	}
}
