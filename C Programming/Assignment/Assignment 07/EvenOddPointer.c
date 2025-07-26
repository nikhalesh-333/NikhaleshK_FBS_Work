#include<stdio.h>
int isEvenOdd(int*);

void main() {
	int no;
	printf("Enter Number ");
	scanf("%d",&no);
	
	int x=isEvenOdd(&no);
	if(x==1) {
		printf("Even");
	}
	else {
		printf("Odd");
	}
}

int isEvenOdd(int* no) {
	if(*no%2==0) {
		return 1;
	}
	else {
		return 0;
	}
}