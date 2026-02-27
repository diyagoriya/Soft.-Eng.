#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("Enter C:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
	printf("A is max");
	}
	else if(b>c && b>a)
	{
		printf("b is max");
	}
	else
	{
		printf("c is max");
	}
	getch();
}
