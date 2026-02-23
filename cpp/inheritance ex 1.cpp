#include<iostream>
using namespace std;

class shape
{
	public:
	float pi=3.14;
	int side;
		void getarea()
	{
		cout<<"Enter side: ";
		cin>>side;
	}
};

class circle:public shape
{
	public:
	void display()
	{
		cout<<"\narea is: "<<pi*side*side;
	}
};

class square:public shape
{
	public:
	void show()
	{
		cout<<"\narea is: "<<side*side;
	}	
};

class triangle:public shape
{
	public:
	void tell()
	{
		cout<<"\narea is: "<< 0.5*side*side;
	}	
};

int main()
{
	circle c;
	c.getarea();
	c.display();
	
	square s;
	s.getarea();
	s.show();
	
	triangle t;
	t.getarea();
	t.tell();
}
