#include<stdio.h>
void main()
{
	int unit,charg,id;
	char name[10];
	printf("Enter the name:");
	scanf(" %s",&name);
	printf("Enter the id:");
	scanf("%d",&id);
	printf("Enter the unit:");
	scanf("%d",&unit);
	if(unit>0 && unit<365)
	{
		charg=unit*1.20;
	}
	else if(unit>=350 && unit<600)
	{
		charg=unit*1.50;
	}
	else if(unit>=600 && unit<800)
	{
		charg=unit*1.80;
	}
	else if(unit>=800)
	{
		charg=unit*2;
	}
	printf("\nname is %s",name);
	printf("\nid is %d",id);
	printf("\ncharge is :%d",charg);
}
