#include<stdio.h>

void main()
{
	int startNumber, endNumber;
	printf("Enter Two Number");
	scanf("%d %d",&startNumber,&endNumber);
	
	for(int i = startNumber; i<=endNumber; i++)
	{
		if(i%2==0)
		{
			printf("Even = %d\n",i);
		}
		else{
			printf("Odd = %d",i);
		}
	}
}