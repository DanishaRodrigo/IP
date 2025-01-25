#include<stdio.h>

float circleArea(float radius );

int main()
{
	float r , ans ;
	printf("Enter the radius of circle :");
	scanf("%f",&r);
	
	ans = circleArea(r);
	
	
	printf("area of circle:%.2f\n",ans);
	
	return 0 ;
}
float circleArea(float radius )
{
	float a= (22.0/7)*radius*radius ;
	return a ;
}
