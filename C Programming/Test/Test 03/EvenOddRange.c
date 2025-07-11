#include<stdio.h>

void main() {
	int start, end;
	printf("Enter Start NO & End NO ");
	scanf("%d %d",&start ,&end);

	printf("\nEven - ");
	for(int i = start; i<=end; i++) {

		if(i%2==0)
			printf("%d ", i);

	}
	printf("\n");
	printf("Odd - ");
	for(int j = start; j<=end; j++) {
		
		if(j%2!=0)
			printf("%d ", j);
	}
}