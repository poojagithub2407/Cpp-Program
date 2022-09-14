#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int roll_no;
	char name[30];
	public:
	student()
	{
		cout<<"\n*******Default constructor called********";
		this->roll_no=0;
		strcpy(this->name,"not given\n");
	}
	student(int a,const char*n )
	{
		cout<<"\n*********Parameterized constructor called******";
		this->roll_no=a;
		strcpy(this->name,n);
	}
	
	void display()
	{
		cout<<"\nRoll of student:"<<this->roll_no;
		cout<<"\nName of student="<<this->name;
	}
};

int main()
{
	student s;
	s.display();
	student s1(30,"pooja");
	s1.display();
}
