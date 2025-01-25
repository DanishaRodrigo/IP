#include<stdio.h.>

int main()
{
	float avg , m1 ,m2 , total ;
	
	printf("enter mark1 :");
	scanf("%f",&m1);
	
	printf("enter mark2 :");
	scanf("%f",&m2);
	
	total = m1 + m2 ;
	printf("total : %f\n",total);
	
	avg = total /2 ;
	printf("avg : %f",avg);
	
	return 0 ;
	
	
}
