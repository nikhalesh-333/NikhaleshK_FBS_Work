#include<stdio.h>

void main()
{
	int no;
	printf("Enter Number ");
	scanf("%d",&no);
	
	if(no%3==0 && no%5!=0)
	{
		printf("Divisible by 3 but not by 5");
	}else if(no%5==0 && no%3!=0)
	{
		printf("Divisible by 5 but not by 3");
	}else if(no%5==0 || no%3==0)
	{
		printf("Divisible by Both");
	}else {
		printf("Divisible by None");
	}
}
