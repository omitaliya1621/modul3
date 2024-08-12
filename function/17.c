#include<stdio.h>
struct std
{
	int no1;
	char grade;
	float per;
}s1;
union stdd
{
	
	int no;
	char grad;
	float pe;
};
void main()
{
	printf("----------------------this is structure---------------------------\n");
	struct std;
	printf("Enter the no:");
	scanf("%d",&s1.no1);
	printf("\nEnter the garde:");
	scanf(" %c",&s1.grade);
	printf("\nEnter the percentage:");
	scanf("%f",&s1.per);
	printf("\nEnter the no:%d",s1.no1);	
	printf("\nEnter the no:%c",s1.grade);	
	printf("\nEnter the no:%.2f",s1.per);	
	
	
	printf("\n----------------------This is union---------------------------\n");
	union stdd s2;
	printf("Enter the no:");
	scanf("%d",&s2.no);
//	printf("\nEnter the garde:");
//	scanf(" %c",&s2.grad);
//	printf("\nEnter the percentage:");
//	scanf("%f",&s2.pe);
	printf("\nEnter the no:%d",s2.no);	
	printf("\nEnter the no: %c",s2.grad);	
	printf("\nEnter the no:%.2f",s2.pe);	
}
