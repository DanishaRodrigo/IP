#include<stdio.h>

int main()
{
	float x ,y , z , p , q ;
	
	x = floor(7.5);
	y = ceil(0.0);
	z = ceil(-6.4);
	p = log10(100.0);
	q = ceil(floor(-5.5));
	
	printf("%f\n%f\n%f\n%f\n%f\n" ,x , y,z,p,q);
}
