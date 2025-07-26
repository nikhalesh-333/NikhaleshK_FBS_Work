#include<stdio.h>

void main() {
	int arr1[5];
	printf("Enter Number in Array1 ");
	for(int i=0; i<5; i++) {
		scanf("%d",&arr1[i]);
	}

	int arr2[4];
	printf("Enter Number in Array2 ");
	for(int i=0; i<4; i++) {
		scanf("%d",&arr2[i]);
	} 
	
	int arr3[9];
	
	for(int i=0; i<5; i++) {
		arr3[i] = arr1[i];
	}
	
	for(int i=0; i<4; i++) {
		arr3[i+5] = arr2[i];
	}
	
	for(int i=0; i<9; i++) {
		printf("%d ",arr3[i]);
	}
}
