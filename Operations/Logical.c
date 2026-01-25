#include<stdio.h>
int main(){
  
  int t=1, f=0;
  printf("Truth Tables:");
  
  printf("\n\nAND OPERATOR:");
  printf("\n%d && %d = %d",t, t, t&&t);
  printf("\n%d && %d = %d",f, t, f&&t);
  printf("\n%d && %d = %d",t, f, t&&f);
  printf("\n%d && %d = %d",f, f, f&&f);
  
  printf("\n\nOROPERATOR:");
  printf("\n%d || %d = %d",t, t, t||t);
  printf("\n%d || %d = %d",f, t, f||t);
  printf("\n%d || %d = %d",t, f, t||f);
  printf("\n%d || %d = %d",f, f, f||f);
  
  printf("\n\nNOTOPERATOR:");
  printf("\n!%d = %d",t, !t);
  printf("\n!%d = %d",f, !f);
	return 0;
}
