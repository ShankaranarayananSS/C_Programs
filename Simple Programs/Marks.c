#include<stdio.h>

int main(){
	float m1,m2,m3,m4,m5,total,avg;
	printf("Enter mark-1:");
	scanf("%f",&m1);
	printf("Enter mark-2:");
	scanf("%f",&m2);
	printf("Enter mark-3:");
	scanf("%f",&m3);
	printf("Enter mark-4:");
	scanf("%f",&m4);
	printf("Enter mark-5:");
	scanf("%f",&m5);
	total = m1+m2+m3+m4+m5;
	avg = total/5;
	printf("\nTotal Marks: %.2f",total);
	printf("\nAverage Marks: %.2f",avg);
	return 0;
}
