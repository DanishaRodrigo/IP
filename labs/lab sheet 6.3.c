#include<stdio.h>

float circleArea(float radius);
float circlePeri(float radius );
float recArea(float width , float length);

int main()
{
	float radius , height , Area ,cArea ,cPeri ,rArea ;
	
	printf("enter the radius of the cylinder :");
	scanf("%f",&radius);
	
	printf("Enter the height of the cylinder :");
	scanf("%f",&height);
	
	cArea =circleArea(radius);
	cPeri =circlePeri(radius);
	rArea =recArea(height ,cPeri);
	
	Area =(2*cArea)+rArea;
	
	printf("Area of cylinder :%.2f",Area);
	
	return 0 ;
}

float circleArea(float radius)
{
	float cArea ;
	
	cArea =(22.0/7)*radius *radius ;
	return cArea ;
}

float circlePeri(float radius )
{
	float cPeri ;
	
	cPeri =2*(22.0/7)*radius ;
	return cPeri ;
}

float recArea(float width , float length)
{
	float rArea ;
	
	rArea =width*length ;
	return rArea ;
}



