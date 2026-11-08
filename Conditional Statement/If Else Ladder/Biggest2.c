#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter number-1:");
  scanf("%d",&a);
  printf("Enter number-2:");
  scanf("%d",&b);
  printf("Enter number-3:");
  scanf("%d",&c);
  
  if(a==b && b==c){
    printf("All three are same");
  }else if(a>=b && a>=c){
    printf("%d is bigger than %d and %d",a,b,c);
  }else if(b>=a && b>=c){
    printf("%d is bigger than %d and %d",b,a,c);
  }else{
    printf("%d is bigger than %d and %d",c,a,b);
  }
  return 0;
}
