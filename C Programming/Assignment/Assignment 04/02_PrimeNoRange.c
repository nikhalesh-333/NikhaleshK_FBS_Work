#include<stdio.h>

void main() {
	int end;
	printf("Enter Number ");
	scanf("%d",&end);

	for(int j = 2; j<=end; j++) {
		int flag=0;
		
		for(int i=2; i<j; i++) {
			if(j%i==0) {
				flag = 1;
				break;
			}
		}
		if(flag==0)
	{
		printf("%d ",j);
	}
	}
	
}