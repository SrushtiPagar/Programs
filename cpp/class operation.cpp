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
//	cout<<"Enter how many time u want to perform the operations";
//	cin>>operation;
    operation O1,O2,O3;
	int ch;
	cout<<"Enter the operation you want to perform:";
	cout<<"1:additon \n2:Subtraction \n3:Multiplication \n4:Division \n5:Swap the numbers \n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				O1.add();
			}
		case 2:
			{
				O2.sub();
			}
		case 3:
			{
				O1.mul();
			}
		case 4:
			{
				O1.div();
			}	
		case 5:
			{
				O1.swap();
			}		
	}
}




