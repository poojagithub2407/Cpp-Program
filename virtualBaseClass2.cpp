#include<iostream>
using namespace std;

class Shape
{
	public:
		virtual void draw()
		{
			cout<<"\nBase class drawn";
		}
};

class Circle:public Shape
{
	public:
		 void draw()
		{
			cout<<"\nCircle is drawn";
		}
};

class Square:public Shape
{
	public:
	void draw()
		{
			cout<<"\nSqare is drawn";
		}
	
};

class Triangle:public Shape
{
	public:
		 void draw()
		{
			cout<<"\nTriangle is drawn";
		}
	
};

int main()
{
	Shape   *sp;
	Shape s1;
	sp = &s1;
	sp->draw();

	Circle cr;
	sp=&cr;
	sp->draw();
	
	Square sq;
	sp=&sq;
	sp->draw();
	
	Triangle t1;
	sp=&t1;
	sp->draw();
		
}
