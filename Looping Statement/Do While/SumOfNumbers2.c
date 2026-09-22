//Sum of N Odd Numbers

#include<stdio.h>
int main(){
  int i=1,n,add=0;
  printf("Enter number:");
  scanf("%d",&n);
  
  do{
    add = add + i;
    i = i + 2;
  }
  while(i<=n);
  printf("Sum of N Odd numbers = %d",add);
  return 0;
}
