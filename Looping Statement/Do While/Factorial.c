//While Loop
//Factorial

#include<stdio.h>
int main(){
  int num,i=1,fact=1;
  printf("Enter any number:");
  scanf("%d",&num);
  do{
    fact = fact*i;
    i++;
  }
  while(i<=num);{
    printf("Factorial of %d is %d",num,fact);
	}
  return 0;
}
