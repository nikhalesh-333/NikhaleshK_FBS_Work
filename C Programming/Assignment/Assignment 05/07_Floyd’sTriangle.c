#include<stdio.h>

void main()
{
	int no,count=1;
	printf("Enter Number ");
	scanf("%d",&no);
	
	for(int i=1;i<=no;i++)
	{
		
		for(int j=1;j<=i;j++)
		{
			printf("%d ",count++);
			
		}
		
		printf("\n");
	}
}