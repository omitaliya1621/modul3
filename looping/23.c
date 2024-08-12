#include<stdio.h>
void main()
{
	int i,num,rev=0,rem,len=0,num1;
	printf("Enter the number:");
	scanf("%d",&num);
	num1 = num;
	while(num1!=0)
	{
		num1 =  num1/10;
		len++;
	}
	for(i=1; i<=len; i++)
//	while(num!=0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	printf("rev:%d",rev);
}
