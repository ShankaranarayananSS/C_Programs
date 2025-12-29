#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	if(num1>num2){
		printf("%d is bigger than %d",num1,num2);
	}
	else if(num1<num2){
		printf("%d is bigger than %d",num2,num1);
	}
	else{
		printf("Both number are Equal!");
	}
	return 0;
}
