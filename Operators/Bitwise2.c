#include<stdio.h>
int main(){
  int value,shift;
  printf("Enter integer value:");
  scanf("%d",&value);
  printf("Enter shift amount:");
  scanf("%d",&shift);
  
  printf("\n%d<<%d = %d",value,shift,(value<<shift));
  printf("\n%d>>%d = %d",value,shift,(value>>shift));
  return 0;
}
