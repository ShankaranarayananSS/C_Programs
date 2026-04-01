//For Loop
//Program to print 1 3 5 ... N
//Program to print 2 4 6 ... N

#include<stdio.h>
int main(){
  int n,i;
  printf("Enter any number:");
  scanf("%d",&n);
  
  printf("\nOdd Series:\n");
  for(i=1;i<=n;i+=2){
    printf("%d\n",i);
  }
  
  printf("\nEven Series:\n");
  for(i=2;i<=n;i+=2){
    printf("%d\n",i);
  }
  return 0;
}
