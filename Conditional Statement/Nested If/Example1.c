#include<stdio.h>
int main(){
  int n;
  printf("Enter number:");
  scanf("%d",&n);
  
  if(n<0){
    if(n%2==0){
      printf("Negative Even");
    }else{
      printf("Negative Odd");
    }
  }else if(n>0){
    if(n%2==0){
      printf("Positive Even");
    }else{
      printf("Positive Odd");
    }
  }else{
    printf("Neutral");
  }
  return 0;
}
