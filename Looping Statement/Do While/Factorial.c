//Factorial of N Numbers

#include<stdio.h>
int main(){
  int n,i=1,fact=1;
  printf("Enter number:");
  scanf("%d",&n);
  
  do{
    fact = fact * i;
    i++;
  }
  while(i<=n);
  printf("Factorial of %d is %d",n,fact);
  return 0;
}
