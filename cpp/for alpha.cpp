#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[]="srushti";
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<< str[j]<<" ";
		}
		cout<<endl;
	}
}
