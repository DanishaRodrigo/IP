#include<stdio.h>

int main()
{
	int marks[10] ,i ,j,no, sum=0 ;
	float avg ;
	
	for(i=0; i<10 ;)
	{
		printf("enter marks :");
		scanf("%d",&no);
		
		if(no>=0 && no<=20)
		{
			marks[i] =no ;
			i++ ;
		
		}
		else
		{
			printf("invalid mark\n");
		}
		
	}
	
	for(j=0 ; j<10 ;j++)
	{
		printf("%d index value is %d\n",j,marks[j]);
	}
	
	for(j=0 ; j<10 ; j++)
	{
		sum=sum+ marks[j];
		avg = sum/ 10.0 ;
	}
	
	printf("sum is %d\n",sum);
	printf("average is %.2f\n",avg);
	
	return 0 ;
}
