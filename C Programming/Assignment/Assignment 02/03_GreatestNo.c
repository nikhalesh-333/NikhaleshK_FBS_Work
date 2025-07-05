#include<stdio.h>

void main()
{
	int no1, no2, no3;
	printf("Enter Three Numbers ");
	scanf("%d %d %d",&no1, &no2, &no3);
	
	if(no1 > no2)
	{
		if(no1 > no3)
		{
			printf("Number %d is Greatest",no1);
		}else 
		{
			printf("Number %d is Greatest",no3);
		}
	}else
	{
		if(no3 > no2)
		{
			printf("Number %d is Greatest",no3);	
		}else
		{
			printf("Number %d is Greatest",no2);
		}
	}
}
