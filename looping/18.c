#include<stdio.h>
void main()
{
	int i,tab,num;
	printf("Enter the number as shown in the table:");
	scanf("%d",&num);
	for(i=1; i<=10; i++)
	{
		tab=num*i;
		printf("\n%d * %d =%d",num,i,tab);
	}
	
}
