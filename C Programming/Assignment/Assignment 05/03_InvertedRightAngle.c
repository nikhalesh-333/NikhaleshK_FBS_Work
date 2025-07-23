#include<stdio.h>

void main()
{
	int no;
	printf("Enter Number");
	scanf("%d",&no);
	
	for (int i =1;i<=no;i++)
	{
		for (int j=no;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}