#include<stdio.h>
int main(){
	int i;
	printf("Enter any integer:");
	scanf("%d",&i);
	
	//Increment
	printf("\n%d",i);
	printf("\n%d",i++);
	printf("\n%d",++i);
	
	//Decrement
	printf("\n%d",i);
	printf("\n%d",i--);
	printf("\n%d",--i);
	return 0;
}
