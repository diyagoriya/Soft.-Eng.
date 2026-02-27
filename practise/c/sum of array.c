#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,sum=0;
	for(i=0;i<5;i++)
	{
		printf("Enter %d value:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
			
	}
	printf("Sum of array elements: %d",sum);	
}
