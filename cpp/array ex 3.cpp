#include<iostream>
using namespace std;

int main()
{
	int count=0;
	int size;
//	cout<<"Enter the size of array:";
//	cin>>size;
	char a[5];
	for(int i=0;i<size;i++)
	{
		cout<<"enter "<<i<<" element:"; 
		cin>>a[i];
	}
	 for(int i=0;i<5;i++)
    {
        cout<<"\nElement "<<i<<" is: "<<a[i];
    }
	for (int i=0;i<5;i++)
	{
		if(a[i]=='A'||a[i]=='a'||a[i]=='E'||a[i]=='e'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u')
		{
			count++;
		}
	}
	cout<<"number of vowels in given array are:"<<count;
}
