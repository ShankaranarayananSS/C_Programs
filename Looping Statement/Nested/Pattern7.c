/*
EXPECTED PATTERN
2
4  6
8  10  12
*/

#include<stdio.h>
int main(){
  int i,j,k=2;
  for(i=1;i<=3;i++){
    for(j=1;j<=i;j++){
      printf("%d\t",k);
      k+=2;
    }
    printf("\n");
  }
  return 0;
}
