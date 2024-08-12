#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("Enter the three value");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>num2 && num1>num3)
	{
		printf(" number %d is largest",num1);
	}
	else if(num2>num3)
	{
		printf(" number %d is largest",num2);
	}
	else
	{
		printf(" number %d is largest",num3);
	}
}
