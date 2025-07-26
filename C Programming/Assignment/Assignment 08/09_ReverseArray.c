#include<stdio.h>

void main() {
	int n;
	printf("Enter Size of Array ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter %d Number in Array1 : ",n);
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);	
	}
	
	for(int i=n-1; i>=0; i--) {
		printf("%d ",arr[i]);
	}
	
}