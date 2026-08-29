#include<stdio.h>
int main(){
  int mark;
  printf("Enter your mark:");
  scanf("%d",&mark);
  
  if(mark>=80 && mark<=100){
    printf("Distinction");
  }else if(mark>=60 && mark<=79){
    printf("First Class");
  }else if(mark>=40 && mark<=59){
    printf("Second Class");
  }else if(mark>=0 && mark<=39){
    printf("Fail");
  }else{
    printf("Invalid mark");
  }
  return 0;
}
