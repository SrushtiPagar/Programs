#include<iostream>
using namespace std;

int main()
{
	int count=0;
//	char a[]={'S','R','U','S','H','T','I'};
	int size;
	cout<<"Enter the size of array:";
	cin>>size;
	char a[size];
	for(int i=0;i<size;i++)
	{
		cout<<"enter "<<i<<" element:"; 
		cin>>a[size];
	}
//	for(int i=0;i<size;i++)
//	{
//		cout<<"array is:"<<a[i]<<endl;	
//	}
//	cout<<"Enter a array of character type:";
//	cin>>a[size];
	for (int i=0;i<size;i++)
	{
		if(a[i]=='A'||a[i]=='a'||a[i]=='E'||a[i]=='e'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u')
		{
			count++;
		}
	}
	cout<<"number of vowels in given array are:"<<count;
}
