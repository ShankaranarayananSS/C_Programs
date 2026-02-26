#include<stdio.h>
int main(){
	float n1, n2;
	printf("Enter Number-1:");
	scanf("%f",&n1);
	printf("Enter Number-2:");
	scanf("%f",&n2);
	
	printf("%.2f + %.2f = %.2f\n",n1,n2,n1+n2);
	printf("%.2f - %.2f = %.2f\n",n1,n2,n1-n2);
	printf("%.2f * %.2f = %.2f\n",n1,n2,n1*n2);
	printf("%.2f / %.2f = %.2f\n",n1,n2,n1/n2);
	return 0;
}
