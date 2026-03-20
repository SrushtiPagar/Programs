//check whether given angles can form triangle or not

#include <iostream>
using namespace std;

int main()
{
	float a,b,c;
	int d=180;
	cout<<"enter three angles:\n";
	cin>>a>>b>>c;
	 
	if(d==a+b+c) 
	{
	cout<<"Yes,the angles "<<a<<" "<<b<<" "<<c<<" "<<"can form triangle";
	}
	else 
	{
		cout<<"No,the angles "<<a<<" "<<b<<" "<<c<<" "<<"can form triangle";
	}
}
