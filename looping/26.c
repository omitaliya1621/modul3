// 		question no--26
// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
void main()
{
	int i,j,end,sum=0;
	printf("Entre the end value:");
	scanf("%d",&end);
	j=1;
	for(i=1; i<=end; i++)
	{
	
		for(j=1; j<=i; j++)
		{	
			sum+=j;
		}
	}
	printf("%d",sum);
}
