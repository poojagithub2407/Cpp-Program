#include<iostream>
using namespace std;

class c2;
class c1
{
	int val1;
	friend void exChange(c1 &,c2 &);
	public:
	void setvalue(int a)
	{
		val1=a;
	}
	void display()
	{
		cout<<val1;
	}
};

class c2
{
	int val2;
	friend void exChange(c1 & ,c2 &);
	public:
	       void setvalue(int b)
	       {
	       	val2=b;
		   }
		   void display()
		   {
		   	cout<<val2;
		   }
};

void exChange(c1 &x ,c2 &y)
{
	int temp;
	temp=x.val1;
	x.val1=y.val2;
	y.val2=temp;
}

int main()
{
	c1 o1;
	c2 o2;
	o1.setvalue(34);
	o2.setvalue(43);
	exChange(o1,o2);
	cout<<"the value of c1 after exchanging:";
	o1.display();
	cout<<"\nvalue of c2 after exchanging :";
	o2.display();
}
