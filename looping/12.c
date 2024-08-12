#include<stdio.h>
#include<math.h>
void main()
{
	int rem,arm,count=0,num,cpy,cpy1;
	printf("Entre the number:");
	scanf("%d",&num);
	cpy=num;
	cpy1=num;
	while(num!=0)
	{
		num/=10;
		count++;
	}
	while(cpy!=0)
	{
		rem=cpy%10;
		cpy/=10;
		arm+=pow(rem,count);
	}
	if(cpy1==arm)
	{
		printf("%d is armstrong",arm);
	}
	else
	{
		printf("%d is not armstrong",arm);
	}
	
}
