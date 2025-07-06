#include<stdio.h>

void main()
{
	int multi = 1, no;
	printf("Enter Number");
	scanf("%d",&no);
	int i = 1;
	while(i<=no) {
		
		multi = i * multi;
		i++;	
	}
	printf("%d",multi);
}