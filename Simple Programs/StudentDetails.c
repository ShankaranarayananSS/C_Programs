#include<stdio.h>
int main(){
  int roll;
  char name[10];
  float percent;
  
  printf("Enter your name:");
  scanf("%s",&name);
  printf("Enter roll number:");
  scanf("%d",&roll);
  printf("Enter your percentage:");
  scanf("%f",&percent);
  
  printf("\nSTUDENT DETAILS");
  printf("\nStudent Name\t:%s",name);
  printf("\nRoll No.\t:%d",roll);
  printf("\nPercentage\t:%.2f",percent);
  return 0;
}
