#include<stdio.h>
void main()
{
		int no1,no2,swap;
		printf("Enter the no1:");
		scanf("%d",&no1);
		printf("Enter the no2:");
		scanf("%d",&no2);
		swap=no1;
		no1=no2;
		printf("no1 is:%d",no1);
		printf("\nno2 is:%d",swap);
}
