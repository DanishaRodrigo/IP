#include<stdio.h>

int main()
{

	int num1, num2, answer;
	char op;
	
	printf("enter the operator(+,-,*,/) :");
	scanf("%c", &op);
	
	printf("enter num1 :");
	scanf("%d", &num1);
	
	printf("enter num2 :");
	scanf("%d", &num2);
	
		switch (op)
		{
		case '+' :
			answer = num1 + num2;
			printf("\nanswer :%d",answer);
			break ;
		case '-' :
			answer = num1 - num2;
			printf("answer :%d",answer);
			break ;
		case '*' :
		    answer = num1 * num2;
		    printf("answer :%d",answer);
			break ;
		case '/' :
			answer = num1 / num2;
			printf("answer :%d",answer);
			break ;
		default :
			printf("\n invalid operator");
			
		}
		     return 0 ;
		
	
}
