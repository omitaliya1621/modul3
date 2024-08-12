#include<stdio.h>

int pali(int no)
{	int num,cpy1,cpy2,length,i,rem,rev;
	num=no;
	cpy1=num;
	cpy2=cpy1;
	for(i=num; num!=0; i++)
	{
		length++;
		num/=10;
	}
	
	for(i=0; i<length; i++)
	{
		rem=cpy1%10;
		rev=rem+(rev*10);
		cpy1/=10;
	}
	if(cpy2==rev)
	{
		printf("number %d is palimdrome",rev);
	}
	else
	{
		printf("number %d is not palimdrome",rev);
	}
	
	return rev;
}

void main()
{
	int nu;
	printf("Enter the number:");
	scanf("%d",&nu);
	pali(nu);
	
	
}
