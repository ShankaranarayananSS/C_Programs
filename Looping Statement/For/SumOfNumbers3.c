//Sum of N Even Numbers

#include<stdio.h>
int main(){
  int i,n,add=0;
  printf("Enter number:");
  scanf("%d",&n);
  
  for(i=2;i<=n;i+=2){
    add = add + i;
  }
  printf("Sum of N Even numbers = %d",add);
  return 0;
}
