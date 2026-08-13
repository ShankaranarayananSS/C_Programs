/*
EXPECTED PATTERN
1
3  5
7  9  11
*/

#include<stdio.h>
int main(){
  int i,j,k=1;
  for(i=1;i<=3;i++){
    for(j=1;j<=i;j++){
      printf("%d\t",k);
      k+=2;
    }
    printf("\n");
  }
  return 0;
}
