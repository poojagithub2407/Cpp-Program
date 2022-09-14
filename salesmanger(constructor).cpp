#include<iostream>
#include<string.h>
using namespace std;

class sales
{
	int id;
	char name[30];
	double salary;
	int target;
    double investive,bouns;
    public:
    sales()
    {
    	cout<<"***********Default constructor***************";
    	this->id=0;
    	strcpy(this->name,"not given");
    	this->salary=0;
    	this->target=0;
    	this->investive=0;
    	this->bouns=0;
	}
	sales(int a,const char*ch,double b,int c,double d,double e)
	{
		cout<<"********parameterized Constructor**********";
		this->id=a;
    	strcpy(this->name,ch);
    	this->salary=b;
    	this->target=c;
    	this->investive=d;
    	this->bouns=e;
	}
	void display()
	{
		cout<<"\nId:"<<id;
		cout<<"\nName:"<<name;
		cout<<"\nSalary:"<<salary;
		cout<<"\ntarget:"<<target;\
		cout<<"\nInvestive:"<<investive;
		cout<<"\nBouns:"<<bouns;
	}
	
};

int main()
{
	sales s1;
	s1.display();
	sales s2(101,"pooja",45000,5,5000,5600);
	s2.display();
}
