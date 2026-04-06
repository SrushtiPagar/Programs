//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int age;
//	char g;
//	cout<<"enter age:\n";
//	cin>>age;
//	cout<<"enter char:\n";
//	cin>>g;
//	
//	if(age>=18)
//	{
//		if(g=='F'||g=='f')
//		{
//			cout<<"go to shop";
//		}
//		else if(g=='M'||g=='m')
//		{
//			cout<<"go for cricket";
//		}
//		else
//		{
//			cout<<"as u wish";
//		}
//	}
//	else
//	{
//		cout<<"go and study";
//	}
//}


#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter number:";
	cin>>a;
	
	if(a>0)
	{
		if(a>=1 && a<=100)
		{
			cout<<"in range 1-100";
		}
		else
		{
			cout<<"not in range 1-100";
		}
	}
	else
	{ 
		if(a<=-1 && a>=-100)
		{
			cout<<"in range -1 to -100";
		}
		else
		{
			cout<<"not in range -1 to -100";
		}
	}
}
