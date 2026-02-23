//Assign and print the roll number, phone number and 
//address of two students having names "Sam" and "John"
// respectively by creating two objects of the class 'Student'.

#include<iostream>
using namespace std;

class student
{
	public:
		int rollno;
		string name;
		int mobileno;
		string address;
		void getData();
		void display();
};
void student:: getData()
{
	cout<<"enter roll no:";
	cin>>rollno;
	cout<<"enter name:";
	cin>>name;
	cout<<"enter mobile no.:";
	cin>>mobileno;
	cout<<"enter address:";
	cin>>address;
}
void student:: display()
{
	cout<<"roll no is:"<<rollno<<endl;
	cout<<"name is:"<<name<<endl;
	cout<<"mobile no is:"<<mobileno<<endl;
	cout<<"address is:"<<address<<endl;
}
int main()
{
	student s1,s2;
	s1.getData();
	s1.display();
	s2.getData();
	s2.display();
}
