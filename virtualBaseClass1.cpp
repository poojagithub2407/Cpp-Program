#include<iostream>
using namespace std;

class Student
{
	protected:
		int roll_no;
		public:
			void set_number(int r)
			{
				this->roll_no=r;
			}
			void print_number()
			{
				cout<<"\nRoll of Student :"<<roll_no;
			}
};

class Test:public  virtual Student
{
	 protected:
	 	float phy,maths;
	 	public:
	 		void set_Marks(float p,float m)
	 		{
	 			this->phy=p;
	 			this->maths=m;
			 }
			 void print_Marks()
			 {
			 	cout<<"\nMarks of Student :"<<"\nPhysic:"<<phy<<"\nMaths:"<<maths;
			 }
};

class Sport:public  virtual Student
{
	protected:
		float score;
		public:
			void set_Score(float s)
			{
				this->score=s;
			}
			void print_Score()
			{
				cout<<"\nScore of Matches:"<<score;
			}
};

class Result:public Test,public Sport
{
	private:
		float total;
		public:
		void Display()
		{
	
			total=maths+phy+score;
			void print_number();
			void print_Score();
			cout<<"\nTotal Score is:"<<total;
		}
};

int main()
{
	Result r;
	r.set_number(30);
	r.set_Marks(67.56,56.5);
	r.set_Score(5.5);
	r.Display();
	return 0;
}
