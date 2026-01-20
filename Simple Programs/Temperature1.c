//Temperature Conversion
//Degree Celsius to Fahrenheit
//F = (C*9/5) + 32

#include<stdio.h>
int main(){
  float f,c;
  printf("Enter Celsius:");
  scanf("%f",&c);
  printf("Fahrenheit = %.2f",(c*9/5)+32);
  return 0;
}
