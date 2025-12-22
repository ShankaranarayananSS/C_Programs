//Area of Right Angle Triangle	: 1/2 * Base * Height

#include<stdio.h>
int main(){
	float b,h;
	printf("Enter Base of Triangle:");
	scanf("%f",&b);
	printf("Enter Height of Triangle:");
	scanf("%f",&h);
	printf("Area of Triangle: %.2f",b*h/2);
	return 0;	
}
