#include<stdio.h>
int main(){
  float p,n,r;
  printf("Enter Principle amount:");
  scanf("%f",&p);
  printf("Enter No. of Years:");
  scanf("%f",&n);
  printf("Enter Rate of Percentage:");
  scanf("%f",&r);
  
  printf("Simple Interest = %.2f",p*n*r/100);
  return 0;
}
