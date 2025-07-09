#include<stdio.h>

void main()
{
	int no, lastDigit, sum, fdigit;
	printf("Enter Number");
	scanf("%d",&no);
	
	
		lastDigit = no % 10;
		
		while(no > 0)
		{
			fdigit = no % 10;
			no = no / 10;	
		}
		printf("%d\n", fdigit);
		printf("%d\n", lastDigit);
		
		sum = fdigit + lastDigit;
		printf("%d",sum);
		
		
}