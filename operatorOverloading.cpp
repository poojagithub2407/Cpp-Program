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
		complex operator +(complex c)
		{
			complex temp;
			temp.real=this->real+c.real;
			temp.img=this->img+c.img;
			return temp;
		}
		complex operator +(int a)
		{
			complex temp;
			temp.real=this->real+a;
			temp.img=this->img+a;
			return temp;
		}
		complex operator -(complex c)
		{
			complex temp;
			temp.real=this->real-c.real;
			temp.img=this->img-c.img;
			return temp;
		}
		complex operator -(int a)
		{
			complex temp;
			temp.real=this->real-a;
			temp.img=this->img-a;
			return temp;
		}
		complex operator *(complex c)
		{
			complex temp;
			temp.real=this->real*c.real;
			temp.img=this->img*c.img;
			return temp;
		}
		complex operator *(int a)
		{
			complex temp;
			temp.real=this->real*a;
			temp.img=this->img*a;
			return temp;
		}
    	complex operator /(complex c)
		{
			complex temp;
			temp.real=this->real/c.real;
			temp.img=this->img/c.img;
			return temp;
		}
		complex operator /(int a)
		{
			complex temp;
			temp.real=this->real/a;
			temp.img=this->img/a;
			return temp;
		}

		void display()
		{
			cout<<"\nComplex Number:"<<this->real<<"+"<<this->img<<"i";
		}
};
complex operator +(int,complex);
complex operator-(int,complex);
complex operator*(int,complex);
complex operator /(int,complex);
int main()
{
	complex c1(56,34);
	complex c2(32,22);
	c1.display();
	c2.display();
	complex c3,c4,c5;
	cout<<"\n----------------------Addition----------------------";
	c3=c1+c2;
    cout<<"\nAddition of complex number using 1st case";
    c3.display();
    c4=c1+10;
    cout<<"\nAddition of complex number using 2nd case";
    c4.display();
    c5=operator +(10,c2);
    cout<<"\nAddition of complex number uisng 3rd case";
    c5.display();
    
    cout<<"\n-----------------------substraction---------------------";
     c3=c1-c2;
    cout<<"\nsubstraction of complex number using 1st case";
    c3.display();
    c4=c1-10;
    cout<<"\nsubstraction of complex number using 2nd case";
    c4.display();
    c5=operator -(10,c2);
    cout<<"\nsubstraction of complex number uisng 3rd case";
    c5.display();
    
    cout<<"\n-----------------------multiplication---------------------";
     c3=c1*c2;
    cout<<"\nmultiplication of complex number using 1st case";
    c3.display();
    c4=c1*10;
    cout<<"\nmultiplicationof complex number using 2nd case";
    c4.display();
    c5=operator *(10,c2);
    cout<<"\nmultiplication of complex number uisng 3rd case";
    c5.display();
    
    cout<<"\n-----------------------Division---------------------";
     c3=c1/c2;
    cout<<"\nDivision of complex number using 1st case";
    c3.display();
    c4=c1/10;
    cout<<"\nDivision of complex number using 2nd case";
    c4.display();
    c5=operator /(10,c2);
    cout<<"\nDivision of complex number uisng 3rd case";
    c5.display();
    
}

complex operator +(int a,complex c)
{
		complex temp;
		int r,i;
		r=a+c.get_real();
		i=a+c.get_img();
		temp.set_real(r);
		temp.set_img(i);
		return temp;
	
}
complex operator -(int a,complex c)
{
		complex temp;
		int r,i;
		r=a-c.get_real();
		i=a-c.get_img();
		temp.set_real(r);
		temp.set_img(i);
		return temp;
	
}

complex operator *(int a,complex c)
{
		complex temp;
		int r,i;
		r=a*c.get_real();
		i=a*c.get_img();
		temp.set_real(r);
		temp.set_img(i);
		return temp;
	
}
complex operator /(int a,complex c)
{
		complex temp;
		int r,i;
		r=a/c.get_real();
		i=a/c.get_img();
		temp.set_real(r);
		temp.set_img(i);
		return temp;
	
}

