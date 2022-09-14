#include<iostream>
using namespace std;

class Fibonaaci
{
	int a=0,b=1,c;
	int num,i;
	public:
		Fibonaaci()
		{
			cout<<"\nEnter the number:";
			cin>>num;
			cout<<"\nFibonaaci Series is :"<<a<<b;
			for(i=2;i<num;i++)
			{
				c=a+b;
				cout<<c;
				a=b;
				b=c;
			}
		}
		friend void fibonaaci_series(Fibonaaci f);
};

void fibonaaci_series(Fibonaaci f)
{
	cout<<"\n";
}
 int main()
 {
 	Fibonaaci f;
 	fibonaaci_series(f);
 }
