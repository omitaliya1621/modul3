#include<stdio.h>
void main()
{
	int rev=0,rem,num;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("\norignale number:%d",num);
	while(num!=0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num/=10;
		
	}
	printf("\nreverse number is:%d",rev);
	
}
