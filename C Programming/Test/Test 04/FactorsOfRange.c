//WAP to print factors of Number in Range = 10 to 15

#include<stdio.h>

void main()
{
	int start, end;
	printf("Enter Start & End ");
	scanf("%d %d",&start, &end);
	
	for(int i = start; i <= end; i++)
	{
		printf("%d = ",i);
		{
			for (int j = 1; j <= i; j++)
			{
				if(i % j == 0)
				{
					printf("%d ",j);	
				}	
			}	
			printf("\n");
		}
			
		
		
	}
}