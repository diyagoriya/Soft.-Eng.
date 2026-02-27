// compile time pollyemorfizam

#include<iostream>
#include<conio.h>
using namespace std;

class Tops
{
	public:
		void test()
		{
			cout<<"\nTest With No Argument ";
		}
		void test(int a)
		{
			cout<<"\nTest With 1 Argument ";
		}
		void test(int a, int b)
		{
			cout<<"\nTest WIth 2 Argument ";
		}
};
int main()
{
	Tops t1;
	t1.test(10);
	t1.test(10,20);
	t1.test();
	getch();
}
