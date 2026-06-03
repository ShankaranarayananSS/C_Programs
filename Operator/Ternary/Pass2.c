#include<stdio.h>
int main(){
  float percent;
  printf("Enter your percentage:");
  scanf("%f",&percent);
  
  (percent<40)?printf("Fail"):printf("Pass");
  return 0;
}
