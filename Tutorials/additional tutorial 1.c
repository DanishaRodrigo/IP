#include<stdio.h>

int main()
{
	int pno, count = 1 ;
	float reg_fee , tot_fee = 0.0 ;
	
	printf("Enter program no :");
	scanf("%d",&pno);
	
	while(pno != -99)
	{
		if(pno == 1)
		{
			reg_fee = 1500.00 ;
		}
		else if(pno == 2)
		{
			reg_fee = 1000.00 ;
		}
		else if(pno == 3)
		{
			reg_fee = 2000.00 ;
		}
		
		tot_fee = tot_fee + reg_fee ;
		
		if(count > 100)
		{
			break ;
		}
		
		printf("Enter program no :");
		scanf("%d",&pno);
		
		count++ ;
	}
	
	printf("Total registration fee is : %2f \n",tot_fee);
	return 0 ;
}
