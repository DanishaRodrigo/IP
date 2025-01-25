#include<stdio.h>

int main()
{
	char type;
	float amount;
	int i ;
	
	FILE*cfPtr ;
	
	cfPtr = fopen("Transaction.txt","w");
	
	if(cfPtr == NULL)
	{
		printf("fail to create a file");
		return -1 ;
	}
	
	for(i=0 ; i<4 ; i++)
	{
		printf("Enter transaction type:");
		scanf("%c",&type);
		
		printf("\nEnter the transaction amount :");
		scanf("%f",&amount);
		
		printf("\n");
		
		fprintf(cfPtr,"%c\t\t\t%f",type , amount);
	}
	fclose(cfPtr);
	
	return 0 ;
}
