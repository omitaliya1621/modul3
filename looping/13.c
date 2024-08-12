#include<stdio.h>
void main()
{
	int i=1,fac=1,num;
	printf("Enter the number:");
	scanf("%d",&num);
	while(i<=num)
	{
		
		fac=fac*i;
		i++;	
		
	}
	printf("%d",fac);
}
