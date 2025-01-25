#include<stdio.h>

int main()
{
	float width , length , base , height , radius , area ;
	char shape ;
	
	printf("Enter the first character of shape(R,T,C) :");
	scanf("%c",&shape);
	
	if(shape == 'R'){
		printf("Enter width :");
		scanf("%f",&width);
		
		printf("Enter length :");
		scanf("%f",&length);
		
		area= width * length ;
		
		printf("Area of Rectangle= %.2f", area);
		
	}else if(shape == 'T'){
		printf("Enter base :");
		scanf("%f",&base);
		
		printf("Enter height :");
		scanf("%f",&height);
		
		area = base * height / 2 ;
		
		printf("Area of Triangle = %.2f", area);
		
	}else if(shape =='C'){
		printf("Enter radius :");
		scanf("%f",&radius);
		
		area = 22/7 * radius * radius ;
		
		printf("Area of Circle= %.2f",area);
		
	}else{
		printf("Invalied Character");
	}
	return 0 ;
	
	
}
