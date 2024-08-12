#include<stdio.h>
struct str
{
	int eno;
	char name[100];
	char add[100];
	int age;
}s1[100];
void main()
{
	int si,i;
	printf("Enter the employee detail:");
	scanf("%d",&si);
	for(i=0; i<si; i++)
	{
		printf("Enter the empno:");
		scanf("%d",&s1[i].eno);
		printf("Enter the emp name:");
		scanf(" %s",&s1[i].name);
		printf("Enter the emp address:");
		scanf(" %s",&s1[i].add);
		printf("Enter the emp age:");
		scanf("%d",&s1[i].age);
	}
	for(i=0; i<si; i++)
	{
		printf("\nEnter the empno:%d",s1[i].eno);
		
		printf("\nEnter the emp name:%s",s1[i].name);
		
		printf("\nEnter the emp address:%s",s1[i].add);
		
		printf("\nEnter the emp age:%d",s1[i].age);
		
		
	}
}
