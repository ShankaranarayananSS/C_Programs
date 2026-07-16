#include<stdio.h>
int main(){
  int f=0,t=1;
  printf("Logical OR");
  printf("\n%d && %d = %d",f,f,(f||f));
  printf("\n%d && %d = %d",f,t,(f||t));
  printf("\n%d && %d = %d",t,f,(t||f));
  printf("\n%d && %d = %d",t,t,(t||t));
  return 0;
}
