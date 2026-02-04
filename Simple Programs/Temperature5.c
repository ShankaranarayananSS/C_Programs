//Temperature Conversion
//Kelvin to Fahrenheit
//F = (K-273.15) * 9/5 + 32

#include<stdio.h>

int main(){
  float k;
  printf("Enter Kelvin:");
  scanf("%f",&k);
  printf("Fahrenheit = %.2f",(k-273.15)*9/5+32);
  return 0;
}
