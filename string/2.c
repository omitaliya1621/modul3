#include<stdio.h>
void main()
{
	char a[100];
	int i;
	printf("Enter the string:");
	gets(a);
	for(i=0; a[i]!='\0'; i++)
	{
		printf(" %c ",a[i]);
	}
}
