#include<iostream>
#include<conio.h>
using namespace std;

class A
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
			cout<<"\nEnter C :";
			cin>>c;
		}
		void putC()
		{
			cout<<"\nC :"<<c;
		}
};
class D:public C
{
	int d;
	public:
		void getD()
		{
			cout<<"\Enter D :";
			cin>>d;
		}
		void putD()
		{
			cout<<"\nD :"<<d;
		}
};

int main()
{ 
	B b1;
	b1.getA();
	b1.getB();
	b1.putA();
	b1.putB();
	getch();
}

