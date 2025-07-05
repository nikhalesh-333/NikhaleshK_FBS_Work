#include<stdio.h>

void main()
{
	int a, b, c;
	printf("Enter three sides of a Triangle ");
	scanf("%d %d %d",&a, &b, &c);
	
	if(a==b && b==c && a==c)
	{	
		printf("The Triangle is Equilateral");
	}else if (a==b || b==c || a==c)
		{
			printf("The Triangle is Isosceles");	
		}else
		{
			printf("The Triangle is Scalene");	
		}
}
