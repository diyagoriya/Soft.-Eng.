//oprators

#include<stdio.h>
#include<conio.h>

void main()
{
	float a,b , sum, sub, mul, div;
	printf("value of A");
	scanf("%f",&a);
	
	printf("\nvalue of B");
	scanf("\n%f",&b);
	
	sum=a+b;
	printf("\naddion %f",sum);
	
	sub=a-b;
	printf("\nsubstraction %f",sub);
	
	mul=a*b;
	printf("\nmultiplication %f",mul);
	
	div=a/b;
	printf("\ndivision %f",div);
	
	
	getch();
}
