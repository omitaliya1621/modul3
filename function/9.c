#include<stdio.h>
struct std
{
	int no;
	char grade;
	float per;	
};

union st
{
	int no;
	char grade;
	float per;	
};
void main()
{
	struct std std;
	union st st;
	printf("-----------------Enter the strucutre value-----------------\n");
	printf("\nEnter the number:");
	scanf("%d",&std.no);
	printf("\nEnter the Grade:");
	scanf(" %c",&std.grade);
	printf("\nEnter the percentage:");
	scanf("%f",&std.per);
	printf("\nid is=%d",std.no);
	printf("\ngrade is=%c",std.grade);
	printf("\nper is=%.2f",std.per);
	
	printf("\n-----------------Enter the Union value-----------------\n");
	printf("\nEnter the number:");
	scanf("%d",&st.no);
	printf("\nno is=%d",st.no);
	printf("\nchar is=%c",st.grade);
	printf("\nfloat is%.2f",st.per);
	
}
