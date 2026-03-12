#include <iostream>
using namespace std;

class operation
{
public:
	int a,b;
	void add();
	void sub();
	void mul();
	void div();
	void swap();
};
void operation:: add()
{
	cout<<"Enter 2 number to add:";
	cin>>a>>b;
	cout<<"Addition is "<<a+b<<endl;	
}
void operation::sub()
{
	cout<<"Enter 2 number to subtract:";
	cin>>a>>b;
	cout<<"Subtraction is "<<a-b<<endl;
}
void operation:: mul()
{
	cout<<"Enter 2 number to multiplication:";
	cin>>a>>b;
	cout<<"multiplication is "<<a*b<<endl;	
}
void operation::div()
{
	cout<<"Enter 2 number to division:";
	cin>>a>>b;
	cout<<"division is "<<a/b<<endl;
}
void operation::swap()
{
	int temp;
	cout<<"Enter 2 number to swap:";
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"swap of number is "<<a<<" "<<b;
}
int main()
{
	operation O1,O2;
	O1.add();
	O1.sub();
	O1.mul();
	O1.div();
	O1.swap();
	O2.add();
	O2.sub();
	O2.mul();
	O2.div();
	O2.swap();
}





