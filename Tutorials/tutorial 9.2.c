#include<stdio.h>

int main()
{
	int a[4][4] = {{5,7,8,10},{9,3,0,6},{8,1,9,2},{4,7,2,1}};
	int b[4][4] = {{2,2,1,3},{8,1,3,1},{1,2,2,4},{3,1,1,2}};
	int i , j , c[4][4] ; 
	
	printf("first metrix :\n");
	
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("seconf metrix :\n");
	
	
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("sum of 2 metrixes :\n");
	
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0 ;	
}
