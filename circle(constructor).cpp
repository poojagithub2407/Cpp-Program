#include<iostream>
using namespace std;

class circle
{
	int r,area;
	const float pi=3.14;
	public:
		circle()
		{
			this->r=3;
		}
		void calculate()
		{
			area=pi*r*r;
			cout<<"\nArea of circle:"<<area;
		}
		
};

int main()
{
	circle c;
	c.calculate();

}
