#include<stdio.h>
void main()
{
	int num[100],i,odd=0,even=0;
	for(i=0; i<5; i++)
	{
		printf("Entre the number");
		scanf("%d",&num[i]);
	}
	for(i=0; i<5; i++)
	{
		if(num[i]%2==0)
		{
			even++;
			printf("\neven number:%d",num[i]);
		}
		else
		{
			odd++;
			printf("\nodd number:%d",num[i]);
		}
	}
	printf("\nTotal even number:%d",even);
	printf("\nTotal odd number:%d",odd);
}
