#include<stdio.h>

int main()
{
	int i ;
	int data[12];
	float min , max ;
	int maxIndex , minIndex , month ;
	
	for(i=0 ; i<12 ;i++)
	{
		printf("Enter monthly average rainfall :");
		scanf("%d",&data[i]);
	}
	
	max = data[0];
	min = data[0];
	maxIndex = 0;
	minIndex = 0 ;
	
	for(i=0 ; i<12 ; i++)
	{
		if(data[i]>max)
		{
			max = data[i];
			maxIndex = i ;
		}
	}
	
	printf("\nHighest rainfall month is %d for %.2f\n",maxIndex+1 , max);
	
	for(i=0 ; i<12 ; i++)
	{
		if(data[i]< min)
		{
			min = data[i];
			minIndex = i ;
		}
	}
	
	printf("\nLowest rainfall month is %d for %.2f\n",minIndex+1 , min);
	
	
return 0;	
	
}
