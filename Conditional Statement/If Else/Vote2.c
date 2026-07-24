//Vote Eligibility - Version 2

#include<stdio.h>
int main(){
  int age;
  printf("Enter age:");
  scanf("%d",&age);
  
  if(age<18){
    printf("Not eligible");
  }else{
    printf("Eligible");
  }
  return 0;
}
