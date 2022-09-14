#include<iostream>
#include<string.h>
using namespace std;
class hr
{
	int id;
	char name[20];
	double salary;
    double commission;
    public:
    	hr()
    	{
    		cout<<"***********Default constructor***************";
    		this->id=0;
    	    strcpy(this->name,"not given");
    	    this->salary=0;
    	    this->commission=0;
		}
		hr(int a,const char*nm,int b,int c)
		{
			cout<<"********parameterized Constructor**********";
			this->id=a;
    	    strcpy(this->name,nm);
    	    this->salary=b;
    	    this->commission=c;
		}
		void display()
		{
			cout<<"\nId:"<<id;
			cout<<"\nName:"<<name;
			cout<<"\nSalary:"<<salary;
			cout<<"\nCommission:"<<commission;
		}
};

int main()
{
	hr h1;
	h1.display();
	hr h2(101,"Pooja",43000,6000);
	h2.display();
}

