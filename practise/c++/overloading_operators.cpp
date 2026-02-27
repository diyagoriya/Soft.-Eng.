// overload oprators
#include<iostream>
#include<conio.h>
using namespace std;

class Tops
{
	int a,b,c;
	public:
		void getData(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void showData()
		{
			cout<<"\nA : "<<a;
			cout<<"\nB : "<<b;
			cout<<"\nC : "<<c;
		}
		void operator -()
		{
			a=-a;
			b=-b;
			c=-c;
		}
};
int main()
{
	//clrscr()
	Tops t1;
	t1.getData(10,-20,30);
	t1.showData();
	-t1;
	t1.showData();
	getch();
}
