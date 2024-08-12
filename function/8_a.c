#include<stdio.h>
#include<string.h>
void main()
{ 
	int eno,age;
	char name[100], add[50];

		
	printf("Enter the empno:");
	scanf("%d",&eno);
    printf("Enter the empname:");
	gets(name);
	printf("Enter the employee address:");
	scanf("%s",&add);
	printf("Enter the employee age:");
	scanf("%d",&age);
	
	
	printf("\nempno:%d",eno);
	
	printf("\nempname: %s",name);
	
	printf("\nemployee address:%s",add);
	
	printf("\nemployee age:%d",age);
	
}
