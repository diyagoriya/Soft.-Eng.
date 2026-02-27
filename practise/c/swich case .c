#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ans,choice;
	printf("\nEnter A :");
	scanf("%d",&a);
	printf("\nEnter B :");
	scanf("%d",&b);
	printf("\n\nEnter 1 for Addition.");
	printf("\nEnter 2 for Subtraction.");
	printf("\nEnter 3 for Multiplication.");
	printf("\nEnter 4 for Division.");
	printf("\n\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			ans=a+b;
			printf("Addition is :%d",ans);
			break;
		case 2:
			ans=a-b;
			printf("Subtraction is :%d",ans);
			break;
		case 3:
			ans=a*b;
			printf("Multiplication is :%d",ans);
			break;
		case 4:
			ans=a/b;
			printf("Division is :%d",ans);
			break;
		default:
			printf("Worng choice");
			
		
	}
}
