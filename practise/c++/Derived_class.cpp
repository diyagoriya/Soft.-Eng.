#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
	public:
		virtual void show()
		{
			cout<<"\nShow From Base";
		}
};
class Derived:public Base
{
	public:
		void show()
		{
			cout<<"\nShow From Derived";
		}
};
int main()
{
	//clrsce()
	Base *bptr;
	Base b;
	Derived d;
	bptr=&b;
	bptr->show();
	bptr=&d;
	bptr->show();
	getch();
}
