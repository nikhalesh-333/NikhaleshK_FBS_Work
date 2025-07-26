#include<stdio.h>
void isLeapYear(int*);

void main() {
	int year;
	printf("Enter Year");
	scanf("%d",&year);

	isLeapYear(&year);
}

void isLeapYear(int* y) {

	if(*y%4==0 && *y%100!=0 || *y%400==0) {
		printf("Leap Year");
	} else {
		printf("Not Leap Year");
	}
}
