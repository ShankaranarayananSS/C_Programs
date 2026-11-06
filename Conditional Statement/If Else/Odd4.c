//Odd Or Even - Version 4

#include<stdio.h>
int main(){
  int n;
  printf("Enter number:");
  scanf("%d",&n);
  
  if(n%2!=0){
    printf("Odd");
  }else{
    printf("Even");
  }
  return 0;
}
