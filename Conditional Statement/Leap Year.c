#include<stdio.h>
int main(){
	int year;
	printf("Enter any year:");
	scanf("%d",&year);
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		printf("%d is Leap year!",year);
	}
	else{
		printf("%d is not a Leap year",year);
	}
	return 0;
}
