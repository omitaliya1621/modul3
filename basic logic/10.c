#include<stdio.h>
void main()
{
	int area,width,length,height;
	printf("Enter the width:");
	scanf("%d",&width);
	printf("Enter the length:");
	scanf("%d",&length);
	printf("Enter the height:");
	scanf("%d",&height);
	area = 2*(width*length+height*length+height*width);
	printf("area of a rectangular:%d",area);
}
