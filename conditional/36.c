#include<stdio.h>
void main()
{
	float unit,com,total=0;
	printf("Entre your unit");
	scanf("%f",&unit);
	if(unit<=50)
	{
		total=(unit*0.50);
	}
	else if(unit>50 && unit<=150)
	{
		unit=unit-50;
		com=50*0.50;
		unit=unit*0.75;
		total=com+unit;
	}
	else if(unit>150 && unit<=250)
	{
		unit=unit-150;
		com=(50*0.50)+(100*0.75);
		unit=unit*1.20;
		total=com+unit;
		
	}
	else if(unit>250)
	{
		unit=unit-250;
		com=(50*0.50)+(100*0.75)+(100*1.20);
		unit=unit*1.50;
		total=com+unit;
	}
	total=total*1.20;
	printf("%.2f",total);
	
}
