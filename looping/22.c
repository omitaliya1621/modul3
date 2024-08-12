#include<stdio.h>
void main()
{
	int com,num,rev=0,rem;
	printf("Enter the value:");
	scanf("%d",&num);
	com=num;
	while(num!=0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num/=10;
	}if(com==rev)
	{
	printf("%d is palindrome number",rev);
	}
	else
	{
		printf("%d is not palindrome",rev);
	}
}
