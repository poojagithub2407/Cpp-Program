#include<iostream>
#include<string.h>
using namespace std;

class emp
{
	int id;
	char name[30];
	public:
	emp()
	{
		cout<<"******Default constructor********";
		id=0;
		strcpy(name,"not given");
	}
	
	emp(int a, const char*nm)
	{
		cout<<"\n*********Parameterized constructor called******";
		id=a;
		strcpy(name,nm);
	}
	
	void display()
	{
		cout<<"\nId:"<<id;
		cout<<"\nName:"<<name;
	}
	
};

int main()
{
	emp e1;
	e1.display();
    emp	e2(101,"Pooja");
	e2.display();
}
