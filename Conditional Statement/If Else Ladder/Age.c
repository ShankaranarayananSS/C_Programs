#include<stdio.h>
int main(){
  int age;
  printf("Enter age:");
  scanf("%d",&age);
  
  if(age>=80){
    printf("Old Age");
  }else if(age>=60){
    printf("Senior Citizen");
  }else if(age>=40){
    printf("Middle Aged");
  }else if(age>=20){
    printf("Young Age");
  }else if(age>=13){
    printf("Teenager");
  }else if(age>=1){
    printf("Child");
  }else{
    printf("Invalid Age!");
  }
  return 0;
}
