#include<stdio.h>
void swap(int*,int*);

void main() {
	int a,b ;
	printf("Enter Number ");
	scanf("%d %d",&a, &b);

	swap(&a,&b);
	printf("A=%d, B=%d",a,b);
}

void swap(int* x, int* y) {
	int temp= *x;
	*x = *y;
	*y = temp;

}