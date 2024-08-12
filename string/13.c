#include<stdio.h>
void main()
{
	char a[100],b;
	int i;
	printf("Enter the string:");
	gets(a);
	printf("Enter the remove characte of string:");
	scanf("%c",&b);
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]==b)
		{
			a[i]=i+1;
		}
	}
	
	for(i=0; a[i]!='\0'; i++)
	{
	
		printf("%c",a[i]);
	}
}
