#include<stdio.h>
int main(){
	int m1,m2,m3,m4,m5,total;
	float avg;
	printf("Enter mark-1:");
	scanf("%d",&m1);
	printf("Enter mark-2:");
	scanf("%d",&m2);
	printf("Enter mark-3:");
	scanf("%d",&m3);
	printf("Enter mark-4:");
	scanf("%d",&m4);
	printf("Enter mark-5:");
	scanf("%d",&m5);
	total = m1+m2+m3+m4+m5;
	avg = total/5;
	printf("\nTotal Marks: %d",total);
	printf("\nAverage Marks: %.2f",avg);
	return 0;
}
