#include<iostream>
#include<conio.h>
using namespeace std;

Class A
{
	int a;
	public:
		void getA()
		{
			cout<<"\nEnter A :";
			cin>>a;
		 } 
		 void putA()
		 {
		 	cout<<"\nA : "<<a;
		 }
};
class B:public A
{
	int b;
	public:
		void getB()
		{
			cout<<"\nEnter B :";
			cin>>b;
		}
		void putB()
		{
			cout<<"\nB :"<<b;
		}
};
class C:public B
{
	int c;
	public:
		void getC()
		{
			cout<<"\nentre C :";
			cin>>c;
		}
		void putC()
		{
			cout<<"\nC :"<<c;
		}
};
void main()
{ 
	C c1;
	c1.getc();
	c1.getc();
	c1.putc();
	c1.putc();
	getch();
}
