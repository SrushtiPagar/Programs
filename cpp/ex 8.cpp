//take input of x n y coordinate and check in which quadrant it lies

#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cout<<"enter coordinate x and y:";
	cin>>x,y;
	
	if(x==0 && y==0)
	{
		cout<<"coordinates are at origin";
	}
	else if(x>0 && y>0)
	{
		cout<<"coordinates lie in 1st quadrant";
	}
	else if(x>0 && y<0)
	{
		cout<<"coordinates lie in 2nd quadrant";
	}
	else if(x<0 && y<0)
	{
		cout<<"coordinates lie in 3rd quadrant";
	}
	else
	{
		cout<<"coordinates lie in 4th quadrant";
	}
}
