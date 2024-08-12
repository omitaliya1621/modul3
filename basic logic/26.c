#include<stdio.h>
void main()
{
	float f,c;
	printf("Enter the Fahrenheit:");
	scanf("%f",&f);
	c=(f-32.0)/(9.0/5.0);
	printf("Celsius:%0.2f",c);
}
