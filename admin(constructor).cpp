#include<iostream>
#include<string.h>
using namespace std;
class admin
{
    int id;
	char name[30];
	int salary,allowance;
	public:
		admin()
		{
			cout<<"********Default Constructor************";
			this->id=0;
			strcpy(this->name,"not given");
			this->salary=0;
			this->allowance=0;
		}
		
		admin(int a,const char* ch,int b,int c)
		{
			cout<<"\n*********Parameterized Constructor***********";
			this->id=a;
			strcpy(this->name,ch);
			this->salary=b;
			this->allowance=c;
		}
		void display()
		{
			cout<<"\nId="<<id;
			cout<<"\nName="<<name;
			cout<<"\nSalary="<<salary;
			cout<<"\nAllowance="<<allowance;
		}
};

int main()
{
	admin a1;
	a1.display();
	admin a2(101,"Pooja",45000,5600);
	a2.display();
}
