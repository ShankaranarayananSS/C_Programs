//	Perimeter of Square 	: 4 * Side
//	Area of Square			: Side * Side

#include<stdio.h>
int main(){
	float s;
	printf("Enter Side of Square:");
	scanf("%f",&s);
	printf("\nPerimeter of Square: %.2f",4*s);
	printf("\nArea of Square: %.2f",s*s);
	return 0;
}
