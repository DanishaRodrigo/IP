#include<stdio.h>
#include<string.h>

int main()
{
	char a[100] ;
	int i , size ;
	
	printf("Enter a word :");
	scanf("%s",&a);
	
	size = strlen(a);
	
	for(i=0 ; i<size/2 ; i++)
	{
		if(a[i] != a[size-1-i])
		{
			printf("This is not a palindrome \n");
		    return -1 ;
		}
	
	}
	
	printf("This is a palindrome ");
	return 0 ;
}
