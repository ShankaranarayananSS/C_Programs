#include<stdio.h>
int main(){
  float n1,n2;
  printf("Enter numerator:");
  scanf("%f",&n1);
  printf("Enter denominator:");
  scanf("%f",&n2);
  
  if(n2==0){
    printf("Cannot divide by Zero");
  }
  else{
    printf("Division = %.2f",n1/n2);
  }
  return 0;
}
