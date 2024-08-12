#include<stdio.h>
void main()
{
	int num,sum,rem;
	printf("Enter the value:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		num/=10;
		sum+=rem;
		
	}
	printf("sum of:%d",sum);
}
