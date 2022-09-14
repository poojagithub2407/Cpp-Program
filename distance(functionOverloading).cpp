#include<iostream>
using namespace std;
class dist
{
	int m,cm,ich;
	public:
		dist()
		{
			this->m=0;
			this->cm=0;
			this->ich=0;
		}
		dist(int a,int b,int c)
		{
			this->m=a;
			this->cm=b;
			this->ich=c;
		}
		dist add(dist d2)
		{
			dist temp;
			temp.m=this->m+d2.m;
			temp.cm=this->cm+d2.cm;
			temp.ich=this->ich+d2.ich;
			return temp;
		}
		dist add(int a)
		{
			dist temp;
			temp.m=this->m+a;
			temp.cm=this->cm+a;
			temp.ich=this->ich+a;
			return temp;
		}
		void display()
		{
			cout<<"\nDistance :"<<m<<"\tm"<<cm<<"\tcm"<<ich<<"\tich";
		}
};

int main()
{
	dist d1(2,3,4);
	dist d2(2,4,6);
	d1.display();
	d2.display();
	dist d3;
	d3=d1.add(d2);
	cout<<"\nAddition of distance  using 1st case:";
	d3.display();
	dist d4;
	d4=d1.add(10);
	cout<"\nAddition of distance using 2nd case:";
	d4.display();
}

