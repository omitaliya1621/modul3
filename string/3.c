#include<stdio.h>
void main()
{
	char a[100],b[100];
	int i,k=0,len=0,count=0;
	printf("Enter the string:");
	gets(a);
	while(a[i]!='\0')
	{
		len++;
		i++;
	}
	printf("\nOriginal String = ");
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
	}
	for(i=0;a[i]!='\0'; i++)
	{
		b[i]=a[len-1];
		len--;
	}
	printf("\nReversed String = ");
	for(i=0;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
//	for(i=0;a[i]!='\0'; i++)
//	{
//		if(a[i]!=b[i])
//		{
//			count++;
//		}
//	}
//	printf("\nPallindrome = ");	
//	if(count==0)
//	{
//		printf("yes");
//		
//	}
//	else
//	{
//		printf("not");
//	}
}

