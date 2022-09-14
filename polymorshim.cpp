#include<string.h>
#include<iostream>
using namespace std;

class Employee
{
	int id;
	char name[20];
	double salary;

public:
	Employee()
	{
		this->id = 0;
		strcpy(this->name, "Not mentioned");
		this->salary = 0;
	}

	Employee(int i, char* nm, double sal)
	{
		this->id = i;
		strcpy(this->name, nm);
		this->salary = sal;
	}

	void set_id(int eid)
	{
		this->id = eid;
	}
	void set_name(char* Name)
	{
		strcpy(this->name, Name);
	}
	void set_salary(int s)
	{
		this->salary = s;
	}

	int get_id()
	{
		return this->id;
	}
	char* get_name()
	{
		return this->name;
	}
	int get_salary()
	{
		return this->salary;
	}

	virtual void display()
	{
		cout << "\n ID: " << this->id;
		cout << "\n Name: " << this->name;
		cout << "\n Salary: " << this->salary;
	}

	virtual double calsal()
	{
		return this->get_salary();
	}
};//class Emp ends shere

class Salesmanager : public Employee
{
	double incentive;
	int target;

public:
	Salesmanager() : Employee()
	{
		this->incentive = 111;
		this->target = 11;
	}
	Salesmanager(int i, char* nm, double sal, double in, int t) :Employee(i, nm, sal) //parameter initialisation list 
	{
		this->incentive = in;
		this->target = t;
	}
	void display()
	{
		Employee::display();
		cout << "\n Incenitve is : " << this->incentive;
		cout << "\n Target: " << this->target;
	}
	void setIncentive(double incentive)
	{
		this->incentive = incentive;
	}
	double getIncentive()
	{
		return this->incentive;
	}
	double calsal()
	{
		return	this->get_salary() + this->incentive;
	}
};// class SM ends here
class Admin :public Employee
{
	double allowance;
public:
	Admin() : Employee()
	{
		this->allowance = 22;
	}
	Admin(int i, char* nm, double sal, double a) :Employee(i, nm, sal)
	{
		this->allowance = a;
	}
	void setAllowance(double a)
	{
		this->allowance = a;
	}
	double getAllowance()
	{
		return this->allowance;
	}
	void display()
	{
		Employee::display();
		cout << "\n Allowance is " << this->allowance;
	}
	double calsal()
	{
		return this->get_salary()+this->allowance;
	}
};//class Admin ends here
int main()// code with upcasting
{
	Employee * ep;

	Employee e1(111, "Saurav", 40000);
	ep = &e1;
	ep->display();
	cout << "\n Total Salary"<<ep->calsal();
	cout << "\n";

	Salesmanager s2(101, "Sachin", 50000, 555, 55);
	ep = &s2;
	ep->display();
	cout << "\n Total Salary" << ep->calsal();
	cout << "\n";

	Admin a1(222, "Virat", 60000, 333);
	ep = &a1;
	ep->display();
	cout << "\n Total Salary" << ep->calsal();
	cout << "\n\n\n";
}
void main1()// simple inhertiance 
{
	Employee * ep;

	Employee e1(111, "Saurav", 40000);
	ep = &e1;
	ep->display();

	cout << "\n";

	Salesmanager* sp;
	Salesmanager s2(101, "Sachin", 50000, 555, 55);
	sp = &s2;
	sp->display();
	cout << "\n";

	Admin* ap;
	Admin a1(222, "Virat", 60000, 333);
	ap = &a1;
	ap->display();
	cout << "\n\n\n";
}
