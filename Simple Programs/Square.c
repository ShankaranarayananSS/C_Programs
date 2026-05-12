//Area of Square       =  S * S
//Perimeter of Square  =  4 * S

#include<stdio.h>
int main(){
  int s;
  printf("Enter side of square:");
  scanf("%d",&s);
  
  printf("\nArea of Square = %d",(s*s));
  printf("\nPerimeter of Square = %d",(4*s));
  return 0;
}
