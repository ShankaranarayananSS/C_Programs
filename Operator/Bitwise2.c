#include<stdio.h>
int main(){
  int num,shift;
  printf("Enter integer value:");
  scanf("%d",&num);
  printf("Enter no. of shift:");
  scanf("%d",&shift);
  
  printf("Bit L Shift = %d\n",(num<<shift));
  printf("Bit R Shift = %d\n",(num>>shift));
  return 0;
}
