//Temperature Conversion
//Kelvin to Degree Celsius
//C = K - 273.15

#include<stdio.h>
int main(){
  float k;
  printf("Enter Kelvin:");
  scanf("%f",&k);
  printf("Celsius = %.2f",k-273.15);
  return 0;
}
