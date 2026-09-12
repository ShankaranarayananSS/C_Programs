#include<stdio.h>
int main(){
  int age;
  printf("Enter age:");
  scanf("%d",&age);
  
  if(age>=18 && age<=60){
    printf("Eligible to drive");
  }else{
    if(age<18){
      printf("Under age");
    }else{
      printf("Over age");
    }
  }
  return 0;
}
