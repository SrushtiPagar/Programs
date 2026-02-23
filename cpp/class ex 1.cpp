#include<iostream>
using namespace std;

class Student
{
	public:
	int roll,m1,m2,m3;
	
	void Data()
	{
		cout<<"Enter roll no:";
		cin>>roll;
		cout<<"Enter marks of 3 subjects:";
		cin>>m1>>m2>>m3;
	}
	void display()
	{
		cout<<"Roll no is "<<roll<<endl;
		cout<<"marks 1 is "<<m1<<"\n"<<"marks 2 is "<<m2<<"\n"<<"marks 3 is "<<m3<<"\n";
		
		cout<<"Percentage is "<<((m1+m2+m3)*100)/300<<endl;
	}
//	void maxMarks()
//	{
//		if(m1>=m2 && m1>=m3)
//		{
//			cout<<"max marks is "<<m1<<endl;
//		}
//		else if(m2>=m1 && m2>=m3)
//		{
//			cout<<"max marks is "<<m2 <<endl;
//		}
//		else if(m3>=m1 && m3>=m2)
//		{
//			cout<<"max marks is "<<m3<<endl;
//		}
//	}	
	
	void maxMarks()
	{
		int max=(m1>m2)?m1:m2;
		int maxmarks=(max>m3)?max:m3;
		cout<<"max marks is "<<maxmarks<<endl;
	}
};

int main()
{
	Student s1,s2,s3;
	s1.Data();
	s1.display();
	s1.maxMarks();
	
	s2.Data();
	s2.display();
	s2.maxMarks();
	
	s3.Data();
	s3.display();
	s3.maxMarks();
	
	return 0;
}




