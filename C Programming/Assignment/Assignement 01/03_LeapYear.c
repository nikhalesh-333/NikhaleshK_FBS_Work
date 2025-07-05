#include<stdio.h>

void main()
{
	int yr;
	printf("Enter Year");
	scanf("%d",&yr);
	
	if (yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0 )
	{
		printf("Year is Leap");
	}else
		printf("Year is Not Leap");
}
