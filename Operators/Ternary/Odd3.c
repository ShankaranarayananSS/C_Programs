//Odd Or Even - Version 3

#include<stdio.h>
int main(){
  int n;
  printf("Enter number:");
  scanf("%d",&n);
  
  (n%2!=1)?printf("Even"):printf("Odd");
  return 0;
}
