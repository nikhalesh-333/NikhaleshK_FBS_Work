#include<stdio.h>

void main()
{
	int start, end, sum;
	printf("Enter Starting & Ending Point ");
	scanf("%d %d",&start, &end);
	
	for (int i=start; i<=end; i++)
	{
		sum = i + sum;
		
	}
	printf("%d",sum);
}