#include<stdio.h>

void main()
{
	int no;
	printf("Enter Number");
	
	scanf("%d",&no);
	
	if(no>0)
	
		printf("Number is Positive");
	
	else if(no<0)
	
		printf("Number is Negative");
		
	else
		printf("Number is Nutral");	
}
