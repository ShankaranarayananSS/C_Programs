#include<stdio.h>
int main(){
  int mark;
  printf("Enter mark:");
  scanf("%d",&mark);
  
  printf("Mark = %d",mark);
  if(mark>=90 && mark<=100){
    printf("\nExcellent!");
  }
  return 0;
}
