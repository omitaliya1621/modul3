#include<stdio.h>
void main()
{

	char alp;
	printf("Enter the the Character:");
	scanf(" %c",&alp);
	if(alp>=65 && alp<=90)
	{
		printf("character %C is capital",alp);
	}
	else if(alp>=97 && alp<=122)
	{
		printf("character %c is small",alp);
	}
	else if((alp>=33 && alp<=47) || alp>=58 && alp<=64)
	{
		printf("character %c is special character",alp);
	}
	else
	{
		printf("charcter %c is number",alp);
	}
}
