#include<stdio.h>
int main(){
  int n1,n2,temp;
  
  printf("Enter Number 1:");
  scanf("%d",&n1);
  printf("Enter Number 2:");
  scanf("%d",&n2);
  
  printf("\n\nNumbers Before Swapping:");
  printf("\nNumber 1 = %d\nNumber 2 = %d",n1,n2);
  
  temp = n1;
  n1 = n2;
  n2 = temp;
  
  printf("\n\nNumbers After Swapping:");
  printf("\nNumber 1 = %d\nNumber 2 = %d",n1,n2);
  return 0;
}
