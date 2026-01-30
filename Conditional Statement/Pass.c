#include<stdio.h>
int main(){
  float percent;
  printf("Enter your percentage:");
  scanf("%f",&percent);
  if(percent>=40){
    printf("Pass!");
  }
  else{
    printf("Fail!");
  }
  return 0;
}
