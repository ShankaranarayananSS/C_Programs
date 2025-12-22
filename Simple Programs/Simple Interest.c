//Simple Interest	: (Principal Amount * No. of Years * Rate of Interest) / 100

#include<stdio.h>
int main(){
	float p,n,r;
	printf("Enter Principal amount:");
	scanf("%f",&p);
	printf("Enter No. of Years:");
	scanf("%f",&n);
	printf("Enter Rate of Interest:");
	scanf("%f",&r);
	printf("Simple Interest: %.2f",p*n*r/100);
	return 0;
}
