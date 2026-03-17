#include <iostream>
using namespace std;

int main()
{
	char a;
	cout<<"enter a character:";
	cin>>a;
	
	if (a>='A' && a<='Z')
	{
        cout << a << " is an Upper Case character\n";
 	}

    else if (a>= 'a' && a<= 'z')
    {
		cout << a << " is an Lower Case character\n";
	}
}
