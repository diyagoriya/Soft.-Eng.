#include<iostream>
#include<conio.h>
using namespace std;

class RBI
{
	public:
		virtual void roi(double r)=0;
};
class SBI:public RBI
{
	public:
		void roi(double r)
		{
			cout<<"\nInterest Rate Given by SBI Is : "<<r;
		}
		void show()
		{
			cout<<"\nHi, I Am SBI ";
		}
};
class HDFC:public RBI
{
	public:
		void roi(double r)
		{
			cout<<"\nInterest Rate Given by HDFC Is : "<<r;
		}
		void show()
		{
			cout<<"\nHi, I Am HDFC ";
		}
};
int main()
{
	//clrscr()
	SBI s;
	s.show();
	s.roi(6.1);
	HDFC h;
	h.show();
	h.roi(6.9);
	getch();
}
