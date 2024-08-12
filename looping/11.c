#include<stdio.h>
void main()
{
	int i;
	char c[20];
	for(i=1; i<=5; i++)
	{
		printf("\nEnter the name:");
		scanf("%s",&c);
		printf("name is:%s",c);
	}
	
}
