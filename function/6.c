#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],i,j,k,sum,sub,mul;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter the index of matrix:1[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter the index of matrix:2[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("---------------First matrix---------------\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	printf("---------------Second matrix---------------\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	printf("---------------Sum of matrix---------------\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			sum=a[i][j]+b[i][j];
			printf("%d ",sum);
		}
			printf("\n");
	}
	printf("---------------Sum of matrix---------------\n");
		for(i=0; i<2; i++)
		{
			for(j=0; j<2; j++)
			{
				sub=a[i][j]-b[i][j];
				printf("%d ",sub);
			}
			printf("\n");
		}
	printf("---------------Multiplication of matrix---------------\n");
		for(i=0; i<2; i++)
		{
			for(j=0; j<2; j++)
			{
				mul=0;
				for(k=0; k<2; k++)
				{
					mul+=a[i][k]*b[k][j];
				}
					printf("%d ",mul);
			}
			printf("\n");
		}

}
