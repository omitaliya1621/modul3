#include<stdio.h>
void main()
{
	int i,num,tab;
	printf("Enter the number for given table:");
	scanf("%d",&num);
	for(i=1; i<=10; i++)
	{
		tab=num*i;
		printf("\n10 * %d=%d",i,tab);
	}
}
