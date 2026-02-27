#include<stdio.h>
#include<conio.h>

void main()
{
	float maths,sci,eng,total,per;
	
	printf("Enter marks of Maths subject :");
	scanf("%f",&maths);
	printf("Enter marks of Science subject :");
	scanf("%f",&sci);
	printf("Enter marks of English subject :");
	scanf("%f",&eng);
	total = maths+sci+eng;
	
	per=(total/300)*100;
	printf("your percentage is %.2f ",per);
	
	if(per>100.00 || per < 0)
	{
		printf("\nInvlid percentage!");
	}
	else if(per<=100 && per>= 85)
	{
		printf("\nDistiction grade");
	 } 
	else if (per < 85 && per >=70 )
	{
		printf("\nFirst class grade");
	}
	else if (per < 70 && per >=60 )
	{
		printf("\nSecond class grade");
	}
	else if (per < 60 && per >=45 )
	{
		printf("\nThird class grade");
	}
	else
	{
		printf("\nFailed");
	}
	
getch();
}
