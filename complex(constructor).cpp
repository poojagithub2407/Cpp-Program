#include<iostream>
#include<string.h>
using namespace std;

class complex
{
	int real,img;
	public:
	complex()
	{  
	    cout<<"\n********Default constructor**********";
		this->real;
		this->img;
	}
	complex(int a,int b)
	{
		cout<<"\n*********Parameterized Constructor***********";
		this->real=a;
		this->img=b;
	}
	void display()
	{
		cout<<"\n"<<real<<"+"<<img<<"i";
	}
};

int main()
{
	complex c1;
	c1.display();
	complex c2(4,2);
	c2.display();
}
