//Area of Circle          = 3.14 * R * R
//Circumference of Circle = 2 * 3.14 * R

#include<stdio.h>
int main(){
  float r;
  printf("Enter radius of circle:");
  scanf("%f",&r);
  
  printf("\nArea of Circle = %.2f",(3.14*r*r));
  printf("\nCircumference of Circle = %.2f",(2*3.14*r));
  return 0;
}
