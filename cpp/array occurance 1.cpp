#include <iostream>
using namespace std;

int main()
{
//	int no[]={2,22,17,22,3,3,17};
//	int a[]={2,22,17,3};
	int size,ele;
	cout<<"enter the size of array u want to enter:";
	cin>>size;
	int no[size],a[size];
	for(int k=0;k<size;k++)
	{
		cout<<"enter "<<k<<" element"; 
		cin>>ele;
	}
	for(int l=0;l<size;l++)
	{
		cout<<"array is:"<<l<<" ";	
	}
	for(int m=0;m<size;m++)
	{
		if(a[m]==no[m])
		{
			continue;
		}
	}
	int count=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(a[i]==no[j])
			{
				count++;
			}
		}
		cout<<a[i]<<" is repeated "<<count<<" times\n";
		count=0;
	}
}





















