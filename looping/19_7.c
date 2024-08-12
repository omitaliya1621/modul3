#include<stdio.h>
void main()
{
	int arr[10][10],n=1,i,j;
	int top=0,bottom=9;
	int left=0,right=9;
	while(left<=right)
	{
		for(i=left;i<=right;i++)
		{
			arr[top][i]=n++;
		}
		top++;
		for(i=top;i<=bottom;i++)
		{
			arr[i][right]=n++;
		}
		right--;
		for(i=right;i>=left;i--)
		{
			arr[bottom][i]=n++;
		}
		bottom--;
		for(i=bottom;i>=top;i--)
		{
			arr[i][left]=n++;
		}
		left++;
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
}
