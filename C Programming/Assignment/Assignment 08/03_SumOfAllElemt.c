#include<stdio.h>

void main() {
	int arr[6];
	printf("Enter Element");

	for(int i=0; i<6; i++) {
		scanf("%d",&arr[i]);
	}

	int sum = 0;
	for(int i=0; i<6; i++) {
		sum = sum + arr[i];
	}
	printf("Sum of All Element is %d",sum);
}
