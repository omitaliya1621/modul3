#include<stdio.h>
void main()
{
	int n1,n2,sum;
	printf("Enter number 1:");
	scanf("%d",&n1);
	printf("Enter number 2:");
	scanf("%d",&n2);
	sum=n1+n2;
	printf("sum is:%d",sum);
	printf("\nsize of:%d ",sizeof(sum));
}
