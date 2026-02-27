#include<iostream>
#include<conio.h>
using namespace std;

class Tops
{
	int num;
	static int count;
	public:
	void val_counter()
	{
		num=++count;
	}
	void obj_counter()
	{
		cout<<"\nobject count : "<<num;
	}
	static void display()
	{
		cout<<"\ncout : "<<count;
	}
};
int Tops::count;
int main()
{
	//clrscr();
	Tops t1,t2;
	t1.val_counter();
	t2.val_counter();
	Tops::display();
	Tops t3;
	t3.val_counter();
	Tops::display();
	t1.obj_counter();
	t2.obj_counter();
	t3.obj_counter();
	getch();
}
