#include<stdio.h>
int main(){
  int i=10;
  printf("Descending Order:");
  
  do{
    printf("\n%d",i--);
  }
  while(i>=1);
  return 0;
}
