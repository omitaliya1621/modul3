#include<stdio.h>
void main()
{
	int sum=0,num,i=0;

	while(i!=10)
	{
		printf("Enter the value:");
		scanf("%d",&num);
		sum+=num;
		i++;
	}
	printf("%d",sum);
}
