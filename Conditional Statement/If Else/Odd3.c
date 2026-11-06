//Odd Or Even - Version 3

#include<stdio.h>
int main(){
  int n;
  printf("Enter number:");
  scanf("%d",&n);
  
  if(n%2!=1){
    printf("Even");
  }else{
    printf("Odd");
  }
  return 0;
}
