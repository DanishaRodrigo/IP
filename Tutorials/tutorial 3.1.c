#include<stdio.h>

int main()
{
	float radius , diameter , circumference , area ;
	
	printf("Enter the radius of the circle :");
	scanf("%f",&radius);
	
	diameter = 2*radius ;
	printf("diameter : %f \n",diameter);
	
	circumference = 2*22/7*radius ;
	printf("circumference : %f \n",circumference);
	
	area = 22/7*radius*radius ;
	printf("area : %f \n",area);
	
	return 0 ;
	
	
	
}
