#include<iostream>
#include<conio.h>
using namespace std;

class Box
{ 
 	public:
 		Box()
 		{
 			cout<<"\nCoustructor called";
		 }
		 ~Box()
		 {
		 	cout<<"\nDesrtuctor Called";
		 }
};
int main()
{ 
  	Box b1,b2,b3;
  	{
  		Box b4;
	}
	Box b5;
	{
		Box b6;
	}
	getch();
}
