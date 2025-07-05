#include<stdio.h>

void main()
{
	int a, b, result;
	char sym;
	
	printf("Enter Two Number ");
	scanf("%d %d",&a, &b);
	printf("Enter Operator ");
	fflush(stdin);
	scanf("%c", &sym);
	
	if (sym == '+')
	{
		result = a + b;	
		
	}else if(sym == '-')
	{
		result = a - b;	
	}else if(sym == '*')
	{
		result = a * b;	
	}else if(sym == '/')
	{
		result = a / b;	
	}else if(sym == '%')
	{
		result = a % b;	
	}else{
		printf("invalid input");
	}
	printf("%d %c %d = %d",a, sym, b, result);
	
}
