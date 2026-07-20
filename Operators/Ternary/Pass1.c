//Pass Or Fail - Version 1

#include<stdio.h>
int main(){
  int mark;
  printf("Enter mark:");
  scanf("%d",&mark);
  
  (mark>=40)?printf("Pass"):printf("Fail");
  return 0;
}
