#include<iostream>
using namespace std;

int main()
{

    //decalartion
    int size;
    int cnt=0;
    cout<<"Enter size of array: ";
    cin>>size;
    char a[size];

    for(int i=0;i<size;i++)
    {
        cout<<"\nEnter "<<i<<" ele : ";
        cin>>a[i];
    }
   for(int i=0;i<size;i++)
   {
        cout<<"\nElement "<<i<<" is: "<<a[i];
   }

    for(int i=0;i<size;i++)
   {
    if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
    {
        cnt++;
    }
        
   }

   cout<<"\nVowels in array is: "<<cnt;
    return 0;
}
