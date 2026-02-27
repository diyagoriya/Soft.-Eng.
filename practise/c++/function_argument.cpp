#include<iostream>
#include<conio.h>
using namespace std;

class Clock
{
	int hrs,mnt;
	public:
		void insert_time(int h,int m)
		{
			hrs=h;
			mnt=m;
		}
		void display_time()
		{
			cout<<hrs<<"hours & "<<mnt<<"Minutes"<<"\n";
		}
		void sum(Clock c1, Clock c2);
};
void Clock::sum(Clock c1, Clock c2)
{
	mnt=c1.mnt+c2.mnt;
	hrs=mnt/60;
	mnt=mnt%60;
	hrs=hrs+c1.hrs+c2.hrs;
}
int main()
{
	//clrscr();
	Clock c1,c2,c3;
	c1.insert_time(3,55);
	c2.insert_time(3,45);
	c3.sum(c1,c2);
	cout<<"\nTime 1 : ";
	c1.display_time();
	cout<<"\nTime 2 : ";
	c2.display_time();
	cout<<"\nTime 3 :";
	c3.display_time();
	getch();
}
