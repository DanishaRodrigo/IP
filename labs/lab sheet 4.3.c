#include<stdio.h>

int main ()
{
	int type , nopeople ;
	float totalcost ;
	
	printf("Enter package type(1,2,3) :");
	scanf("%d",&type);
	
	printf("Enter Number of people :");
	scanf("%d", &nopeople);
	
	switch (type){
		case 1 :
			totalcost = 2000.0*nopeople ;
			printf("Total cost for Horse Ride Package = %.2f",totalcost);
			break ;
		case 2 :
			totalcost = 5000.0*nopeople ;
			printf("Total cost for Scuba Diving = %.2f",totalcost);
			break ;
		case 3 :
			totalcost = 7000.0*nopeople ;
			printf("Total cost for Water Rafting = %.2f",totalcost);
			break ;
		default :
			printf("Invalid package type");
			break ;
	}
	return 0 ;
}
