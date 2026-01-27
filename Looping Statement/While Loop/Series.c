//While Loop
//Program to print 1 2 ... N
//Program to print N (N-1) ... 1

#include<stdio.h>
int main(){
  int n,i;
  
  printf("Enter any number:");
  scanf("%d",&n);
  
  //1 to N
  printf("Ascending Order:\n");
  i=1;
  while(i<=n){
    printf("%d\n",i);
    i++;
  }
  
  //N to 1
  printf("Descending Order:\n");
  i=n;
  while(i>=1){
    printf("%d\n",i);
    i--;
  }
  return 0;
}
