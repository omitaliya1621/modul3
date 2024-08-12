#include<stdio.h>
void main()
{
	int month;
	printf("Entre the the value :");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			
			printf("January");
		break;
		case 2:
			printf("February");
		break;
		case 3:
			printf("March");
		break;
		case 4:
			printf("April");
		break;
		case 5:
			printf("may");
		break;
		case 6:
			printf("June");
		break;
		case 7:
			printf("July");
		break;
		case 8:
			printf("August");
		break;
		case 9:
			printf("September");
		break;
		case 10:
			printf("october");
		break;
		case 11:
			printf("november");
		break;
		case 12:
			printf("December");
		break;
		default:
			printf("Invalid");
	}
}
