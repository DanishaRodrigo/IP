#include<stdio.h>

int main()
{
	
	FILE*cfPtr;
	
	char itemId[4] , name[6];
	int qty  , i ;
	float price , totalprice , total ;
	
	cfPtr = fopen("purchase.txt","w");
	
	if(cfPtr == NULL)
	{
		printf("fail to create file :");
		return -1 ;
	}
	
	for(i=1 ; i<5 ; i++)
	{
		printf("Item id :");
		scanf("%s",&itemId);
		
		printf("Name:");
		scanf("%s",&name);

		printf("Quantity :");
		scanf("%d",&qty);
		
		printf("Price for 1Kg:");
		scanf("%f",&price);	
		
		printf("\n");
		
		fprintf(cfPtr,"%s %s\t\t%d\t%f\n",itemId ,name ,qty,price);	
		
	}
	
	fclose(cfPtr);
	
	cfPtr =fopen("purchase.txt","r");
	
	printf("item ID\t\t\tName\t\tQuantity\tPrice\t\t\t\tTotal\n");
	fscanf(cfPtr,"%s %s %d %f",&itemId,&name,&qty,&price);
	
	while(!feof(cfPtr))
	{
		
		total = price *qty ;
		printf("%s\t\t\t%s\t\t%d\t\t%f\t\t\t%f",itemId ,name,qty,price, total);
		fscanf(cfPtr,"%s %s %d %f",&itemId,&name,&qty,&price);
			
		totalprice = totalprice + total ;
		printf("\n");
	}
	
	printf("Total amount\t\t\t\t\t\t\t\t\t\t%f",totalprice);
	
	fclose(cfPtr);
	
	return 0 ;
	
}
