 #include<stdio.h>
 void main()
{
	char a[100];
	int cnt,i=0;
	printf("Enter the string:");
	gets(a);
	while(a[i]!='\0')
	{
		i++;
		cnt++;
	}
	printf("length of string is:%d",cnt);
}
