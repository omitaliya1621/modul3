#include<stdio.h>
void main()
{
	int i,start,end,sum=0,mul=0;
	printf("Entre the start value:");
	scanf("%d",&start);
	printf("Entre the end value:");
	scanf("%d",&end);
	for(i=start; i<=end; i++)
	{
		mul=i*i;
		sum+=mul;
	}
	printf("sum is:%d",sum);
}
