#include<stdio.h>

int main()
{
	char type ;
	float amount , bal , newbal ;
	
	printf("Enter the first letter of transaction type :");
	scanf("%c",&type);
	
	printf("Enter amount :");
	scanf("%f",&amount);
	
	printf("Enter the bank balance :");
	scanf("%f",&bal);
	
	if(type == 'w' || type =='W'){
		
		printf("You have selected to withdraw money\n");
		newbal = bal - amount ;
		printf("new bank balance : %f",newbal);
		
		
	}else if(type == 'd' || type == 'D'){
		
		printf("You have selected to deposit money\n");
		newbal = bal + amount ;
		printf("new bank balance : %f",newbal);
	}else 
	
	printf("you have selected an invlid transaction type\n");
	
	return 0 ;
}
