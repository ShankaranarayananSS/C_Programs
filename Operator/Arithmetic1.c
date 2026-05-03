#include<stdio.h>
int main(){
  float n1,n2;
  printf("Enter number-1:");
  scanf("%f",&n1);
  printf("Enter number-2:");
  scanf("%f",&n2);
  
  printf("\n%.2f + %.2f = %.2f",n1,n2,(n1+n2));
  printf("\n%.2f - %.2f = %.2f",n1,n2,(n1-n2));
  printf("\n%.2f * %.2f = %.2f",n1,n2,(n1*n2));
  printf("\n%.2f / %.2f = %.2f",n1,n2,(n1/n2));
  return 0;
}
