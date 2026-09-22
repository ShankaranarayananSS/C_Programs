//Sum of N Numbers

#include<stdio.h>
int main(){
  int i=1,n,add=0;
  printf("Enter number:");
  scanf("%d",&n);
  
  do{
    add = add + i;
    i++;
  }
  while(i<=n);
  printf("Sum of N numbers = %d",add);
  return 0;
}
