#include<stdio.h>
void main()
{
	char name[100];
	int i;
	for(i=0; i<5; i++)
	{
		printf("Enter the name of-%d:",i+1);
		scanf(" %s",&name[i]);
	}
}
