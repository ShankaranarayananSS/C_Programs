//	Circumference of Circle	: 2 * Pi * Radius
//	Area of Circle		: Pi * Radius * Radius

#include<stdio.h>
int main(){
	float r;
	printf("Enter radius of a Circle:");
	scanf("%f",&r);
	printf("\nCircumference of Circle: %.2f",2*3.14*r);
	printf("\nArea of Circle: %.2f",3.14*r*r);
	return 0;
}
