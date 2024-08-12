#include<stdio.h>
void main()
{
	int num,lnum,fnum,sum;
	printf("Entre the value:");
	scanf("%d",&num);
	lnum=num%10;
	while(num>9)	
	{
		num/=10;
	}
	fnum=num;
	sum=lnum+fnum;
	printf("%d",sum);
}
