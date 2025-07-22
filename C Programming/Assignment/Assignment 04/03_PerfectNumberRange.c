#include<stdio.h>

void main() {
	int no;
	printf("Enter Number ");
	scanf("%d",&no);
	 
	for(int j = 1; j<=no; j++) {
		int i= 1, sum = 0;
		
		while(i<j) {
			if (j%i==0) {
				sum = sum + i;
			}
			i++;
		}
		if(j==sum) {
			printf("%d ",j);
		} 
	}
}