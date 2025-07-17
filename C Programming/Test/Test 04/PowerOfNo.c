//WAP to find power of any number

#include<stdio.h>

void main()
{
	int base, power, result = 1;
	printf("Enter Number & Power ");
	scanf("%d %d",&base, &power);
	
	for(int i = 1; i<= power; i++)
	{
		result = result * base;	
	}
	printf("Power is %d", result);
}