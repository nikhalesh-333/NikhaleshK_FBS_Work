#include<stdio.h>

void main()
{
	int no,r1,r2,r3,q1,rev,temp;
	printf("Enter Number");
	scanf("%d",&no);
	
	temp = no;
	
	r1 = no % 10;
	q1 = no / 10;
	r2 = q1 % 10;
	r3 = q1 / 10;
	
	rev = r1 * 100 + r2 * 10 + r3;
	printf("%d",rev);
		
	if(temp==rev){
		printf("Number is palindrome");
	}else{
		printf("Number is not palindrome");
	}				
	
}
