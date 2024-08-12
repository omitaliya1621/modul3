#include<stdio.h>
void main()
{
	int sal,hra,da,total;
	printf("Enter the salary:");
	scanf("%d",&sal);
	if(sal<=10000)
	{
		hra=sal*0.20;
		da=sal*0.80;
		total=(sal+da)-hra;
	}
	else if(sal<=20000)
	{
		hra=sal*0.25;
		da=sal*0.90;
	}
	else if(sal>20000)
	{
		hra=sal*0.30;
		da=sal*0.95;
	}
	total=sal+hra+da;
	printf("\ntotal salary:%d",total);
	
}
