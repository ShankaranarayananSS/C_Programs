//Odd Or Even - Version 2

#include<stdio.h>
int main(){
  int n;
  printf("Enter number:");
  scanf("%d",&n);
  
  (n%2==1)?printf("Odd"):printf("Even");
  return 0;
}
