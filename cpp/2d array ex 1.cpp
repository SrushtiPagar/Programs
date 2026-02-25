#include<iostream>
using namespace std;

int main()
{
    // declaration
    int a[2][2],b[2][2],c[2][2];

    // a[0][0]=12;
    // a[0][1]=11;
    // a[0][2]=13;

    // a[1][0]=22;
    // a[1][1]=21;
    // a[1][2]=23;

    // a[2][0]=32;
    // a[2][1]=31;
    // a[2][2]=33;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"Enter a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
       
    }

	for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"Enter b["<<i<<"]["<<j<<"]:";
            cin>>b[i][j];
        }
       
    }
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<=2;j++)
        {
        	c[i][j]=a[i][i]*b[i][i]+a[j][i]*b[i][j];
        }
       
    }


    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<c[i][j]<<"  ";
        }
        cout<<"\n";
    }

}
