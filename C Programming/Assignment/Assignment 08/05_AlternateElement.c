#include<stdio.h>

void main() {
	char arr[6];
	printf("Enter Charcter ");
	for(int i=0; i<6; i++) {
		scanf(" %c",&arr[i]);
	}
	
	for(int i=0; i<6; i=i+2) {
		printf("%c ",arr[i]);
	}
}