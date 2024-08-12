#include<stdio.h>
void main()
{
	int no1,no2,add,sub,mul,div,mod,op;
	printf("Enter the number 1:");
	scanf("%d",&no1);
	printf("Enter the number 2:");
	scanf("%d",&no2);
	add=no1+no2;
	if(add)
	{
		printf("sum is:%d",add);
		
	}
	else
	{
		printf("ok");
	}
}
