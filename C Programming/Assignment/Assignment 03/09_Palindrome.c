#include<stdio.h>

void main()
{
	int no, rem;
	printf("Enter Number");
	scanf("%d",&no);
	
	int rev = 0, tempNo = no;
	while(no>0)
	{
		rem = no % 10;
		
		rev = rev * 10 + rem;
		
		no = no/10;
		
	}
	
	if (rev == tempNo)
	{
		printf("Number is Palindrome");
	}
	else
	{
		printf("Number is Not Palindrome");
	}
	
}