#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	printf("\nEnter c :");
	scanf("%d",&c);
	
	if(a>b)
	{
		printf("\nA is max number");
	}
	else
	{
		printf("\nB is max number");
	}
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\nA is max number");
		}
		else
		{
			printf("\nC is max number");
		}
	}
	else if(b>c)
	{
		printf("\nB is max number");
	}
	else
	{
		printf("\nC is max number");
	}
	getch();
}
