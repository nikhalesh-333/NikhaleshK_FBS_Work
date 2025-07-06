#include<stdio.h>

void main() {
	int no, sum=0;
	printf("Enter Number ");
	scanf("%d",&no);
	int i= 1, temp = no;
	while(i<no) {
		if (no%i==0) {

			sum = sum + i;


		}
		i++;
	}
	printf("%d %d \n",i, sum);
	if(temp == sum) {
		printf("perfect");
	} else {
		printf("Not perfect");
	}
}