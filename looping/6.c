#include<stdio.h>
void main()
{
	int num1=0,num2=1,num3,range,i;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("%d\t%d",num1,num2);
	for(i=1; i<=range-2; i++)
	{	
		num3=num1+num2;
		printf("\t%d",num3);
		num1=num2;
		num2=num3;
	}
}
