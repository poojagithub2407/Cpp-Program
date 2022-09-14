#include<iostream>
using namespace std;

class complex
{
	int real,img;
	public:
		complex()
		{
			this->real=0;
			this->img=0;
		}
		complex(int a,int b)
		{
			this->real=a;
			this->img=b;
		}
		void set_real(int r)
		{
			this->real=r;
		}
		void set_img(int i)
		{
			this->img=i;
		}
		int get_real()
		{
			return this->real;
		}
		int get_img()
		{
			return this->img;
		}
	complex	add(complex c2)
		{
			complex temp;
			temp.real=this->real+c2.real;
			temp.img=this->real+c2.img;
			return temp;
		}
		complex add(int a)
		{
			complex temp;
			temp.real=this->real+a;
			temp.img=this->img+a;
			return temp;
		}
		void display()
		{
			
			cout<<"\n\tComplex Number:"<<this->real<<"+"<<this->img<<"i";
		}
		
};
complex add(int,complex);
int main()
{
	complex c1(3,4);
	complex c2(5,8);
	c1.display();
	c2.display();
	complex c3;
	c3=c1.add(c2);
	cout<<"\n\nAddition Of Complex Number using 1st case";
	c3.display();
	complex c4;
	c4=c1.add(4);
	cout<<"\n\nAddition of complex number using 2nd case";
	c4.display();
	complex c5;
	c5=add(10,c2);
	cout<<"\n\nAddition of complex number using 3rd case";
	c5.display();
}
complex add(int a,complex c)
{
		complex temp;
		int r,i;
		r=a+c.get_real();
		i=a+c.get_img();
		temp.set_real(r);
		temp.set_img(i);
		return temp;
	
}
