#include<stdio.h>

int main()
{
	int A[]={19,3,15,7,11,9,13,5,17,1} ;
	int i , j ;
	
	printf("element   value\t   Histogrram\n\n");
	
	for(i=0 ; i<10 ; i++)
	{
		printf("%d\t %d\t",i,A[i]);
		
		for(j=0 ; j<A[i]; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0 ;
}
