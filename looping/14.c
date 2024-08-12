#include<stdio.h>
int main()
{
	int i,no[5],j;
	printf("\n enter Nomber : ");
	for(i=0;i<5;i++)
	{
		printf("\n No[%d] = ",i+1);
		scanf("%d",&no[i]);
	}
   for(j=0;j<5;j++)
   {
   int fac=1;
	for(i=no[j];i>0;i--)
	{  
	
		fac= fac * i;
	}
	    printf("\n %d factorial is = %d",no[j],fac);
      }
	
	return 0;
	
}
