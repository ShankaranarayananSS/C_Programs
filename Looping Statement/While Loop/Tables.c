//While Loop
//Multiplication Tables

#include<stdio.h>
int main(){
	int num,i=1;
	printf("Enter number:");
	scanf("%d",&num);
	printf("%d Tables:",num);
	while(i<=10){
		printf("\n%d * %d = %d",num,i,num*i);
		i++;
	}
	return 0;
}
