//Temperature Conversion
//Fahrenheit to Degree Celsius
//C = (F-32) * 5/9

#include<stdio.h>
int main(){
  float f,c;
  printf("Enter Fahrenheit:");
  scanf("%f",&f);
  printf("Celsius = %.2f",(f-32)*5/9);
  return 0;
}
