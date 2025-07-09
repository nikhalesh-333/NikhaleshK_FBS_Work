#include<stdio.h>

void main()
{
	int year;
	printf("Enter Number");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("Year is Leap");
	}
	else
	{
		printf("Year is Not Leap");
	}
	
	
}