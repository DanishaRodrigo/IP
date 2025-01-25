#include<stdio.h>

int main()
{
	char input ;
	int distance ;
	float charge , total_charge = 0.0 ;
	
	do
	{
		printf("Enter distance :");
		scanf("%d%*c",&distance);
		
		if(distance <= 3)
		{
			charge = 50.00 ;
		}
		else if(distance <= 8)
		{
			charge =75.00 ;
		}
		else if(distance <= 15)
		{
			charge = 125.00 ;
		}
		else
		{
			charge = 150.00 ;
		}
		
		total_charge = total_charge + charge ;
		
		printf("Do you want to enter another delivery details(Y/N) :");
		scanf("%c",&input);
		
	}while(input == 'Y' || input == 'y');
	
	printf("Total charge is : %2f \n",total_charge);
	
	return 0 ;	
}
