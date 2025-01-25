#include<stdio.h>

int main()
{
	int num;


    printf("Enter the number :");
	scanf("%d",&num);
	
	if(num<0){
		num = -num ;
		
	}
	
	printf("The number is : %d \n" , num ) ;
	
	return 0 ;
}
