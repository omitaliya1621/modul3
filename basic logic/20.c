#include<stdio.h>
void main()
{
	int sal,pre,loan,re;
	printf("Enter the salary:");
	scanf("%d",&sal);
	pre=sal*10/100;
	printf("\nPremium is:%d",pre);
	loan=sal*10/100;
	printf("\nloan is:%d",loan);
	re=sal-(pre+loan);
	printf("\nremaining salary is:%d",re);
	
}
