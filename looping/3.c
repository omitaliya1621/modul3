#include<stdio.h>
void main()
{
	int sumo,num,count=0,cnt=0,i,sume;
	for(i=1; i<=10; i++)
	{
		printf("Enter the number:");
		scanf("%d",&num);
			if(num%2==0)
			{
				count++;
				sume+=num;	
			}
			else
			{
				cnt++;
				sumo+=num;
			}
			
			
	}
	printf("\nsum of even number:%d",sume);
	printf("\n total even number:%d",count);
	printf("\n sum of odd number:%d",sumo);
	printf("\n total odd number:%d",cnt);
}
