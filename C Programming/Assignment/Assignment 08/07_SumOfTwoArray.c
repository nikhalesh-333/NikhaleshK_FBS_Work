#include<stdio.h>

void main() {
	int n;
	printf("Enter Size of Array ");
	scanf("%d",&n);

	int arr1[n];
	printf("Enter %d Number in Array1 : ",n);
	for(int i=0; i<n; i++) {
		scanf("%d",&arr1[i]);
	}

	int arr2[n];
	printf("Enter %d Number in Array2 : ",n);
	for(int i=0; i<n; i++) {
		scanf("%d",&arr2[i]);
	}

	int arr3[n];

	for(int i=0; i<n; i++) {
		arr3[i] = arr1[i]+arr2[i];
	}
	for(int j=0; j<n; j++) {
		printf("%d ",arr3[j]);
  	}
}