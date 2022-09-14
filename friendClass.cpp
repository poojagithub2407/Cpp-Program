#include<iostream>
using namespace std;
class Complex;
class Calculator
{
	public:
		int add(int a,int b)
		{
			return (a+b);
		}
		int sumRealComplex(Complex,Complex);
		int sumImgComplex(Complex,Complex);
};



class Complex
{
	int a,b;
	friend int Calculator::sumRealComplex(Complex,Complex);
	friend int Calculator::sumImgComplex(Complex,Complex);
//	friend class Calculator;
	public:
	void setNumber(int n1,int n2)
	{
		this->a=n1;
		this->b=n2;
	}
	void printNumber()
	
	{
		cout<<"\nComplex number :"<<a<<"+"<<b<<"i";
	}
	
};

Calculator::sumRealComplex( Complex o1,Complex o2)
{
	return(o1.a+o2.a);
}
 Calculator::sumImgComplex(Complex o1,Complex o2)
 {
 	  return(o1.b+o2.b);
 }
int main()
{
	Complex o1,o2;
	o1.setNumber(1,4);
	o2.setNumber(2,4);
	o2.printNumber();
	o1.printNumber();
	Calculator calc;
	int result=calc.sumRealComplex(o1,o2);
	cout<<"\nSum of real part of Complex number :"<<result;
	result=calc.sumImgComplex(o1,o2);
	cout<<"\nSum of Img part of Complex number :"<<result<<"i";
}
