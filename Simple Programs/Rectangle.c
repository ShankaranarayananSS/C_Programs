//Area of Square       = L * B
//Perimeter of Square  = 2 * (L + B)

#include<stdio.h>
int main(){
  int l,b;
  printf("Enter length of rectangle:");
  scanf("%d",&l);
  printf("Enter breadth of rectangle:");
  scanf("%d",&b);
  
  printf("\nArea of Rectangle = %d",(l*b));
  printf("\nPerimeter of Rectangle = %d",(2*(l+b)));
  return 0;
}
