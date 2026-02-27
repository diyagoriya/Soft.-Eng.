#include<iostream>
#include<conio.h>
using namespace std;

inline int sum(int a, int b)
{
	return a+b;
}
inline int sub(int a, int b)
{
	return a-b;
}
inline int mul(int a, int b)
{
	return a*b;
}
int main()
{
	int x,y;
	cout<<"\nEnter value :";
	cin>>x;
	cout<<"\nEnter value :";
	cin>>y;
	cout<<"\nAddition :"<<sum(x,y);
	cout<<"\nSubtraction :"<<sub(x,y);
	cout<<"\nMultipication :"<<mul(x,y);
	getch();
}
