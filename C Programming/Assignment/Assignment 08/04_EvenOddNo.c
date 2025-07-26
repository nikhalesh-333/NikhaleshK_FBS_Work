#include<stdio.h>

void main() {
	int arr[10];
	printf("Enter Number ");
	for(int i=0; i<10; i++) {
		scanf("%d",&arr[i]);
	}

	printf("Even Number - ");
	for(int i=0; i<10; i++) {
		if(arr[i]%2==0) {
			printf("%d ",arr[i]);
		}
	}
	printf("\nOdd Number - ");
	for(int j=0; j<10; j++) {
		if(arr[j]%2!=0) {
			printf("%d ",arr[j]);
		}
	}
}