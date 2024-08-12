#include<stdio.h>
void main()
{
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	(no%3==0)?printf("%d is even",no):printf("%d is odd",no);
}

