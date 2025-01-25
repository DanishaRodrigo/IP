#include<stdio.h>

int main()
{
	int accNo ,accBal , searchAcc ;
	int tType , tAmount , newBal ;
	char name[6], nic[10] ;
	int i=0 ;
	
	FILE*fp ;
	fp = fopen("account.txt","w");
	if(fp ==NULL)
	{
		printf("Error!");
		return -1 ;
	}
	
	for(i==0 ; i<4 ; i++)
	{
		printf("Account no :");
		scanf("%d",&accNo);
		
		printf("NIC no :");
		scanf("%s",&nic);
		
		printf("Customer name :");
		scanf("%s",&name);
		
		printf("Account balance :");
		scanf("%d",&accBal);
		
		printf("\n");
		
		fprintf(fp,"%d %s %s %d\n",accNo ,nic ,name , accBal);
	}
	
	fclose(fp);
	
	printf("\n");
	
	printf("Enter account no for search :");
	scanf("%d",&searchAcc);
	
	fp = fopen("account.txt","r");
	
	if(fp == NULL)
	{
		printf("Error!");
	}
	
	while(!feof(fp))
	{
		fscanf(fp,"%d %d %c %d\n",&accNo,&nic , &name,&accBal);
		
		if(searchAcc == accNo)
		{
			newBal = accBal ;
			
			fp = fopen("transaction.txt","r");
			
			while(!feof(fp))
			{
				fscanf(fp,"%c %d\n",&tType,&tAmount);
				
				if(tType == 'D')
				{
					newBal = newBal +tAmount ;
				}else if(tType == 'W')
				{
					newBal = newBal - tAmount ;
				}else
				{
					printf("Invalid");
				}
			}
		}
	}
	
	fclose(fp);
}
