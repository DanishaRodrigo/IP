#include<stdio.h>

int add(int x , int y);
int multiply(int x , int y);
int square(int x);

int main()
{
	int ans ;
	
	ans = square(add(multiply(3,4),multiply(5,7)));
		
	printf("Answwr is :%d\n",ans);
	
	return 0 ;
}

int add(int x , int y)
{
	return x+y ;
}

int multiply(int x , int y)
{
	return x*y ;
}

int square(int x)
{
	return x*x ;
}


