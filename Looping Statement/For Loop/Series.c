//For Loop
//Program to print 1 2 ... N
//Program to print N (N-1) ... 1

#include<stdio.h>
int main(){
  int n,i;
  
  printf("Enter any number:");
  scanf("%d",&n);
  
  //1 to N
  printf("Ascending Order:\n");
  for(i=1;i<=n;i++){
    printf("%d\n",i);
  }
  
  //N to 1
  printf("Descending Order:\n");
  for(i=n;i>=1;i--){
    printf("%d\n",i);
  }
  return 0;
}
