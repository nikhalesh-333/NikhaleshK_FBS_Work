#include<stdio.h>

void main()
{
	int no;
	printf("Enter Number");
	scanf("%d",&no);
	
	no = no % 100;
	
	printf("Last Two Digit is %d",no);
}