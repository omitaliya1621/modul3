#include<stdio.h>
void main()
{
	int num;
	printf("Enter the  number :");
	scanf("%d",&num);
	if(num>0)
	{
		printf("number is positive");
		
	}
	else if(num==0)
	{ 
		printf("number is zero");
	}
	else 
	{
		printf("number is negative");
	}
}
