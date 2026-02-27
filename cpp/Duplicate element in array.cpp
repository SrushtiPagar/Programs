#include <iostream>
using namespace std;

int main()
{
	int size;
    cout << "Enter size of an array: ";
    cin >> size;
    int no[size];
    for (int k = 0; k < size; k++) 
	{
        cout << "Enter element " << k << ": ";
        cin >> no[k];
    }
    int newSize = size;  
    for (int i = 0; i < newSize - 1; i++) 
	{
        for (int j = i + 1; j < newSize; j++) 
		{
            if (no[i] == no[j])
			{
            
                for (int k = j; k < newSize - 1; k++)
				{
                    no[k] = no[k + 1];
                }
                newSize--;  
                j--;  
            }
        }
    }
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << no[i] << " ";
    }
    cout << endl;

    return 0;
}
