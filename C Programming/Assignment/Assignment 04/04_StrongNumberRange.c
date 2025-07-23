#include<stdio.h>

void main() {
	int no;
	printf("Enter Number ");
	scanf("%d",&no);

	for(int j = 1; j<=no; j++) {
		int tempNo=j, sum=0, rem;
		while(tempNo > 0) {
			rem = tempNo % 10;
			int fact = 1;
			for(int i = 1; i <= rem; i++) {
				fact = fact * i;
			}
			sum = sum + fact;
			tempNo = tempNo/10;
		}
		if(sum==j) {
			printf("%d ",j);
		}
	}
}