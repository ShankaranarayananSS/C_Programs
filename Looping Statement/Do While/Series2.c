//Do While Loop
//Program to print 1 3 5 ... N
//Program to print 2 4 6 ... N

#include<stdio.h>
int main(){
  int n,i;
  printf("Enter any number:");
  scanf("%d",&n);
  
  //1 3 5 ... N
  printf("\nOdd Series:\n");
  i=1;
  do{
    printf("%d\n",i);
    i+=2;
  }
  while(i<=n);
  
  //2 4 6 ... N
  printf("\nEven Series:\n");
  i=2;
  do{
    printf("%d\n",i);
    i+=2;
  }
  while(i<=n);
  return 0;
}
