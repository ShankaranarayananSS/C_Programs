//Do While Loop
//Multiplication Tables

#include<stdio.h>
int main(){
	int num,i=1;
	printf("Enter number:");
	scanf("%d",&num);
	printf("%d Tables:",num);
	do{
		printf("\n%d * %d = %d",num,i,num*i);
		i++;
	}
	while(i<=10);
	return 0;
}
