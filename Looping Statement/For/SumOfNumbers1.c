//Sum of N Numbers

#include<stdio.h>
int main(){
  int i,n,add=0;
  printf("Enter number:");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++){
    add = add + i;
  }
  printf("Sum of N numbers = %d",add);
  return 0;
}
