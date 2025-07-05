#include<stdio.h>

void main()
{
	int no;
	printf("Enter Number");
	
	scanf("%d",&no);
	
	if(no<=0){
		printf("Number is Invalid");
	}else if( no % 2 == 0){
		printf("Number is Even");	
	}else{
		printf("Number is Odd");
	}
	
}
