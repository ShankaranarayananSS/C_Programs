//Area of Triangle  = 0.5 * B * H

#include<stdio.h>
int main(){
  float b,h;
  printf("Enter base of triangle:");
  scanf("%f",&b);
  printf("Enter height of triangle:");
  scanf("%f",&h);
  
  printf("\nArea of Triangle = %.2f",(0.5*b*h));
  return 0;
}
