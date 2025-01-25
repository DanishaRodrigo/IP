#include<stdio.h>

int main()
{
	int Motion[5] ;
	int i ,val ;
	
	for(i=0 ; i<5 ; i++)
	{
		printf("Enter the values :\t");
	    scanf("%d",&Motion[i]);
    }
    
    printf("\nInitial value :");
    for(i=0 ; i<5 ; i++)
    {
    	printf("%d\t",Motion[i]);
	}
	printf("\n");
	
	val = Motion[0];
	
	for(i=0 ; i<4 ; i++)
	{
		Motion[i]=Motion[i+1];
	}
	
	Motion[4]= val;
	
	printf("after rotating :");
	
	for(i=0 ; i<5 ; i++)
	{
		printf("%d\t",Motion[i]);
	}
	 return 0 ;
	
	 
}
