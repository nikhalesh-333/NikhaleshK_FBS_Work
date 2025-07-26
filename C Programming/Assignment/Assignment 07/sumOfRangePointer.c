#include<stdio.h>
int sumOfRange(int*, int*);

void main() {
	int start, end;
	printf("Enter Start & End ");
	scanf("%d %d",&start, &end);
	
	int s1 = sumOfRange(&start, &end);
	printf("Sum of First Function is %d\n",s1);
	
	int s2 = sumOfRange(&start, &end);
	printf("Sum of Second Function is %d",s2);
	
}
int sumOfRange(int* start, int* end) {
	int sum = 0;
	for(int i=*start; i<=*end; i++) {
		sum = sum + i;
	}
	
	int diff = *end - *start;
	*start = *end;
	*end = *end + diff;
	
	return sum;
}