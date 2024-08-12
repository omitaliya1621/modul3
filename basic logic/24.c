#include<stdio.h>
void main()
{
	int i,sum=0,sal,avg;
	char c[10];
	for(i=0; i<5; i++)
	{
	
	printf("Enter the name ");
	scanf(" %s",&c);
	printf("Enetr the salary:");
	scanf("%d",&sal);
	
		sum+=sal;
	
	}
		avg=sum/i;
	printf("\nsum is %d",sum);
	printf("\navg is %d",avg);
	
}
