#include<stdio.h>
int main(){
  int i,n;
  printf("Enter number:");
  scanf("%d",&n);
  
  printf("%d Tables:",n);
  for(i=1;i<=10;i++){
    printf("\n%d x %d = %d",n,i,i*n);
  }
  return 0;
}
