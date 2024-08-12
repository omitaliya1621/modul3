#include<stdio.h>
void main()
{
	int num,sum=0,i;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		sum+=i;
	}
	printf("\nTotal is:%d",sum);
}
