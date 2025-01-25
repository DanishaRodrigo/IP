#include<stdio.h>

int main()
{
	int mark[3][3];
	int i , j ,no,sco1,sco2,sco3 , sum ;
	float avg ;
	
	for(i=0 ; i<3 ; i++)
	{
		printf("student number :%d\n",i+1);
		for(j=0 ; j<3 ; j++)
		{
			
		   printf("Score %d :",j+1);
		   scanf("%d",&mark[i][j]);
	    }
			
		printf("\n");
	}
	
	printf("Studen No\t\t\t\tExam Score\t\t\t\t\tAverage\n");
	
	for(i=0 ; i<3 ; i++)
	{
		printf("%d",i+1);
		sum = 0 ;
		
		for(j=0 ; j<3 ; j++)
		{
			printf("\t\t%d\t",mark[i][j]);
			sum = sum + mark[i][j];
		}
		avg = sum/ 3.0 ;
		printf("\t\t%.2f",avg);	
		printf("\n");
	}
	return 0 ;
}
