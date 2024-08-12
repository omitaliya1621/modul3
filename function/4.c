#include<stdio.h>
int fact(int num);
void main()
{
	int num,ans;
	printf("Enter the number");
	scanf("%d",&num);
	ans=fact(num);
	printf("%d",ans);
}
int fact(int num)
{
	while(num>=2)
	{
		return num*fact(num-1);	
	}
}


