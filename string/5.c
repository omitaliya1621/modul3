#include<stdio.h>
void main()
{
	char a[100],b[100];
	int i,j,count=0;
	printf("Enter the string of 1:");
	gets(a);
	printf("\nEnter the string of 2:");
	gets(b);
	while(a[i]!='\0',b[i]!='\0')
	{
		i++;
		if(a[i]!=b[i])
		{
			printf("\nstring is not same");
			goto sp;
		}
	}
	for(i=0,j=0; a[i]!='\0',b[j]!='\0'; i++,j++)
	{
		
		if(a[i]!=b[j])
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("\nSame string");
	}
	else
	{
		printf("\nstring is not same");
	
	}
	 sp:;
}
