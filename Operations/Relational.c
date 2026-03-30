#include<stdio.h>
int main(){
	float n1,n2;
	printf("Enter two numbers:");
	scanf("%f%f",&n1,&n2);
	
	printf("\n%.2f < %.2f : %d",n1,n2,n1<n2);
	printf("\n%.2f > %.2f : %d",n1,n2,n1>n2);
	printf("\n%.2f <= %.2f : %d",n1,n2,n1<=n2);
	printf("\n%.2f >= %.2f : %d",n1,n2,n1>=n2);
	printf("\n%.2f == %.2f : %d",n1,n2,n1==n2);
	printf("\n%.2f != %.2f : %d",n1,n2,n1!=n2);
	return 0;
}
