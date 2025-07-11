#include<stdio.h>

void main()
{
	int start, end;
	printf("Enter Start & End");
	scanf("%d %d",&start, &end);
	
	int sum=0;
	for(int i=start; i<=end; i=i+2)
	{
		sum = sum + i;	
	}
	printf("%d",sum);
}