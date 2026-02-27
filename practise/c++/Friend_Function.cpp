#include<iostream>
#include<conio.h>
using namespace std;

class Tops
{
	int x,y;
	public:
		void getData()
		{
			cout<<"\nEnter X : ";
			cin>>x;
			cout<<"\nEnter Y : ";
			cin>>y;
		}
		friend int max(Tops t1);
};
int max(Tops t1)
{
	if(t1.x>t1.y)
	{
		return t1.x;
	}
	else
	{
		return t1.y;
	}
}
int main()
{
	//clrsce();
	Tops t1;
	t1.getData();
	cout<<"\nMax Value Is : "<<max(t1);
	getch();
}
