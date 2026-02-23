#include<iostream>
using namespace std;

class denominator;
class numerator
{
	int n;
	public:
		void getdata(int a)
		{
			n=a;
		}

	friend void divide (numerator,denominator);
};
class denominator
{
	int d;
	public:
		void getvalue(int b)
		{
			d=b;
		}
	friend void divide(numerator,denominator);
};
void divide(numerator x,denominator y)
{
	int ans;
	ans=x.n/y.d;
	cout<<"division is:"<<ans;
}
int main()
{
	numerator obj;
	obj.getdata(10);
	denominator obje;
	obje.getvalue(5);
	divide (obj,obje);
	return 0;
}
