//Vote Eligibility - Version

#include<stdio.h>
int main(){
  int age;
  printf("Enter age:");
  scanf("%d",&age);
  
  (age>=18)?printf("Eligible"):printf("Not eligible");
  return 0;
}
