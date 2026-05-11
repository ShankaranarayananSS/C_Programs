#include<stdio.h>
int main(){
  int num,shift;
  printf("Enter integer value:");
  scanf("%d",&num);
  printf("Enter no. of shift:");
  scanf("%d",&shift);
  
  printf("\nBit L Shift = %d",(num<<shift));
  printf("\nBit R Shift = %d",(num>>shift));
  return 0;
}
