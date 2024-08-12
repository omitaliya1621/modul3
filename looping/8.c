#include<stdio.h>
void main()
{
	int i,num,a,temp=0,rem;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
	rem=num%10;
	num/=10;

		if(temp<rem)
		{
			if(a<rem)
			{
				a=rem;
			}
		}
	}
	printf("%d",a);
}
