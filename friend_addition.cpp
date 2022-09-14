#include<iostream>
using namespace std;

class Addition
{
	int a,b;
	public:
		Addition(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		friend  void AdditionOftwo(Addition a1);
};

void AdditionOftwo(Addition n)
{
			cout<<"Addition :"<<n.a+n.b;
}

int main()
{
	Addition n(10,5);
	AdditionOftwo(n);
	return 0;
}

