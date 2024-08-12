#include<stdio.h>
void main()
{
	int exp,i,sum=0,avg;
	for(i=0;i<5;i++)
	{
		printf("Enter the expense:");
		scanf("%d",&exp);
		sum+=exp;
	}
	avg=sum/i;
	printf("\ntotal expense is:%d",sum);
	printf("\naverage is %d",avg);
}
