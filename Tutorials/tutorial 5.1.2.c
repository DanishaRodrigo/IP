#include<stdio.h>

int main()
{
	int number , sum =0 , count = 1 ;
	float avg ;
	
	
	printf("Enter number :");
	scanf("%d",&number);
	
	while(number>0)
	{
		printf("Number is %d \n",number);
		
		sum = sum + number ;
		
		printf("Enter number :");
		scanf("%d",&number);
		
		count++ ;
	}
	
	printf("The sum is %d\n",sum);
	
	avg = (float)sum / (count-1);
	
	printf("The average is %.2f\n",avg);
	
	return 0 ;
}
