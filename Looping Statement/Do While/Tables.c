#include<stdio.h>
int main(){
  int i=1,n;
  printf("Enter number:");
  scanf("%d",&n);
  
  printf("%d Tables:",n);
  do{
    printf("\n%d * %d = %d",n,i++,i*n);
  }
  while(i<=10);
  return 0;
}
