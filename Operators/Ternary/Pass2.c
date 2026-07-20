//Pass Or Fail - Version 2

#include<stdio.h>
int main(){
  int mark;
  printf("Enter mark:");
  scanf("%d",&mark);
  
  (mark<40)?printf("Fail"):printf("Pass");
  return 0;
}
