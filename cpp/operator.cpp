#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"********operators*********"<<endl;
	cout<<"Enter a and b"<<endl;
	cin>>a>>b;
	cout<<"anding:"<<(a&b)<<endl;
	cout<<"ORing:"<<(a|b)<<endl;
	c=a<<b;
	cout<<"left shift:"<<c<<endl;
	cout<<"right shift:"<<(a>>b)<<endl;
	cout<<"Tilde:"<<(~a)<<endl;
	cout<<"Tilde:"<<(~(-b))<<endl;
	
}
