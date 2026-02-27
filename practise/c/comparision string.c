#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	// Comparision 2 strings
	char str1[50],str2[50];
	int x;
	printf("Enter string 1 :");
	gets(str1);
	printf("Enter String2 :");
	gets(str2);
	
	x=strcmp(str1,str2);
	if(x==0)
	{
		printf("Both strings are same");
	}
	else
	{
		printf("Both Strings are different");
	}
	getch();
}

