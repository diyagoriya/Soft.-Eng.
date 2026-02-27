#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,ans,choice;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("\nEnter B :");
	scanf("%d",&b);
	printf("\n\n1. Addistion");
	printf("\n2. subtraction");
	printf("\n3. multipication");
	printf("\n4. Division");
	printf("\n\nEnter your choice  :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			ans=a+b;
			printf("\nAddistion : %d",&ans);
			break;
		
		case 2:
			ans=a-b;
			printf("\nSubtraction : %d",&ans);
			break;
		
		case 3:
			ans=a*b;
			printf("\nMultiplication :%d",&ans);
			break;
			
		case 4:
			ans=a/b;
			printf("\nDivistion :%d",&ans);
			break;
			
		default:
			printf("\nInvelid choice");
			break;
		
   }
   
   getch();	
   
}

