#include<iostream>
#include<conio.h>
using namespace std;

class Tops
{
	int a,b;
	public:
	int c;
	void display()
	{
		cout<<"\n"<<"a = "<<a;
	}
};
int main()
{
	Tops t1;
	//t1.a=10;
	//t1.b=12;
	t1.c=30;
	cout<<"\nC : "<<t1.c;
	getch();
}
