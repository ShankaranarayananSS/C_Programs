//	Perimeter of Rectangle	: 2 * (Length + Breadth)
//	Area of Rectangle		: Length * Breadth
	
#include<stdio.h>
int main(){
	float l,b;
	printf("Enter Length of Rectangle:");
	scanf("%f",&l);
	printf("Enter Breadth of Rectangle:");
	scanf("%f",&b);
	printf("\nPerimeter of Rectangle: %.2f",2*(l+b));
	printf("\nArea of Rectangle: %.2f",l*b);
	return 0;
}
