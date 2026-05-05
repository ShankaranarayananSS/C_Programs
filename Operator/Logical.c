#include<stdio.h>
int main(){
  int t=1,f=0;
  printf("AND OPERATOR\n");
  printf("%d && %d : %d\n",f,f,(f&&f));
  printf("%d && %d : %d\n",f,t,(f&&t));
  printf("%d && %d : %d\n",t,f,(t&&f));
  printf("%d && %d : %d\n",t,t,(t&&t));
  
  printf("\nOR OPERATOR\n");
  printf("%d || %d : %d\n",f,f,(f||f));
  printf("%d || %d : %d\n",f,t,(f||t));
  printf("%d || %d : %d\n",t,f,(t||f));
  printf("%d || %d : %d\n",t,t,(t||t));
  
  printf("\nNOT OPERATOR\n");
  printf("!%d = %d\n",f,(!f));
  printf("!%d = %d\n",t,(!t));
  return 0;
}
