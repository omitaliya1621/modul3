#include<stdio.h>
void main()
{
	int num1,num2,total=0;
	char op;
	printf("Ennter the number1:");
	scanf("%d",&num1);
	printf("Ennter the number2:");
	scanf("%d",&num2);
	printf("Enter the operation:");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':
		printf("addition is:%d",num1+num2);
		break;
		
		case '-':
		printf("subtraction is: %d",num1-num2);
		break;
		
		case '*':
		printf("mulltiplication is: %d",num1*num2);
		break;
		
		case '/':
		printf("division is: %d",num1/num2);
		break;
		default:
			printf("invalid");
		
		
	}
}
