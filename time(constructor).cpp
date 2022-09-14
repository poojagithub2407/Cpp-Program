#include<iostream>
#include<string.h>
using namespace std;

class time
{
	int hr,min,sec;
	public:
		time()
		{
			this->hr=0;
			this->min=0;
			this->sec=0;
		}
		time(int a,int b,int c)
		{
			cout<<"\n********Default Constructor************";
		    this->hr=a;
	    	this->min=b;
			this->sec=c;	
		}
		void display()
		{
			cout<<"\n*********Parameterized Constructor***********";
			cout<<hr<<"\nhr:";
			cout<<min<<"min:";
			cout<<sec<<"sec";
		}
};

int main()
{
	time t1;
	t1.display();
	time t2(23,4,4);
	t2.display();
}
