#include<stdio.h>

void main() {
	int end;
	printf("Enter Number ");
	scanf("%d",&end);

	for(int j = 1; j <=end; j++) {
		int no=j;
		int count = 0, rem, sum = 0;
		while(no>0) {
			count++;
			no = no / 10;
		}
		no = j;
		while(no > 0) {
			rem = no % 10;

			int res = 1;

			for(int i=1; i<=count; i++) {
				res = res * rem;
			}
			sum = sum + res;
			no = no / 10;
		}
		if(sum==j) {
			printf("%d ",j);
		}
	}
}