#include<stdio.h>

void main() {
	int n;
	printf("Enter Size of Array");
	scanf("%d",&n);

	int arr[n];
	printf("Enter Element");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++) {
		int flag = 0;
		for(int j=0; j<n-1-i; j++) {
			if(arr[j]>arr[j+1]) {
				flag = 1;
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		if(flag==0) {
			break;
		}
	}
	for(int i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
}