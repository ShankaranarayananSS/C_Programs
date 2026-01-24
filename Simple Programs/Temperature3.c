//Temperature Conversion
//Degree Celsius to Kelvin
//K = C + 273.15

#include<stdio.h>
int main(){
  float c;
  printf("Enter Celsius:");
  scanf("%f",&c);
  printf("Kelvin = %.2f",c+273.15);
  return 0;
}
