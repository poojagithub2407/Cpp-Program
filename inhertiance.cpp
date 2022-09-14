#include<iostream>
#include<string.h>
using namespace std;


 class Employee
 {
 	
 	int id;
 	char name[30];
 	double salary;
 	public:
 		void set_id(int a)
 		{
 			
 			this->id=a;
 			
		}
		
		void set_name( const char* nm)
		{
			
			strcpy(this->name,nm);
			
		}
		
		void set_salary(double b)
		{

			this->salary=b;
			
		}
		
		int get_id()
		{
			
			return this->id;
			
		}
		
		char* get_name()
		{
			
			return this->name;
			
		}
		
		double get_salary()
		{
			
			return this->salary;
			
		}
		
		Employee()
		{
			
			//cout<<"\nDefault Constructor of employee and ";
			this->id=0;
			strcpy(this->name,"not give");
			this->salary=0;
			
		}
		
		Employee(int a, const char*nm,double s)
		{
			
			//cout<<"\nParameterized Constructor of employee and ";
			this->id=a;
			strcpy(this->name,nm);
			this->salary=s;
			
		}
		
		void display()
		{
			
			cout<<"\n\nId of employee:"<<this->id;
			cout<<"\nName of employee:"<<this->name;
			cout<<"\nSalary of employee:"<<this->salary;
			
		}
		
		
};

class Salesmanger:public Employee
{
	
	double incentive;
	int target;
	public:
		
		void set_incentive(double i)
		{
			
			this->incentive=i;
			
		}
		
		void set_target(int t)
		{
			
			this->target=t;
			
		}
	
		double get_incentive()
		{
			
			return this->incentive;
			
		}
		
		int get_target()
        {
        	
        	return this->target;
        	
		}
		
		Salesmanger() : Employee()
	    {
	    	
	        //cout<<"Default Constructor of salesmanger ";	
	    	this->incentive=0;
	    	this->target=0;
	    	
		}
		
		Salesmanger(int a, const char*nm,double s,double incen,int tar):employee( a, nm, s)
		{
			
			//cout<<"Parameterized Constructor of salesmanger ";
			this->incentive=incen;
			this->target=tar;
			
		}
		
		void display()
		{
			
		     Employee::display();
		     {
		     	
		     	cout<<"\nIncentive of Salesmanger:"<<this->incentive;
		     	cout<<"\nTarget of salesmanger:"<<this->target<<"\n";
		     	
			 }
		}
};

class Admin:public Employee
{
	double allowance;
	public:
		void setallowance(int w)
		{
                this->allowance=w;			
		}
		double getallowance()
		{
			return this->allowance;
		}
		Admin()
		{
			//cout<<"Default Constructor";
			this->allowance=0;
		}
		
		Admin(int a, const char*nm,double s,double w):employee( a, nm, s)
		{
			//cout<<"\nParameterized Constructor";
			this->allowance=w;
		}
		
		void display()
		{
			employee::display();
			{
				cout<<"\nAllowance:"<<this->allowance;
			}
		}
		
};

/*int main1()
{
	employee e1(111,"saurbh",5600);
	e1.display();
    cout<<"\n--------------------salesmanger-----------------------------";
	/*salesmanger s1;
	s1.display();*/
	/*salesmanger s2(101,"Pooja Dayal",30000,3560,10);
	s2.display();
	admin a1(122,"kaveri",45000,458);
	a1.display();
}*/
int main()
{
	employee *ep;
	employee e1(111,"saurbh",5600);
	ep=&e1;
	ep->display();
	
	cout<<"\n";
	
	salesmanger *sl;
	salesmanger s2(101,"Pooja Dayal",30000,3560,10);
	sl = &s2;
	sl->display();

    cout<<"\n";
    
    admin *ad;
	admin a1(122,"kaveri",45000,458);
	ad =&a1;
	ad->display();
}
