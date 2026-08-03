//Pass Or Fail - Version 1

#include<stdio.h>
int main(){
  int mark;
  printf("Enter mark:");
  scanf("%d",&mark);
  
  if(mark>=40){
    printf("Pass");
  }else{
    printf("Fail");
  }
  return 0;
}
