//Temperature Conversion
//Fahrenheit to Kelvin
//K = (F-32) * 5/9 + 273.15

#include<stdio.h>

int main(){
  float f;
  printf("Enter Fahrenheit:");
  scanf("%f",&f);
  printf("Kelvin = %.2f",(f-32)*5/9+273.15);
  return 0;
}
