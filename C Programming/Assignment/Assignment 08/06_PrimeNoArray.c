#include<stdio.h>

void main() {
	int arr[10];
	printf("Enter Number");
	for(int i=0; i<10; i++) {
		scanf("%d",&arr[i]);
	}

	for(int i=0; i<10; i++) {
		int flag =1;
		for(int j=2; j<arr[i]/2; j++) {
			if(arr[i]%j==0) {
				flag=0;
				break;
			}
		}
		if(flag==1) {
			printf("%d ",arr[i]);
		}
	}
}