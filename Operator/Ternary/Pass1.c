#include<stdio.h>
int main(){
  float percent;
  printf("Enter your percentage:");
  scanf("%f",&percent);
  
  (percent>=40)?printf("Pass"):printf("Fail");
  return 0;
}
