#include<stdio.h>
void main()
{
	int arr[100],i,temp=0,j;
	for(i=0; i<5; i++)
	{
		printf("Enter the number:");
		scanf("%d",&arr[i]);
		
	}
	  for (i = 0; i < 5; i++) 
	  {     
        for (j = i+1; j < 5; j++) 
		{     
           if(arr[i] > arr[j]) 
		   {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
        
     
    printf("Elements of array sorted in ascending order: \n");    
    for (i = 0; i < 5; i++)
    {     
        printf("%d ", arr[i]);    
    }   
}
