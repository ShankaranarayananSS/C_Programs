//Sum of N Odd Numbers

#include<stdio.h>
int main(){
  int i=1,n,add=0;
  printf("Enter number:");
  scanf("%d",&n);
  
  while(i<=n){
    add = add + i;
    i = i + 2;
  }
  printf("Sum of N Odd numbers = %d",add);
  return 0;
}
