#include <iostream>
using namespace std;

class denominator;

class numerator
{
	int n;
	public:
		void getData()
		{
			cout<<"enter value of numerator: ";
			cin>>n;
		}	
		friend void divide(numerator,denominator);
};

class denominator
{
	int d;
	public:
		void getData()
		{
			cout<<"enter value of numerator: ";
			cin>>d;
		}	
		friend void divide(numerator,denominator);	
};

void divide(numerator x,denominator y)
{
	cout<<"division is: "<<x.n/y.d;
}
int main()
{
	numerator obj;
	obj.getData();
	denominator obje;
	obje.getData();
	divide(obj ,obje);
}
