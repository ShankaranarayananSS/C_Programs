#include<stdio.h>
int main(){
	
	int num1,num2;
	printf("Enter two integers:");
	scanf("%d",&num1);
	scanf("%d",&num2);
	
	printf("\n%d & %d = %d",num1,num2,num1&num2);
	printf("\n%d | %d = %d",num1,num2,num1|num2);
	printf("\n~%d = %d",num1,~num1);
	printf("\n~%d = %d",num2,~num2);
	printf("\n%d>>1 = %d",num1,(num1>>1));
	printf("\n%d<<1 = %d",num1,(num1<<1));
}
