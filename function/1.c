#include<stdio.h>
int max(int a, int b);
void main()
{
	int num1,num2;
	printf("Enter the number1:");
	scanf("%d",&num1);
	printf("Enter the number2:");
	scanf("%d",&num2);
	
	max(num1,num2);
}
int max(int a,int b)
{
	if(a>b)
	{
		printf("num:%d is big ",a);
	}
	else
	{
		printf("num:%d is big",b);
	}
}
