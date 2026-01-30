#include<stdio.h>
int main(){
  float p;
  printf("Enter your percentage:");
  scanf("%f",&p);
  if(p>=80 && p<=100){
    printf("First class with distinction!");
  }
  else if(p>=60 && p<80){
    printf("First class");
  }
  else if(p>=40 && p<60){
    printf("Second class");
  }
  else if(p>=0 && p<40){
    printf("Fail!");
  }
  else{
    printf("Invalid Input!");
	}
	return 0;
}
