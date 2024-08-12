#include<stdio.h>
void main()
{
	char vowel;
	printf("Enter the alphabet:");
	scanf("%c",&vowel);
	if((vowel=="a") || (vowel=="e") || (vowel=="i") || (vowel=="o") || (vowel=="u"))
	{
		printf(" %c is vowel",vowel);
	}
	else
	{
		printf(" %c is not vowel",vowel);
	}
	
}
