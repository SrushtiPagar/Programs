#include <iostream>
using namespace std;

int main()
{
	int month;
	cout<<"Enter a number:";
	cin>>month;
	
	switch(month)
	{
		case 11:
		case 12:
		case 1:
		case 2:cout<<"its winter";
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:cout<<"its summer";
			break;
		
		case 7:
		case 8:
		case 9:
		case 10:cout<<"its rainy";
			break;
		
		default:
			cout<<"wrong input";	
			
	}
}
