#include<stdio.h>
#include<assert.h>

float calPayment(char packagetype);
float calDiscount(int age , float payment);
void testDiscount();


int main()
{
	testDiscount();
	
	char type ;
	int age ;
	float payment , discount ,netAmount;
	
	printf("Enter the package type :");
	scanf("%c",&type);
	
	printf("Enter patient age :");
	scanf("%d",&age);
	
	payment = calPayment(type);
	discount= calDiscount(age,payment);
	netAmount = payment - discount ;
	
	printf("Net amount :%.2f",netAmount);
	
	
}

float calPayment(char packagetype)
{

	
	if(packagetype == 'S')
	{
		return 15000 ;
	}else if(packagetype == 'C')
	{
		return 50000 ;
	}else if(packagetype == 'H')
	{
		return 30000 ;
	}else
	printf("invalid package type ");
	
}

float calDiscount(int age , float payment)
{
	if(age >= 60)
	return (payment*10.0)/100 ;
	else
	return 0 ;
}

void testDiscount()
{
	assert(calDiscount(60,15000)==1500);
}

