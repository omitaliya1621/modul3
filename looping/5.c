#include<stdio.h>
void main()
{
	int i,fac=1,num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		fac*=i;
	}
	printf("factorial is:%d",fac);
}
