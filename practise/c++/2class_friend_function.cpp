#include<iostream>
#include<conio.h>
using namespace std;

class Tops2;
class Tops1
{
	int x;
	public:
		void getData()
		{
			cout<<"\nEnter X : ";
			cin>>x;
		
		}
		friend int max(Tops1 t1,Tops2 t2);
};
class Tops2
{
	int y;
	public:
		void getData()
		{
		
			cout<<"\nEnter Y : ";
			cin>>y;
		}
		friend int max(Tops1 t1,Tops2 t2);
};
int max(Tops1 t1,Tops2 t2)
{
	if(t1.x>t2.y)
	{
		return t1.x;
	}
	else
	{
		return t2.y;
	}
}
int main()
{
	//clrsce();
	Tops1 t1;
	Tops2 t2;
	t1.getData();
	t2.getData();
	cout<<"\nMax Value Is : "<<max(t1,t2);
	getch();
}
