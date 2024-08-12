#include<stdio.h>
void main()
{
	char a[100],c[100]={},b[100];
	int k,i=0,length=0;
	
	printf("Enter the string no 1:");
	gets(a);
	printf("Enter the string no 2:");
	gets(b);
	
	while(a[i]!='\0')
	{
		length++;
		i++;
	}
	for(i=0,k=length; b[i]!='\0'; i++,k++)
	{
		a[k]=b[i];
	}
	
	printf("%s",a);
	
}
