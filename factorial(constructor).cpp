#include<iostream>
using namespace std;

 class factorial
 {
 	int i,f=1,num;
 	public:
 		factorial()
 		{
 			this->num=4;
 			
	    }
	void calculate()
	{
	     for(i=1;i<=num;i++)
		 {
		 	f=f*i;
		 }	
	}    
	void display()
	{
		cout<<"factorial of number:"<<f;
    }	 
 };
 
 int main()
 {
 	factorial f;
 	f.calculate();
 	f.display();
 }
 
