#include<stdio.h>
int main()
{
	int num1 , num2 ;
	char ope ;
	
	printf("Enter the operator :");
	scanf("%c",&ope);
	
	printf("Enter the first number :");
	scanf("%d",&num1);
	
	printf("Enter the second number :");
	scanf("%d",&num2);

	
	if(ope == '+') {
		printf("answer :%d",num1 + num2);
		
	}else if ( ope == '-'){
		printf("answer :%d",num1 - num2);
		
	}else if (ope == '*' ){
		printf("answer :%d",num1 * num2);
	}else if(ope == '/'){
		printf("answer :%d",num1 /num2);
		
	}else
	printf("invalid operator");
	
	return 0 ;
	
}
